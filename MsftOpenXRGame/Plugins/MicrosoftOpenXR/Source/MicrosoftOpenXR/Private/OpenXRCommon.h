#pragma once

#include <openxr/openxr.h>

#include "HAL/Platform.h"

#if PLATFORM_WINDOWS || PLATFORM_HOLOLENS

#pragma warning(disable : 5205 4265 4268 4946)

#define XR_USE_PLATFORM_WIN32 1
#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows/AllowWindowsPlatformAtomics.h"
#include "Windows/PreWindowsApi.h"

#include <unknwn.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#endif

#include <openxr/openxr_platform.h>

#if PLATFORM_WINDOWS || PLATFORM_HOLOLENS
#include "Windows/PostWindowsApi.h"
#include "Windows/HideWindowsPlatformAtomics.h"
#include "Windows/HideWindowsPlatformTypes.h"
#endif

#include "IOpenXRHMDPlugin.h"
#include "IOpenXRExtensionPlugin.h"

namespace MicrosoftOpenXR
{
	XrPath GetXrPath(XrInstance Instance, const char* PathString);
}
