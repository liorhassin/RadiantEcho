#pragma once

#ifdef RE_PLATFORM_WINDOWS
#ifdef RE_BUILD_DLL
#define RADIANT_ECHO_API _declspec(dllexport)
#else
#define RADIANT_ECHO_API _declspec(dllimport)
#endif
#else
#error RadiantEcho only supports Windows!
#endif
