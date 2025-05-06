#include <iostream>
#include <fstream>
#include <string>
#include "MinHook.h"

typedef HRESULT(WINAPI* DirectInput8Create_t)(HINSTANCE hinst, DWORD dwVersion, REFIID riidltf, LPVOID* ppvOut, LPUNKNOWN punkOuter);
static DirectInput8Create_t g_RealDirectInput8Create = nullptr;

typedef void(__fastcall* ConnectToAddress_t)(unsigned long long param_1, unsigned long long param_2, unsigned long long param_3);
static ConnectToAddress_t originalConnectToAddress = nullptr;

typedef void(__thiscall* Error_t)(long long param_1);
static Error_t originalErrorMessenger = nullptr;

extern "C" __declspec(dllexport) HRESULT WINAPI DirectInput8Create(
    HINSTANCE hinst, DWORD dwVersion, REFIID riidltf, LPVOID* ppvOut, LPUNKNOWN punkOuter)
{
        return g_RealDirectInput8Create(hinst, dwVersion, riidltf, ppvOut, punkOuter);
}

static HMODULE LoadDInput8()
{
    char systemPath[MAX_PATH + 1] = { 0 };
    GetSystemDirectoryA(systemPath, MAX_PATH);
    strcat_s(systemPath, "\\dinput8.dll");
    HMODULE hReal = LoadLibraryA(systemPath);
    if (!hReal)
        hReal = LoadLibraryA("dinput8_org.dll");
    return hReal;
}

static const char* GetSecureReason(int reasonCode)
{
    switch (reasonCode)
    {
    case 0x0: return "Ok";
    case 0x1: return "Wrong Protocol Version";
    case 0x2: return "Wrong Title Version";
    case 0x3: return "Server Full";
    case 0x4: return "Kicked Out";
    case 0x5: return "Banned";
    case 0x6: return "Generic Error";
    case 0x7: return "Wrong Password";
    case 0x8: return "Kicked Out (Demo Over)";
    case 0x9: return "Rank Restricted";
    case 0xa: return "Configuration Not Allowed";
    case 0xb: return "Server Reclaimed";
    case 0xc: return "Missing Content";
    case 0xd: return "Not Verified";
    case 0xe: return "Timed Out";
    case 0xf: return "Connect Failed";
    case 0x10:return "No Reply";
    case 0x11:return "Accept Failed";
    case 0x12:return "Mismatching Content";
    default: return "Unknown";
    }
}

void __fastcall HookedError(long long param_1)
{
    int reason = 0;
    memcpy(&reason, (void*)(param_1 + 0x670), sizeof(reason));
    const char* reasonText = GetSecureReason(reason);

    long long v650 = 0, v658 = 0;
    memcpy(&v650, (void*)(param_1 + 0x650), sizeof(v650));
    memcpy(&v658, (void*)(param_1 + 0x658), sizeof(v658));

    if (v650 == v658) std::cout << "Error: " << reasonText << std::endl;
    else std::cout << "Error: " << reinterpret_cast<char*>(v650) << " " << reasonText << std::endl;
    
    originalErrorMessenger(param_1);
}

void HookError() 
{
    LPVOID target = reinterpret_cast<LPVOID>(0x1405BF3D0);
    MH_CreateHook(target, &HookedError, reinterpret_cast<void**>(&originalErrorMessenger));
    MH_EnableHook(target);
}

void __fastcall HookedConnectToAddress(unsigned long long param_1, unsigned long long param_2, unsigned long long param_3)
{
    std::string address = "127.0.0.1:25200"; 
    std::ifstream file("ip2join.txt");
    if (file.is_open())
    {
        std::getline(file, address); 
        file.close();
    }

    std::cout << "Connecting to: " << address << std::endl;
    originalConnectToAddress(param_1, reinterpret_cast<unsigned long long>(address.c_str()), param_3);
}

void HookConnectToAddress()
{
    LPVOID target = reinterpret_cast<LPVOID>(0x140559CD0);
    MH_CreateHook(target, &HookedConnectToAddress, reinterpret_cast<void**>(&originalConnectToAddress));
    MH_EnableHook(target);
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{

    if (ul_reason_for_call == DLL_PROCESS_ATTACH)
    {
        
        HMODULE hReal = LoadDInput8();
        g_RealDirectInput8Create = reinterpret_cast<DirectInput8Create_t>(GetProcAddress(hReal, "DirectInput8Create"));

        AllocConsole();
        FILE* fConsole = nullptr;
        freopen_s(&fConsole, "CONOUT$", "w", stdout);

        MH_Initialize();
        HookError();
        HookConnectToAddress();

    }
    return 1;
}
