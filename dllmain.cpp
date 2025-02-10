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
}

//Change the call FUN_1401c28b0(0) to FUN_1401c28b0(3).
void Patch_FUN_1409dca10()
{
    DWORD oldProtect = 0;
    unsigned char* patchAddr = (unsigned char*)0x1409dcdaf;
    const SIZE_T patchLen = 7;
    unsigned char originalBytes[patchLen];
    memcpy(originalBytes, patchAddr, patchLen);
    if (originalBytes[0] != 0x33 || originalBytes[1] != 0xC9 || originalBytes[2] != 0xE8)
        return;
    int32_t relOffset = *(int32_t*)(patchAddr + 3);
    uintptr_t originalCallReturn = (uintptr_t)(patchAddr + 7);
    uintptr_t callTarget = originalCallReturn + relOffset;
    SIZE_T trampolineSize = 15;
    void* trampoline = VirtualAlloc(NULL, trampolineSize, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
    if (!trampoline)
        return;
    unsigned char tramp[15] = { 0 };
    SIZE_T offset = 0;
    tramp[offset++] = 0xB9;
    tramp[offset++] = 0x03;
    tramp[offset++] = 0x00;
    tramp[offset++] = 0x00;
    tramp[offset++] = 0x00;
    tramp[offset++] = 0xE8;
    int32_t callRel = (int32_t)(callTarget - ((uintptr_t)trampoline + offset + 5));
    memcpy(tramp + offset, &callRel, 4);
    offset += 4;
    tramp[offset++] = 0xE9;
    int32_t jmpRel = (int32_t)(((uintptr_t)patchAddr + patchLen) - ((uintptr_t)trampoline + offset + 5));
    memcpy(tramp + offset, &jmpRel, 4);
    offset += 4;
    memcpy(trampoline, tramp, trampolineSize);
    if (VirtualProtect(patchAddr, patchLen, PAGE_EXECUTE_READWRITE, &oldProtect))
    {
        int32_t jmpOffset = (int32_t)(((uintptr_t)trampoline) - ((uintptr_t)patchAddr + 5));
        patchAddr[0] = 0xE9;
        memcpy(patchAddr + 1, &jmpOffset, 4);
        for (SIZE_T i = 5; i < patchLen; i++)
            patchAddr[i] = 0x90;
        VirtualProtect(patchAddr, patchLen, oldProtect, &oldProtect);
    }
}

// Make if (1 < iVar6 - 3U) { never execute.  forces DAT_141c29068 to 0.
void Patch_FUN_1406eea10()
{
    DWORD oldProtect = 0;
    unsigned char patchJump[6] = { 0xE9, 0xF1, 0x00, 0x00, 0x00, 0x90 };
    LPVOID addrJump = (LPVOID)0x1406eecfd;
    if (VirtualProtect(addrJump, sizeof(patchJump), PAGE_EXECUTE_READWRITE, &oldProtect))
    {
        memcpy(addrJump, patchJump, sizeof(patchJump));
        VirtualProtect(addrJump, sizeof(patchJump), oldProtect, &oldProtect);
    }
    LPVOID addrDAT = (LPVOID)0x141c29068;
    if (VirtualProtect(addrDAT, sizeof(uint64_t), PAGE_READWRITE, &oldProtect))
    {
        memset(addrDAT, 0, sizeof(uint64_t));
        VirtualProtect(addrDAT, sizeof(uint64_t), oldProtect, &oldProtect);
    }
}

//Make FUN_1403c9c00 do nothing.
void Patch_FUN_1403c9c00()
{
    DWORD oldProtect = 0;
    LPVOID addrFUN = (LPVOID)0x1403c9c00;
    unsigned char patch[8] = { 0xC3, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90 };
    if (VirtualProtect(addrFUN, sizeof(patch), PAGE_EXECUTE_READWRITE, &oldProtect))
    {
        memcpy(addrFUN, patch, sizeof(patch));
        VirtualProtect(addrFUN, sizeof(patch), oldProtect, &oldProtect);
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
        Patch_FUN_1409dca10(); //????
        Patch_FUN_1406eea10(); //????
        Patch_FUN_1403c9c00(); //????
        Patch_FUN_140549020(); //Makes the game load forever on the title screen. Fixes a crash.



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
