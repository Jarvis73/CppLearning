#pragma once

#if DLLTEST_DLL_EXPORTS
#define  DLLTEST_DLL __declspec(dllexport)
#else
#define  DLLTEST_DLL __declspec(dllimport)
#endif

int DLLTEST_DLL add(int a, int b);
