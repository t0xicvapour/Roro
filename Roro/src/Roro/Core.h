#pragma once

#ifdef RO_PLATFORM_WINDOWS
	#ifdef RO_BUILD_DLL
		#define RORO_API __declspec(dllexport)
	#else
		#define RORO_API __declspec(dllimport)
	#endif // RO_BUILD_DLL
#else
	#error RORO ONLY SUPPORTS WINDOWS!
#endif // RO_PLATFORM_WINDOWS
