//Connector
#include <Windows.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <iostream>

typedef void(__fastcall* ConnectToAddress_t)(
    unsigned long long param_1,
    unsigned long long param_2,
    unsigned long long param_3
    );

static ConnectToAddress_t g_originalConnectToAddress = nullptr;


void __fastcall HookedConnectToAddress(
    unsigned long long param_1,  
    unsigned long long param_2,  // address
    unsigned long long param_3
)
{
    const char* originalAddress = (const char*)param_2;


    char buffer[512];
    const char* customAddress = "127.0.0.1:25200";
    _snprintf_s(buffer, _TRUNCATE, "Connecting to: %s\n", customAddress);
    Logging(INFO, buffer);


    if (g_originalConnectToAddress)
    {
        g_originalConnectToAddress(param_1, (unsigned long long)customAddress, param_3);
    }
}



void HookConnectToAddress()
{
    LPVOID target = reinterpret_cast<LPVOID>(0x140559CD0);
    MH_CreateHook(target, &HookedConnectToAddress, reinterpret_cast<void**>(&g_originalConnectToAddress));
    MH_EnableHook(target);
}
