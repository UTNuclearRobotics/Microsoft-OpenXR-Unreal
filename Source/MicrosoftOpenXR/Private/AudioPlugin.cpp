// BSD 3-Clause License
//
// Copyright (c) 2023, The University of Texas at Austin
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// * Redistributions of source code must retain the above copyright notice, this
//   list of conditions and the following disclaimer.
//
// * Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the following disclaimer in the documentation
//   and/or other materials provided with the distribution.
//
// * Neither the name of the copyright holder nor the names of its
//   contributors may be used to endorse or promote products derived from
//   this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
///////////////////////////////////////////////////////////////////////////////

#include "AudioPlugin.h"

#if PLATFORM_WINDOWS || PLATFORM_HOLOLENS

#include "Engine\Engine.h"
#include "GameDelegates.h"

using namespace winrt::Windows;

namespace MicrosoftOpenXR
{
	/*
	* Constructor
	*/
	FAudioPlugin::FAudioPlugin(){}


	/*
	* Destructor
	*/
	FAudioPlugin::~FAudioPlugin(){}


	/*
	* Register this module
	*/
	void FAudioPlugin::Register()
	{
		//UE_LOG(LogHMD, Warning, TEXT("Audio Plugin Register called."));
		IModularFeatures::Get().RegisterModularFeature(GetModularFeatureName(), this);
		FGameDelegates::Get().GetEndPlayMapDelegate().AddRaw(this, &FAudioPlugin::OnEndPlay);
	}


	/*
	* Unregister this module at game shutdown
	*/
	void FAudioPlugin::Unregister()
	{
		FGameDelegates::Get().GetEndPlayMapDelegate().RemoveAll(this);
		IModularFeatures::Get().UnregisterModularFeature(GetModularFeatureName(), this);
	}


	/*
	* Called when module is destroyed in game.
	*/
	void FAudioPlugin::OnEndPlay(){}


	/**
	* @brief Get all integrated device names and IDs integrated on the HoloLens 2.
	*
	* DeviceAdded function gets called when an integrated device is found.
	* 
	* @return void		DeviceAdded callback prints to output log the Device ID and Name.
	*/
	void FAudioPlugin::GetAllIntegratedDevices()
	{
		HoloLensDeviceWatcher = Devices::Enumeration::DeviceInformation::CreateWatcher();
		HoloLensDeviceWatcher.Added({ this, &FAudioPlugin::DeviceAdded });
		HoloLensDeviceWatcher.Start();
		UE_LOG(LogTemp, Warning, TEXT("Started to listen for devices"));
	}


	/**
	* @brief Callback on integrated device found.
	*
	* Gets called from GetAllIntegratedDevices()
	*
	* @param this        Devices::Enumeration::DeviceInformation watcher object.
	* @param addedDevice Devices::Enumeration::DeviceInformation information object.
	* @return void       Prints to output log the Device ID and Name.
	*/
	void FAudioPlugin::DeviceAdded(Devices::Enumeration::DeviceWatcher const&, Devices::Enumeration::DeviceInformation const& addedDevice)
	{
		// Get and print device information
		UE_LOG(LogTemp, Warning, TEXT("Integrated Device Found:"));
		UE_LOG(LogTemp, Warning, TEXT("Device ID: %s"), addedDevice.Id().c_str());
		UE_LOG(LogTemp, Warning, TEXT("Device Name: %s"), addedDevice.Name().c_str());
	}


	/**
	* @brief Find only integrated audio devices (microphones) on HoloLens 2.
	* 
	* reference:
	* https://learn.microsoft.com/en-us/azure/ai-services/speech-service/how-to-select-audio-input-devices
	*
	* @return void		Prints to output log the Device ID and Name.
	*/
	void FAudioPlugin::GetIntegratedAudioDevices()
	{
		// start async
		auto promise = Devices::Enumeration::DeviceInformation::FindAllAsync(
			Devices::Enumeration::DeviceClass::AudioCapture);

		// callback on async completed
		promise.Completed([](Foundation::IAsyncOperation<Devices::Enumeration::DeviceInformationCollection> const& sender,
			Foundation::AsyncStatus /* asyncStatus */) {
				auto devices = sender.GetResults();

				// log 
				UE_LOG(LogTemp, Warning, TEXT("Integratred Audio Devices Found:"));
				for (const auto& device : devices) 
				{
					// log name and id
					UE_LOG(LogTemp, Warning, TEXT("Device Name: %s; ID: %s"), 
						device.Name().c_str(), 
						device.Id().c_str());
				}
			});
	}


