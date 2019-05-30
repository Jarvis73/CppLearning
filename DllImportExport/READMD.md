# DllImportExport

A simple example for using `__declspec(dllexport)` and `__declspec(dllimport)`.

This solution contains 2 projects:

* DllImportExport: A project with `Configuration Type` being dynamic library `DllImportExport.dll`. We also give an example of `DllMain` function to show how the dynamic library is loaded.
* TestProj: A test project to load `DllImportExport.dll` and test exported function `add(int, int)` defined in `DllImportExport\dlltest.h`.
