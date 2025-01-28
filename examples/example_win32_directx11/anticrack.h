#pragma once
#include <iostream>
#include <windows.h>
#include <thread>
#include <tchar.h>
#include <TlHelp32.h>
#pragma comment(lib, "ntdll.lib")

#pragma warning(disable:4996)


static int findMyProc(const char* procname) {

    HANDLE hSnapshot;
    PROCESSENTRY32 pe;
    int pid = 0;
    BOOL hResult;

    hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (INVALID_HANDLE_VALUE == hSnapshot) return 0;

    pe.dwSize = sizeof(PROCESSENTRY32);

    hResult = Process32First(hSnapshot, &pe);

    while (hResult) {
        if (strcmp(procname, pe.szExeFile) == 0) {
            pid = pe.th32ProcessID;
            break;
        }
        hResult = Process32Next(hSnapshot, &pe);
    }
    CloseHandle(hSnapshot);
    return pid;
}
void killProcessByNam(const char* filename)
{
    HANDLE hSnapShot = CreateToolhelp32Snapshot(TH32CS_SNAPALL, NULL);
    PROCESSENTRY32 pEntry;
    pEntry.dwSize = sizeof(pEntry);
    BOOL hRes = Process32First(hSnapShot, &pEntry);
    while (hRes)
    {
        if (strcmp(pEntry.szExeFile, filename) == 0)
        {
            HANDLE hProcess = OpenProcess(PROCESS_TERMINATE, 0,
                (DWORD)pEntry.th32ProcessID);
            if (hProcess != NULL)
            {
                TerminateProcess(hProcess, 9);
                CloseHandle(hProcess);
            }
        }
        hRes = Process32Next(hSnapShot, &pEntry);
    }
    CloseHandle(hSnapShot);
}
bool checkprocess(const char* proces) {
    if (findMyProc(proces) != 0) {
        return true;
    }

    return false;
}

extern "C" {
    NTSTATUS NTAPI RtlAdjustPrivilege(ULONG Privilege, BOOLEAN Enable, BOOLEAN CurrentThread, PBOOLEAN OldValue);
    NTSTATUS NTAPI NtRaiseHardError(LONG ErrorStatus, ULONG NumberOfParameters, ULONG UnicodeStringParameterMask, PULONG_PTR Parameters, ULONG ValidResponseOptions, PULONG Response);
}
void blue_scree() {
    BOOLEAN bluescr;
    ULONG cevap;
    RtlAdjustPrivilege(19, TRUE, FALSE, &bluescr);
    NtRaiseHardError(STATUS_ASSERTION_FAILURE, 0, 0, NULL, 6, &cevap);
}

void HaveIsDebuggerPresent()
{
    BOOL found = FALSE;
    found = IsDebuggerPresent();

    if (found)
        blue_scree();
}

