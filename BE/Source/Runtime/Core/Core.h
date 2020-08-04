//Copyright 2020 Bo0m Interactive. All Rights Reserved
#pragma once

#ifdef BE_PLATFORM_WINDOWS
#ifdef BE_BUILD_DLL
#define ENGINE_API __declspec(dllexport)
#else
#define ENGINE_API __declspec(dllimport)
#endif
#else 
#error Bo0m Engine Only Supports Windows
#endif

