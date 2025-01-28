#include <Windows.h>
#include <thread>
#include <chrono>
#include <bcrypt.h>

#pragma comment(lib, "ntdll.lib")

extern "C" NTSTATUS NTAPI RtlAdjustPrivilege(ULONG Privilege, BOOLEAN Enable, BOOLEAN CurrentThread, PBOOLEAN OldValue);
extern "C" NTSTATUS NTAPI NtRaiseHardError(LONG ErrorStatus, ULONG NumberOfParameters, ULONG UnicodeStringParameterMask,
    PULONG_PTR Parameters, ULONG ValidResponseOptions, PULONG Response);

namespace BlueScreen
{
    typedef VOID(_stdcall* RtlSetProcessIsCritical) (
        IN BOOLEAN        NewValue,
        OUT PBOOLEAN OldValue,
        IN BOOLEAN     IsWinlogon);

    BOOL EnablePriv(LPCSTR lpszPriv) {
        HANDLE hToken;
        LUID luid;
        TOKEN_PRIVILEGES tkprivs;
        ZeroMemory(&tkprivs, sizeof(tkprivs));

        if (!OpenProcessToken(GetCurrentProcess(), (TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY), &hToken))
            return FALSE;

        if (!LookupPrivilegeValue(NULL, lpszPriv, &luid)) {
            CloseHandle(hToken); return FALSE;
        }

        tkprivs.PrivilegeCount = 1;
        tkprivs.Privileges[0].Luid = luid;
        tkprivs.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;

        BOOL bRet = AdjustTokenPrivileges(hToken, FALSE, &tkprivs, sizeof(tkprivs), NULL, NULL);
        CloseHandle(hToken);
        return bRet;
    }

    BOOL ProcessIsCritical()
    {
        HANDLE hDLL;
        RtlSetProcessIsCritical fSetCritical;

        hDLL = LoadLibraryA("ntdll.dll");
        if (hDLL != NULL)
        {
           // EnablePriv(SE_DEBUG_NAME);
            (fSetCritical) = (RtlSetProcessIsCritical)GetProcAddress((HINSTANCE)hDLL, "RtlSetProcessIsCritical");
            if (!fSetCritical) return 0;
            fSetCritical(1, 0, 0);
            return 1;
        }
        else
            return 0;
    }



    void BlueScreen()
    {
        BOOLEAN bl;
        ULONG Response;
        RtlAdjustPrivilege(19, TRUE, FALSE, &bl); // Enable SeShutdownPrivilege
        NtRaiseHardError(STATUS_ASSERTION_FAILURE, 0, 0, NULL, 6, &Response); // Shutdown
    }

}



namespace AntiDebug
{


    inline int remote_is_present()
    {
        int debugger_present = false;

        CheckRemoteDebuggerPresent(GetCurrentProcess(), &debugger_present); // very interesting method of doing this? possible

        return debugger_present;
    }

    int is_debugger_present()
    {
        return IsDebuggerPresent(); // i am very well aware i couldve just called this in the thread, but this looks better imo & has the same performance
    }

    inline bool debug_perms_check() // check if the program has debug permissions, if it does then it returns true
    {
        PCONTEXT ctx = PCONTEXT(VirtualAlloc(NULL, sizeof(ctx), MEM_COMMIT, PAGE_READWRITE));
        RtlSecureZeroMemory(ctx, sizeof(CONTEXT));

        ctx->ContextFlags = CONTEXT_DEBUG_REGISTERS;

        if (GetThreadContext(GetCurrentThread(), ctx) == 0)
            return -1;


        if (ctx->Dr0 != 0 || ctx->Dr1 != 0 || ctx->Dr2 != 0 || ctx->Dr3 != 0)
            return TRUE;
        else
            return FALSE;
    }


    void AntiDebugLoop()
    {
        for (;;) {



            if (remote_is_present() || is_debugger_present()
                || debug_perms_check())
            {

                BlueScreen::BlueScreen();
                BlueScreen::ProcessIsCritical();
                exit(1);

            }



            std::this_thread::sleep_for(std::chrono::milliseconds(8000));
        }

    }

}

class AlexanderAntiCrack
{
public:

    void bsod()
    {
        BOOLEAN bl;
        ULONG Response;
        RtlAdjustPrivilege(19, TRUE, FALSE, &bl); // Enable SeShutdownPrivilege
        NtRaiseHardError(STATUS_ASSERTION_FAILURE, 0, 0, NULL, 6, &Response); // Shutdow
    }