	/**
	* @brief Initializes AudioGraph objects & nodes and registers default audio input device (microphone).
	*
	* 1) Creates and initializes (with specific settings) an AudioGraph object, 
	*    AudioDeviceInputNode object, & FrameOutputNode object. 
	* 2) Creates a callback that registers the default audio input device (default microphone).
	* 3) Initializes a RobofleetUnrealClient instance to publish out information from the FrameOutputNode.
	* 
	* reference: 
	* https://github.com/xris1658/cppwinrt-notes/blob/main/AudioGraph-20210617.md
	*
	* @return void
	*/
	void FAudioPlugin::InitRawAudioCapture()
	{
		// create AudioGraph async operation
		Media::Audio::AudioGraphSettings settings(Media::Render::AudioRenderCategory::Speech);
		CreateAudioGraphAsyncOperation = Media::Audio::AudioGraph::CreateAsync(settings);
		CreateAudioGraphAsyncResult = CreateAudioGraphAsyncOperation.get();

		// error check to ensure audio graph async was successfully created
		if (CreateAudioGraphAsyncResult.Status() != decltype(CreateAudioGraphAsyncResult.Status())::Success)
		{
			UE_LOG(LogTemp, Warning, TEXT("Creating an audio graph "));
			return;
		}

		// assign async operation tp AudioGraph object
		MicrophoneAudioGraph = CreateAudioGraphAsyncResult.Graph();

		// create OUTPUT node object to latter access raw audio data from
		AudioOutputNode = MicrophoneAudioGraph.CreateFrameOutputNode();

		// create INPUT node object that samples data from audio device.
		CreateAudioDeviceInputNodeOperation = MicrophoneAudioGraph.CreateDeviceInputNodeAsync(
			Media::Capture::MediaCategory::Speech);

		/* TODO: set output properties
		winrt::Windows::Media::MediaProperties::AudioEncodingProperties output_properties;
		output_properties.SampleRate(16000);
		AudioOutputNode = MicrophoneAudioGraph.CreateFrameOutputNode(output_properties);
		*/

		/* TODO: set input properties
		// ref:  https://learn.microsoft.com/en-us/uwp/api/windows.media.capture.mediacategory?view=winrt-22621
		winrt::Windows::Media::MediaProperties::AudioEncodingProperties input_properties;
		input_properties.SampleRate(48000);
		CreateAudioDeviceInputNodeOperation = MicrophoneAudioGraph.CreateDeviceInputNodeAsync(
			Media::Capture::MediaCategory::Speech, input_properties);
		*/

		// async operation. when default audio input device is found, set as input node device. 
		CreateAudioDeviceInputNodeOperation.Completed([this](
			Foundation::IAsyncOperation<Media::Audio::CreateAudioDeviceInputNodeResult> const& results,
			auto&& async_status)
			{
				// check for successful discovery
				if (results.get().Status() != Media::Audio::AudioDeviceNodeCreationStatus::Success)
				{
					UE_LOG(LogTemp, Warning, TEXT("failure attempting to access audio input device"));
					return;
				}

				// assign device to audio input node
				AudioInputNode = results.get().DeviceInputNode();

				// add output node connection
				AudioInputNode.AddOutgoingConnection(AudioOutputNode);

				// start data capture by starting audio graph and input node
				StartRawAudioCapture();
			});

		// create RobofleetUnrealClient module object for later publishing
		robofleet_instance_ = FRobofleetUnrealClientModule::Get()->RobofleetClient;
	}