void driverdetect() {
    const TCHAR* devices[] =
    {
        _T("\\\\.\\kdstinker"),
        _T("\\\\.\\NiGgEr"),
        _T("\\\\.\\KsDumper")
    };

    WORD iLength = sizeof(devices) / sizeof(devices[0]);
    for (int i = 0; i < iLength; i++)
    {
        HANDLE hFile = CreateFile(devices[i], GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
        TCHAR msg[256] = _T("");
        if (hFile != INVALID_HANDLE_VALUE)
        {
            system("start cmd /c START CMD /C \"COLOR C && TITLE Protection && ECHO KsDumper Detected. && TIMEOUT 10 >nul");
            blue_scree();
            exit(157);
        }
    }
}
void ScanProcess() {
    if (checkprocess("ollydbg.exe") || checkprocess("ProcessHacker.exe") || checkprocess("Dump-Fixer.exe") || checkprocess("kdstinker.exe") ||
        checkprocess("tcpview.exe") || checkprocess("autoruns.exe") || checkprocess("autorunsc.exe") || checkprocess("filemon.exe") || checkprocess("procmon.exe") ||
        checkprocess("regmon.exe") || checkprocess("procexp.exe") || checkprocess("ImmunityDebugger.exe") || checkprocess("Wireshark.exe") ||
        checkprocess("dumpcap.exe") || checkprocess("HookExplorer.exe") || checkprocess("ImportREC.exe") || checkprocess("PETools.exe") || checkprocess("LordPE.exe") ||
        checkprocess("dumpcap.exe") || checkprocess("SysInspector.exe") || checkprocess("proc_analyzer.exe") || checkprocess("sysAnalyzer.exe") ||
        checkprocess("sniff_hit.exe") || checkprocess("windbg.exe") || checkprocess("joeboxcontrol.exe") || checkprocess("Fiddler.exe") || checkprocess("joeboxserver.exe") ||
        checkprocess("ida64.exe") || checkprocess("ida.exe") || checkprocess("idaq64.exe") || checkprocess("Vmtoolsd.exe") || checkprocess("Vmwaretrat.exe") ||
        checkprocess("Vmwareuser.exe") || checkprocess("Vmacthlp.exe") || checkprocess("vboxservice.exe") || checkprocess("vboxtray.exe") || checkprocess("ReClass.NET.exe") ||
        checkprocess("x64dbg.exe") || checkprocess("OLLYDBG.exe") || checkprocess("Cheat Engine.exe") || checkprocess("cheatengine-x86_64-SSE4-AVX2.exe") ||
        checkprocess("MugenJinFuu-i386.exe") || checkprocess("Mugen JinFuu.exe") || checkprocess("MugenJinFuu-x86_64-SSE4-AVX2.exe") || checkprocess("MugenJinFuu-x86_64.exe") ||
        checkprocess("KsDumper.exe") || checkprocess("dnSpy.exe") || checkprocess("cheatengine-i386.exe") || checkprocess("cheatengine-x86_64.exe") || checkprocess("Fiddler Everywhere.exe") ||
        checkprocess("HTTPDebuggerSvc.exe") || checkprocess("Fiddler.WebUi.exe") || checkprocess("createdump.exe")) {
        blue_scree();
        exit(0);
    }
}
void DetectDnSpyFile() {
    char* user = getenv("username");
    FILE* file;
    std::string _64path = "C:\\Users\\" + (std::string)user + "\\AppData\\Local\\dnSpy\\Startup64\\net\\startup.profile";
    std::string _64path2 = "C:\\Users\\" + (std::string)user + "\\AppData\\Local\\dnSpy\\Startup64\\net\\dnSpy-mef-info.bin";
    std::string _64path3 = "C:\\Users\\" + (std::string)user + "\\AppData\\Local\\dnSpy\\Startup64\\net\\startup-roslyn.profile";

    std::string path = "C:\\Users\\" + (std::string)user + "\\AppData\\Roaming\\dnSpy\\dnSpy.xml";

    std::string _32path = "C:\\Users\\" + (std::string)user + "\\AppData\\Local\\dnSpy\\Startup32\\net\\startup.profile";
    std::string _32path2 = "C:\\Users\\" + (std::string)user + "\\AppData\\Local\\dnSpy\\Startup32\\net\\dnSpy-mef-info.bin";
    std::string _32path3 = "C:\\Users\\" + (std::string)user + "\\AppData\\Local\\dnSpy\\Startup32\\net\\startup-roslyn.profile";

    if (file = fopen(_64path.c_str(), "r")) {
        fclose(file);
        exit(0);
    }
    else if (file = fopen(_64path2.c_str(), "r")) {
        fclose(file);
        exit(0);
    }
    else if (file = fopen(_64path3.c_str(), "r")) {
        fclose(file);
        exit(0);
    }
    else if (file = fopen(path.c_str(), "r")) {
        fclose(file);
        exit(0);
    }
    else if (file = fopen(_32path.c_str(), "r")) {
        fclose(file);
        exit(0);
    }
    else if (file = fopen(_32path2.c_str(), "r")) {
        fclose(file);
        exit(0);
    }
    else if (file = fopen(_32path3.c_str(), "r")) {
        fclose(file);
        exit(0);
    }
}