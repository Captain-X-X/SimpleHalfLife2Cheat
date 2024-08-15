// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "Hooks.h"
// you should know what this is
BOOL WINAPI HookStart(HMODULE HookModule)
{
    // Initilize our cheats
    SEHooks::InitilizeHooks();
    while (!GetAsyncKeyState(VK_END) & 1)
    {
        std::this_thread::sleep_for(std::chrono::microseconds(200));
    }
    // Clean up on exit
    SEHooks::DisableHooks();

    // exit thread
    FreeLibraryAndExitThread(HookModule, 0);
    return TRUE;
}

// if you dont know what this is... wtf you doin' looking at my code??
BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH)
    {
        DisableThreadLibraryCalls(hModule);
        CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)HookStart, hModule, 0, nullptr);
    }
    return TRUE;
}