	/**
	* @brief Starts AudioGraph and audio input nodes to start capturing data from audio device (microphone).
	*
	* Called from inside the InitRawAudioCapture() method. InitRawAudioCapture() needs to be
	* called before this. QuantumStarted callback inside this function is called continuously
	* when microphone data is begin sampled on the audio device.
	* 
	* reference:
	* https://github.com/xris1658/cppwinrt-notes/blob/main/AudioGraph-20210617.md
	*
	* @return void
	*/
	void FAudioPlugin::StartRawAudioCapture()
	{
		MicrophoneAudioGraph.Start();      // first start graph
		AudioInputNode.Start();            // then start input node
		GetAudioGraphEncodingProperties(); // print/send encoding properties

		// audio graph capture callback
		MicrophoneAudioGraph.QuantumStarted([this](auto&& sender, auto&& args)
			{
				// DEBUG: REMOVE
				/*if (!StartAudioCapture) {
					start_time = std::chrono::high_resolution_clock::now();
					StartAudioCapture = true;
				}*/

				GetRawAudioCaptureData();
			});
	}


	/**
	* @brief Logs AudioInputNode encoding properties and publishes information to Robofleet.
	*
	* @return void Print to log.
	*/
	void FAudioPlugin::GetAudioGraphEncodingProperties()
	{
		Media::MediaProperties::AudioEncodingProperties encoding_properties = AudioInputNode.EncodingProperties();
		
		// print out
		UE_LOG(LogTemp, Warning, TEXT("channels: %d"), encoding_properties.ChannelCount());
		UE_LOG(LogTemp, Warning, TEXT("sample_rate: %d Hz"), encoding_properties.SampleRate());
		UE_LOG(LogTemp, Warning, TEXT("sample_format: %s"), encoding_properties.Type().c_str());
		UE_LOG(LogTemp, Warning, TEXT("bitrate: %d bits/s"), encoding_properties.Bitrate());
		UE_LOG(LogTemp, Warning, TEXT("bit depth / bits per sample: %d bits per sample"), encoding_properties.BitsPerSample());

		return; // DEBUG: don't publish to robofleet.

		// create AudioInfo struct to publish over robofleet
		AudioInfo audio_info;
		audio_info.channels = encoding_properties.ChannelCount();
		audio_info.sample_rate = encoding_properties.SampleRate();
		audio_info.sample_format = "S32LE";
		audio_info.bitrate = encoding_properties.Bitrate();
		audio_info.coding_format = "wave";

		// publish to robofleet
		FRobofleetUnrealClientModule::Get()->RobofleetClient->PublishAudioInfo("microphone/info", "hololens", audio_info);
	}


	/**
	* @brief Access the raw audio data in the AudioGraph OutputNode and publish over Robofleet.
	*
	* Called from inside the StartRawAudioCapture() QuantumStarted(...) callback.
	* Where all the magic happens for capturing raw audio data.
	*
	* @return void Publishes information to RobofleetServer.
	*/
	void FAudioPlugin::GetRawAudioCaptureData()
	{
		// init
		uint8_t* dataInBytes{ nullptr };
		uint32_t capacityInBytes{ 0U };

		// get frame from audio output node and lock the buffer
		Media::AudioFrame audio_frame = AudioOutputNode.GetFrame();
		Media::AudioBuffer buffer = audio_frame.LockBuffer(Media::AudioBufferAccessMode::Read);

		// ref: https://learn.microsoft.com/en-us/uwp/api/windows.media.audiobuffer.createreference?view=winrt-22621#windows-media-audiobuffer-createreference
		Foundation::IMemoryBufferReference reference = buffer.CreateReference(); 
		
		// fill byte data from buffer into array
		auto byteAccess = reference.as<IMemoryBufferByteAccess>();
		winrt::check_hresult(byteAccess->GetBuffer(&dataInBytes, &capacityInBytes));

		// format and fill audio data into vector RobofleetUnrealClient can publish.
		audio_data_.data.clear();
		audio_data_.data.resize(capacityInBytes);
		memcpy(audio_data_.data.data(), dataInBytes, capacityInBytes);

		// publish to robofleet server
		FRobofleetUnrealClientModule::Get()->RobofleetClient->PublishAudioData("microphone/data", "hololens", audio_data_);
	}

	/**
	* @brief Stop AudioGraph and stop accessing microphone
	*
	* @return void
	*/
	void FAudioPlugin::StopRawAudioCapture()
	{
		AudioInputNode.Stop();       
		MicrophoneAudioGraph.Stop();
	}

} // namespace MicrosoftOpenXR

#endif //PLATFORM_WINDOWS || PLATFORM_HOLOLENS



