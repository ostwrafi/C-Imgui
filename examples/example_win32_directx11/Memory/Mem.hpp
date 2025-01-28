#pragma once
#include <Windows.h>
#include <iostream>
#include <TlHelp32.h>
#include <tchar.h>
#include <vector>
#include <Psapi.h>


class CMemory {
public:
    static CMemory* Initialize();
public:
    void Start(int pid);
    int GetProcessID();
public:
    HANDLE processHandle;
    int processId = 0;


    void ScanMem(DWORD64 start, DWORD64 end, BYTE* sign, const char* mask, std::vector<DWORD_PTR>& foundAddresses, int _count);

private:
    CMemory();
    ~CMemory();
    static CMemory* Memory;
};
