#include <Windows.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <iostream>

//Proxy for DirectInput8Create
typedef HRESULT(WINAPI* DirectInput8Create_t)(
    HINSTANCE hinst,
    DWORD dwVersion,
    REFIID riidltf,
    LPVOID* ppvOut,
    LPUNKNOWN punkOuter
    );
static DirectInput8Create_t g_RealDirectInput8Create = nullptr;

extern "C" __declspec(dllexport) HRESULT WINAPI DirectInput8Create(
    HINSTANCE hinst,
    DWORD dwVersion,
    REFIID riidltf,
    LPVOID* ppvOut,
    LPUNKNOWN punkOuter
)
{
    if (g_RealDirectInput8Create)
    {
        return g_RealDirectInput8Create(hinst, dwVersion, riidltf, ppvOut, punkOuter);
    }
    return E_FAIL;
}

static HMODULE LoadDInput8()
{
    char systemPath[MAX_PATH + 1] = { 0 };
    GetSystemDirectoryA(systemPath, MAX_PATH);
    strcat_s(systemPath, "\\dinput8.dll");
    HMODULE hReal = LoadLibraryA(systemPath);
    if (!hReal)
    {
        hReal = LoadLibraryA("dinput8_org.dll");
    }
    return hReal;
}



//[RCX+0x84] to 1.
void Patch_FUN_1406fa060()
{
    DWORD oldProtect = 0;
    unsigned char patch1[7] = { 0xC6, 0x81, 0x84, 0x00, 0x00, 0x00, 0x01 };
    LPVOID addrPatch1 = (LPVOID)0x1406fa094;
    if (VirtualProtect(addrPatch1, sizeof(patch1), PAGE_EXECUTE_READWRITE, &oldProtect))
    {
        memcpy(addrPatch1, patch1, sizeof(patch1));
        VirtualProtect(addrPatch1, sizeof(patch1), oldProtect, &oldProtect);
    }
    unsigned char patch2[6] = { 0x90, 0x90, 0x90, 0x90, 0x90, 0x90 };
    LPVOID addrPatch2 = (LPVOID)0x1406fa09B;
    if (VirtualProtect(addrPatch2, sizeof(patch2), PAGE_EXECUTE_READWRITE, &oldProtect))
    {
        memcpy(addrPatch2, patch2, sizeof(patch2));
        VirtualProtect(addrPatch2, sizeof(patch2), oldProtect, &oldProtect);
    }
}




//force FUN_1400076e0 to see param2 and param3 as 1.
void Patch_FUN_1400076e0()
{
    DWORD oldProtect = 0;

    unsigned char patchParam3[4] = { 0x41, 0xB0, 0x01, 0x90 }; // MOV r8b,1; NOP
    LPVOID addrParam3 = (LPVOID)0x140007711;
    if (VirtualProtect(addrParam3, sizeof(patchParam3), PAGE_EXECUTE_READWRITE, &oldProtect))
    {
        memcpy(addrParam3, patchParam3, sizeof(patchParam3));
        VirtualProtect(addrParam3, sizeof(patchParam3), oldProtect, &oldProtect);
    }
    unsigned char patchParam2[4] = { 0x41, 0xB6, 0x01, 0x90 }; // MOV r14b,1; NOP
    LPVOID addrParam2 = (LPVOID)0x14000771A;
    if (VirtualProtect(addrParam2, sizeof(patchParam2), PAGE_EXECUTE_READWRITE, &oldProtect))
    {
        memcpy(addrParam2, patchParam2, sizeof(patchParam2));
        VirtualProtect(addrParam2, sizeof(patchParam2), oldProtect, &oldProtect);
    }

    //Fix Start Profiling button.
    {
        unsigned char patch[2] = { 0x90, 0x90 };
        LPVOID address = (LPVOID)0x140007c1f;
        if (VirtualProtect(address, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        {
            memcpy(address, patch, sizeof(patch));
            VirtualProtect(address, sizeof(patch), oldProtect, &oldProtect);
        }
    }

    {
        unsigned char patch[2] = { 0x90, 0x90 };
        LPVOID address = (LPVOID)0x140007d3a;
        if (VirtualProtect(address, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
        {
            memcpy(address, patch, sizeof(patch));
            VirtualProtect(address, sizeof(patch), oldProtect, &oldProtect);
        }
    }

}







extern "C" void __stdcall FUN_140549020_Nop(long long param_1)
{
    return;
}
//Make FUN_140549020 do nothing.
void Patch_FUN_140549020()
{
    DWORD oldProtect = 0;
    LPVOID patchAddr = (LPVOID)0x1405482e2;
    const SIZE_T patchLen = 5;
    uintptr_t target = (uintptr_t)&FUN_140549020_Nop;
    uintptr_t addr = (uintptr_t)patchAddr;
    int32_t relOffset = (int32_t)(target - (addr + patchLen));
    unsigned char patch[5];
    patch[0] = 0xE8;
    memcpy(patch + 1, &relOffset, 4);
    if (VirtualProtect(patchAddr, patchLen, PAGE_EXECUTE_READWRITE, &oldProtect))
    {
        memcpy(patchAddr, patch, patchLen);
        VirtualProtect(patchAddr, patchLen, oldProtect, &oldProtect);
    }
}



BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    {
        DisableThreadLibraryCalls(hModule);

        Patch_FUN_1406fa060(); //Changes the title bar to the server one, Makes the game crash when its loading.
        Patch_FUN_1400076e0(); //Makes the game show the dedicated server UI when the game loads. Quickly blocked by game rendering. Changes the title bar to PVZ Garden Warfare Server. Blocks mouse input in the game UI buttons.
        Patch_FUN_140549020(); //Makes the game load forever on the title screen.


        HMODULE hReal = LoadDInput8();
        if (hReal)
        {
            g_RealDirectInput8Create = reinterpret_cast<DirectInput8Create_t>(
                GetProcAddress(hReal, "DirectInput8Create")
                );
        }


        break;
    }
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