    void nignog() // Esto detecta el Cheat engine creo
    {
        if (FindWindowA(NULL, ("The Wireshark Network Analyzer"))) { bsod(); }
        if (FindWindowA(NULL, ("Progress Telerik Fiddler Web Debugger"))) { bsod(); }
        if (FindWindowA(NULL, ("Fiddler"))) { bsod(); }
        if (FindWindowA(NULL, ("HTTP Debugger"))) { bsod(); }
        if (FindWindowA(NULL, ("x64dbg"))) { bsod(); }
        if (FindWindowA(NULL, ("dnSpy"))) { bsod(); }
        if (FindWindowA(NULL, ("FolderChangesView"))) { bsod(); }
        if (FindWindowA(NULL, ("BinaryNinja"))) { bsod(); }
        if (FindWindowA(NULL, ("HxD"))) { bsod(); }
        if (FindWindowA(NULL, ("Cheat Engine 7.2"))) { bsod(); }
        if (FindWindowA(NULL, ("Cheat Engine 7.1"))) { bsod(); }
        if (FindWindowA(NULL, ("Cheat Engine 7.4"))) { bsod(); }
        if (FindWindowA(NULL, ("Cheat Engine 7.5"))) { bsod(); }
        if (FindWindowA(NULL, ("Cheat Engine 7.0"))) { bsod(); }
        if (FindWindowA(NULL, ("Cheat Engine 6.9"))) { bsod(); }
        if (FindWindowA(NULL, ("Cheat Engine 6.8"))) { bsod(); }
        if (FindWindowA(NULL, ("GameFuqr 0.0.2"))) { bsod(); }
        if (FindWindowA(NULL, ("GameFuqr"))) { bsod(); }
        if (FindWindowA(NULL, ("gamerfuqr-x86_64"))) { bsod(); }
        if (FindWindowA(NULL, ("gamerfuqr-i386"))) { bsod(); }
        if (FindWindowA(NULL, ("gamefuqr-x86_64-SSE4-AVX2"))) { bsod(); }
        if (FindWindowA(NULL, ("Ida"))) { bsod(); }
        if (FindWindowA(NULL, ("Ida Pro"))) { bsod(); }
        if (FindWindowA(NULL, ("Ida Freeware"))) { bsod(); }
        if (FindWindowA(NULL, ("HTTP Debugger Pro"))) { bsod(); }
        if (FindWindowA(NULL, ("Process Hacker"))) { bsod(); }
        if (FindWindowA(NULL, ("Process Hacker 2"))) { bsod(); }
        if (FindWindowA(NULL, ("OllyDbg"))) { bsod(); }
    }



}; extern AlexanderAntiCrack* AlexanderAntiCrackSystem;



namespace AlexanderAntiDebugger
{


    void bsod()
    {
        BOOLEAN bl;
        ULONG Response;
        RtlAdjustPrivilege(19, TRUE, FALSE, &bl); // Enable SeShutdownPrivilege
        NtRaiseHardError(STATUS_ASSERTION_FAILURE, 0, 0, NULL, 6, &Response); // Shutdow
    }

    void nignog() // Esto detecta el Cheat engine creo
    {
        if (FindWindowA(NULL, ("The Wireshark Network Analyzer"))) { bsod(); }
        if (FindWindowA(NULL, ("Progress Telerik Fiddler Web Debugger"))) { bsod(); }
        if (FindWindowA(NULL, ("Fiddler"))) { bsod(); }
        if (FindWindowA(NULL, ("HTTP Debugger"))) { bsod(); }
        if (FindWindowA(NULL, ("x64dbg"))) { bsod(); }
        if (FindWindowA(NULL, ("dnSpy"))) { bsod(); }
        if (FindWindowA(NULL, ("FolderChangesView"))) { bsod(); }
        if (FindWindowA(NULL, ("BinaryNinja"))) { bsod(); }
        if (FindWindowA(NULL, ("HxD"))) { bsod(); }
        if (FindWindowA(NULL, ("Cheat Engine 7.2"))) { bsod(); }
        if (FindWindowA(NULL, ("Cheat Engine 7.1"))) { bsod(); }
        if (FindWindowA(NULL, ("Cheat Engine 7.4"))) { bsod(); }
        if (FindWindowA(NULL, ("Cheat Engine 7.5"))) { bsod(); }
        if (FindWindowA(NULL, ("Cheat Engine 7.0"))) { bsod(); }
        if (FindWindowA(NULL, ("Cheat Engine 6.9"))) { bsod(); }
        if (FindWindowA(NULL, ("Cheat Engine 6.8"))) { bsod(); }
        if (FindWindowA(NULL, ("GameFuqr 0.0.2"))) { bsod(); }
        if (FindWindowA(NULL, ("GameFuqr"))) { bsod(); }
        if (FindWindowA(NULL, ("gamerfuqr-x86_64"))) { bsod(); }
        if (FindWindowA(NULL, ("gamerfuqr-i386"))) { bsod(); }
        if (FindWindowA(NULL, ("gamefuqr-x86_64-SSE4-AVX2"))) { bsod(); }
        if (FindWindowA(NULL, ("Ida"))) { bsod(); }
        if (FindWindowA(NULL, ("Ida Pro"))) { bsod(); }
        if (FindWindowA(NULL, ("Ida Freeware"))) { bsod(); }
        if (FindWindowA(NULL, ("HTTP Debugger Pro"))) { bsod(); }
        if (FindWindowA(NULL, ("Process Hacker"))) { bsod(); }
        if (FindWindowA(NULL, ("Process Hacker 2"))) { bsod(); }
        if (FindWindowA(NULL, ("OllyDbg"))) { bsod(); }
    }



}; extern AlexanderAntiCrack* AlexanderAntiCrackSystem;
