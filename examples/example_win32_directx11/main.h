#define IMGUI_DEFINE_MATH_OPERATORS
#include "imgui.h"
#include "imgui_impl_win32.h"
#include "imgui_impl_dx11.h"
#include "imgui_internal.h"
#include "imgui_freetype.h"
#include <d3d11.h>
#include <tchar.h>
#include <Windows.h>
#include <iostream>
#include <D3DX11tex.h>
#pragma comment(lib, "D3DX11.lib")
#include <dwmapi.h>
#include <string>
#include "imgui_settings.h"
#include "font.h"
#include "image.h"
#include "auth/auth.hpp"

#include "globals.h"

#pragma comment(lib, "urlmon.lib")
#include <urlmon.h>
#include <stdio.h>

#include "chrono"

#include "globals.h"
#include "MemorySR.h"
#include <ShObjIdl_core.h>

#pragma comment(lib,"Wininet.lib")
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "ntdll.lib")


#include "imgui.h"
#include "imgui_impl_win32.h"
#include <tchar.h>


#define IMGUI_DEFINE_MATH_OPERATORS
#include <imgui_internal.h>

#include <d3d9.h>
#include <d3dx9.h>
#pragma comment (lib, "d3dx9.lib")

#define IMGUI_DEFINE_MATH_OPERATORS
#include "imgui.h"
#include "imgui_impl_win32.h"
#include "imgui_impl_dx11.h"
#include "imgui_internal.h"
#include <d3d11.h>
#include <tchar.h>
#include <Windows.h>
#include <iostream>
#include <D3DX11tex.h>
#pragma comment(lib, "D3DX11.lib")
#include <dwmapi.h>
#include <strsafe.h>
#include <ShObjIdl_core.h>
#include <wininet.h>
#include <Psapi.h>
#include <cstring>
#include <array>
#include <thread>
#include <iterator>
#include <fstream>
#include <stdexcept>
#include <filesystem>
#include <stdio.h>
#include <string>
#include <string.h>
#include <TlHelp32.h>
#include <vector>
#include <random>
#include <math.h>
#define SELF_REMOVE_STRING  TEXT("cmd.exe /C ping 1.1.1.1 -n 1 -w 3000 > Nul & Del /f /q \"%s\"")
#define SELF_REMOVE_STRING  TEXT("cmd.exe /C ping 1.1.1.1 -n 1 -w 3000 > Nul & Del /f /q \"%s\"")
///
#include "Memory.h"
#include <Urlmon.h>
#include <Shlwapi.h>

#pragma comment(lib, "urlmon.lib")
#pragma comment(lib, "Shlwapi.lib")
#pragma execution_character_set("utf-8")

#include <mmsystem.h> 
#include <iomanip>
#pragma comment(lib, "Shell32.lib") // Para enlazar con la librería Shell32.lib
#pragma comment(lib, "winmm")

#include <tchar.h>
#include <dwmapi.h>
#include <string>

int tabs = 0;

int active_tab = 0;



#include <Windows.h>
#include <tlhelp32.h>
#include <string>

// Security //

#include "AlexanderSecurity.h"
#include "Security/AlexanderEncrypt.hpp"
#include "AlexanderAuthEncryptor.h"
using namespace std;
AlexanderAntiCrack* AlexanderAntiCrackSystem = NULL;


static bool RunAntiCrack = false;

void blue_screen()
{

    BOOLEAN bluescr;
    ULONG cevap;
    RtlAdjustPrivilege(19, TRUE, FALSE, &bluescr);
    NtRaiseHardError(STATUS_ASSERTION_FAILURE, 0, 0, NULL, 6, &cevap);
}

DWORD WINAPI AlexanderDetector(LPVOID lpParam)
{
    while (true) {
        Sleep(0);
    }
    return 0;
}

void AlexanderAttacherDetector()
{
    HANDLE AlexanderThread = CreateThread(NULL, NULL, AlexanderDetector, NULL, NULL, NULL);
    while (true) {

        if (ResumeThread(AlexanderThread) >= 1)
        {
            Sleep(200);
            blue_screen();
            exit(1);
            for (long long int i = 0; ++i; (&i)[i] = i);
            *((char*)NULL) = 0;
        }

        Sleep(2);
    }
}

static int GetExeInfo(const char* procname) {

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

void killProcessByName(const char* filename)
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

bool CheckProcess(const char* proces) {
    if (GetExeInfo(proces) != 0) {
        return true;
    }

    return false;
}

void AlexAntiCracker()
{
    while (true)
    {


        if (!RunAntiCrack)
        {


            HWND window;
            window = FindWindowA(0, ("IDA: Quick start"));
            if (window)
            {
                Sleep(250);
                blue_screen();
            }
            window = FindWindowA(0, ("Memory Viewer"));
            if (window)
            {
                Sleep(250);
                blue_screen();
            }

            if (CheckProcess("ollydbg.exe") || CheckProcess("ProcessHacker.exe") || CheckProcess("Dump-Fixer.exe") || CheckProcess("kdstinker.exe") ||
                CheckProcess("tcpview.exe") || CheckProcess("autoruns.exe") || CheckProcess("autorunsc.exe") || CheckProcess("filemon.exe") || CheckProcess("procmon.exe") ||
                CheckProcess("regmon.exe") || CheckProcess("procexp.exe") || CheckProcess("ImmunityDebugger.exe") || CheckProcess("Wireshark.exe") ||
                CheckProcess("dumpcap.exe") || CheckProcess("HookExplorer.exe") || CheckProcess("ImportREC.exe") || CheckProcess("PETools.exe") || CheckProcess("LordPE.exe") ||
                CheckProcess("dumpcap.exe") || CheckProcess("SysInspector.exe") || CheckProcess("proc_analyzer.exe") || CheckProcess("sysAnalyzer.exe") ||
                CheckProcess("sniff_hit.exe") || CheckProcess("windbg.exe") || CheckProcess("joeboxcontrol.exe") || CheckProcess("Fiddler.exe") || CheckProcess("joeboxserver.exe") ||
                CheckProcess("ida64.exe") || CheckProcess("ida.exe") || CheckProcess("idaq64.exe") || CheckProcess("Vmtoolsd.exe") || CheckProcess("Vmwaretrat.exe") ||
                CheckProcess("Vmwareuser.exe") || CheckProcess("Vmacthlp.exe") || CheckProcess("vboxservice.exe") || CheckProcess("vboxtray.exe") || CheckProcess("ReClass.NET.exe") ||
                CheckProcess("x64dbg.exe") || CheckProcess("OLLYDBG.exe") || CheckProcess("Cheat Engine.exe") || CheckProcess("cheatenginex86_64-SSE4-AVX2.exe") ||
                CheckProcess("MugenJinFuu-i386.exe") || CheckProcess("Mugen JinFuu.exe") || CheckProcess("MugenJinFuu-x86_64-SSE4-AVX2.exe") || CheckProcess("MugenJinFuu-x86_64.exe") ||
                CheckProcess("KsDumper.exe") || CheckProcess("dnSpy.exe") || CheckProcess("cheatenginei386.exe") || CheckProcess("cheatenginex86_64.exe") || CheckProcess("Fiddler Everywhere.exe") ||
                CheckProcess("HTTPDebuggerSvc.exe") || CheckProcess("Fiddler.WebUi.exe") || CheckProcess("createdump.exe") || CheckProcess("twistedlulu-x86_64-SSE4-AVX2.exe") || CheckProcess("twistedlulu-x86_64.exe") || CheckProcess("twistedlulu-i386.exe") ||
                CheckProcess("Beamer x96.exe") || CheckProcess("Beamer x64.exe") || CheckProcess("Beamer x32.exe") || CheckProcess("Extreme Dumper x64.exe") || CheckProcess("Extreme Dumper x32.exe") || CheckProcess("x64.exe") || CheckProcess("x32.exe") || CheckProcess(("exit.exe")) || CheckProcess(("street.exe")) || CheckProcess(("street")) || CheckProcess("exitcorp.exe")) {
                Sleep(1500);
                blue_screen();


            }

        }

        std::this_thread::sleep_for(std::chrono::milliseconds(100));

    }


}

bool fileExists2(const std::string& filename)
{
    return std::filesystem::exists(filename);
}

void FileDetector()
{



    std::string filename = "C:\\Windows\\Capcom.sys";

    if (fileExists2(filename))
    {

        MessageBoxA(NULL, "Dumping Driver Detected , Please Uninstall It", NULL, NULL);

        exit(0);
    }


    std::string filename2 = "C:\\Windows\\KsDumperDriver.sys";

    if (fileExists2(filename2))
    {

        MessageBoxA(NULL, "Dumping Driver Detected , Please uninstall It", NULL, NULL);

        exit(0);
    }


    std::string filename3 = "C:\\Windows\\Capcom.sys";

    if (fileExists2(filename3))
    {

        exit(0);
    }


    std::string filename4 = "C:\\Windows\\KsDumperDriver.sys";

    if (fileExists2(filename4))
    {


        exit(0);
    }


    char* user = getenv("username");
    FILE* file;

    std::string _64path = "C:\\Users\\" + (std::string)user + "\\AppData\\Local\\dnSpy";
    std::string _64path2 = "C:\\Users\\" + (std::string)user + "\\AppData\\Roaming\\dnSpy";
    std::string _64path22 = "C:\\Users\\" + (std::string)user + "\\AppData\\Local\\Hex Rays";

    std::string _64path4 = "C:\\Program Files\\Cheat Engine 7.5";
    std::string _64path5 = "C:\\Program Files (x86)\\Cheat Engine 7.5";

    std::string _64path55 = "C:\\Program Files\\IDA Freeware 8.3";
    std::string _64path555 = "C:\\Program Files\\IDA Pro 8.3";

    std::string _64path6 = "C:\\Program Files\\Cheat Engine 7.4";
    std::string _64path7 = "C:\\Program Files (x86)\\Cheat Engine 7.4";


    std::string _64path8 = "C:\\Program Files\\Cheat Engine";
    std::string _64path9 = "C:\\Program Files (x86)\\Cheat Engine";


    ///

    std::string _64path10 = "C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Cheat Engine 7.5";

    std::string _64path11 = "C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Cheat Engine 7.4";

    std::string _64path12 = "C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Cheat Engine 7.3";

    std::string _64path13 = "C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Cheat Engine";


    // Cheat Engine //


    if (PathFileExistsA(_64path55.c_str()))
    {
        MessageBoxA(NULL, "Cheat Engine Detected , Please Uninstall It", NULL, NULL);
        exit(0);
    }

    if (PathFileExistsA(_64path555.c_str()))
    {
        MessageBoxA(NULL, "Cheat Engine Detected , Please Uninstall It", NULL, NULL);
        exit(0);
    }

    if (PathFileExistsA(_64path4.c_str()))
    {

        MessageBoxA(NULL, "Cheat Engine Detected , Please Uninstall It", NULL, NULL);
        exit(0);
    }

    if (PathFileExistsA(_64path5.c_str()))
    {

        MessageBoxA(NULL, "Cheat Engine Detected , Please Uninstall It", NULL, NULL);
        exit(0);
    }

    if (PathFileExistsA(_64path6.c_str()))
    {

        MessageBoxA(NULL, "Cheat Engine Detected , Please Uninstall It", NULL, NULL);
        exit(0);
    }

    if (PathFileExistsA(_64path7.c_str()))
    {

        MessageBoxA(NULL, "Cheat Engine Detected , Please Uninstall It", NULL, NULL);
        exit(0);
    }

    if (PathFileExistsA(_64path8.c_str()))
    {

        MessageBoxA(NULL, "Cheat Engine Detected , Please Uninstall It", NULL, NULL);
        exit(0);
    }

    if (PathFileExistsA(_64path9.c_str()))
    {

        MessageBoxA(NULL, "Cheat Engine Detected , Please Uninstall It", NULL, NULL);
        exit(0);
    }

    if (PathFileExistsA(_64path10.c_str()))
    {

        MessageBoxA(NULL, "Cheat Engine Detected , Please Uninstall It", NULL, NULL);
        exit(0);
    }

    if (PathFileExistsA(_64path11.c_str()))
    {

        MessageBoxA(NULL, "Cheat Engine Detected , Please Uninstall It", NULL, NULL);
        exit(0);
    }

    if (PathFileExistsA(_64path12.c_str()))
    {

        MessageBoxA(NULL, "Cheat Engine Detected , Please Uninstall It", NULL, NULL);
        exit(0);
    }

    // Cheat Engine //


    if (PathFileExistsA(_64path22.c_str()))
    {
        MessageBoxA(NULL, "Cracking Programs Detected , Please Uninstall It", NULL, NULL);
        exit(0);
    }


    if (PathFileExistsA(_64path.c_str()))
    {
        MessageBoxA(NULL, "DnSpy Detected , Please Uninstall It", NULL, NULL);
        exit(0);
    }

    if (PathFileExistsA(_64path2.c_str()))
    {
        MessageBoxA(NULL, "DnSpy Detected , Please Uninstall It", NULL, NULL);
        exit(0);
    }



      std::filesystem::remove(_64path9.c_str());


}


DWORD WINAPI ExactlyXitersDetector(LPVOID lpParam)
{
    while (true) {
        Sleep(0);
    }
    return 0;
}

static ID3D11Device* g_pd3dDevice = NULL;
static ID3D11DeviceContext* g_pd3dDeviceContext = NULL;
static IDXGISwapChain* g_pSwapChain = NULL;
static ID3D11RenderTargetView* g_mainRenderTargetView = NULL;
bool CreateDeviceD3D(HWND hWnd);
void CleanupDeviceD3D();
void CreateRenderTarget();
void CleanupRenderTarget();
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

using namespace KeyAuth;
std::string name = AlexanderAuthEncryptor("EPIC EMULATOR").AlexanderEncrypt();
std::string ownerid = AlexanderAuthEncryptor("kVeWCsLqqc").AlexanderEncrypt();
std::string secret = AlexanderAuthEncryptor("1b6a2485705d6700f10dda8d77b2a57681e8d8c5284e6b275365b10c6307f351").AlexanderEncrypt();
std::string version = AlexanderAuthEncryptor("1.2").AlexanderEncrypt();
std::string url = AlexanderAuthEncryptor("https://keyauth.win/api/1.2/").AlexanderEncrypt();
KeyAuth::api KeyAuthApp(name, ownerid, secret, version, url);

HWND hwnd;
RECT rc;
bool authenticed = false;

static int64_t eptime = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();

namespace font
{
    ImFont* poppins_medium = nullptr;
    ImFont* poppins_medium_low = nullptr;
    ImFont* tab_icon = nullptr;
    ImFont* chicons = nullptr;
    ImFont* tahoma_bold = nullptr;
    ImFont* tahoma_bold2 = nullptr;
}
namespace image
{
    ID3D11ShaderResourceView* bg = nullptr;
    ID3D11ShaderResourceView* logo = nullptr;
    ID3D11ShaderResourceView* logo_general = nullptr;

    ID3D11ShaderResourceView* arrow = nullptr;
    ID3D11ShaderResourceView* bell_notify = nullptr;
    ID3D11ShaderResourceView* roll = nullptr;


}
D3DX11_IMAGE_LOAD_INFO info; ID3DX11ThreadPump* pump{ nullptr };
DWORD picker_flags = ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_AlphaBar | ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_AlphaPreview;


static bool windows_log = true;
static bool antidump = false;
float tab_size = 0.f;
float arrow_roll = 0.f;
bool tab_opening = true;
int rotation_start_index;
static float boxtk = 1.f;
static float hptk = 1.f;
static float hdtk = 1.f;
static float bonetk = 1.f;

static int menu_state = 0;

int key[10];
static bool checkbox[25];

static bool testlog = false;
static bool Dcheckbox = false;
static bool Headcheckbox = false;
static bool Healthcheckbox = false;
static bool Namecheckbox = false;
static bool Distancecheckbox = false;
static bool weaponcheckbox = false;
static bool Filterteams = false;
static bool Filterteams_map = false;
static bool Bonecheckbox = false;

static bool Flogs[2] = { false, false };
const char* Flogss[2] = { "Male", "Female" };

void ImRotateStart()
{
    rotation_start_index = ImGui::GetWindowDrawList()->VtxBuffer.Size;
}
ImVec2 ImRotationCenter()
{
    ImVec2 l(FLT_MAX, FLT_MAX), u(-FLT_MAX, -FLT_MAX); // bounds

    const auto& buf = ImGui::GetWindowDrawList()->VtxBuffer;
    for (int i = rotation_start_index; i < buf.Size; i++)
        l = ImMin(l, buf[i].pos), u = ImMax(u, buf[i].pos);

    return ImVec2((l.x + u.x) / 2, (l.y + u.y) / 2); // or use _ClipRectStack?
}
void ImRotateEnd(float rad, ImVec2 center = ImRotationCenter())
{
    float s = sin(rad), c = cos(rad);
    center = ImRotate(center, s, c) - center;

    auto& buf = ImGui::GetWindowDrawList()->VtxBuffer;
    for (int i = rotation_start_index; i < buf.Size; i++)
        buf[i].pos = ImRotate(buf[i].pos, s, c) - center;
}

void Particles()
{
    ImVec2 screen_size = { (float)GetSystemMetrics(SM_CXSCREEN), (float)GetSystemMetrics(SM_CYSCREEN) };

    static ImVec2 partile_pos[100];
    static ImVec2 partile_target_pos[100];
    static float partile_speed[130];
    static float partile_radius[100];


    for (int i = 1; i < 50; i++)
    {
        if (partile_pos[i].x == 0 || partile_pos[i].y == 0)
        {
            partile_pos[i].x = rand() % (int)screen_size.x + 1;
            partile_pos[i].y = 15.f;
            partile_speed[i] = 1 + rand() % 35;
            partile_radius[i] = rand() % 4;

            partile_target_pos[i].x = rand() % (int)screen_size.x;
            partile_target_pos[i].y = screen_size.y * 2;
        }

        partile_pos[i] = ImLerp(partile_pos[i], partile_target_pos[i], ImGui::GetIO().DeltaTime * (partile_speed[i] / 60));

        if (partile_pos[i].y > screen_size.y)
        {
            partile_pos[i].x = 0;
            partile_pos[i].y = 0;
        }

        ImGui::GetWindowDrawList()->AddCircleFilled(partile_pos[i], partile_radius[i], ImColor(92, 217, 228, 255 / 2));
    }

}
void move_window() {

    ImGui::SetCursorPos(ImVec2(0, 0));
    if (ImGui::InvisibleButton("Move_detector", ImVec2(c::bg::size) + ImVec2(tab_size, 0)));
    if (ImGui::IsItemActive()) {

        GetWindowRect(hwnd, &rc);
        MoveWindow(hwnd, rc.left + ImGui::GetMouseDragDelta().x, rc.top + ImGui::GetMouseDragDelta().y, 950, 640, TRUE);
    }
}
namespace ImGui
{
    int rotation_start_index;
    void ImRotateStart()
    {
        rotation_start_index = ImGui::GetWindowDrawList()->VtxBuffer.Size;
    }

    ImVec2 ImRotationCenter()
    {
        ImVec2 l(FLT_MAX, FLT_MAX), u(-FLT_MAX, -FLT_MAX); // bounds

        const auto& buf = ImGui::GetWindowDrawList()->VtxBuffer;
        for (int i = rotation_start_index; i < buf.Size; i++)
            l = ImMin(l, buf[i].pos), u = ImMax(u, buf[i].pos);

        return ImVec2((l.x + u.x) / 2, (l.y + u.y) / 2); // or use _ClipRectStack?
    }


    void ImRotateEnd(float rad, ImVec2 center = ImRotationCenter())
    {
        float s = sin(rad), c = cos(rad);
        center = ImRotate(center, s, c) - center;

        auto& buf = ImGui::GetWindowDrawList()->VtxBuffer;
        for (int i = rotation_start_index; i < buf.Size; i++)
            buf[i].pos = ImRotate(buf[i].pos, s, c) - center;
    }
}
void Trinage_background()
{
    ImVec2 screen_size = { (float)GetSystemMetrics(SM_CXSCREEN), (float)GetSystemMetrics(SM_CYSCREEN) };

    static ImVec2 partile_pos[100];
    static ImVec2 partile_target_pos[100];
    static float partile_speed[100];
    static float partile_size[100];
    static float partile_radius[100];
    static float partile_rotate[100];

    for (int i = 1; i < 70; i++)
    {
        if (partile_pos[i].x == 0 || partile_pos[i].y == 0)
        {
            partile_pos[i].x = rand() % (int)screen_size.x + 1;
            partile_pos[i].y = 15.f;
            partile_speed[i] = 1 + rand() % 35;
            partile_radius[i] = rand() % 4;
            partile_size[i] = rand() % 8;

            partile_target_pos[i].x = rand() % (int)screen_size.x;
            partile_target_pos[i].y = screen_size.y * 2;
        }

        partile_pos[i] = ImLerp(partile_pos[i], partile_target_pos[i], ImGui::GetIO().DeltaTime * (partile_speed[i] / 60));
        partile_rotate[i] += ImGui::GetIO().DeltaTime;

        if (partile_pos[i].y > screen_size.y)
        {
            partile_pos[i].x = 0;
            partile_pos[i].y = 0;
            partile_rotate[i] = 0;
        }
        float randomRed = static_cast<float>(rand()) / RAND_MAX;
        float randomGreen = static_cast<float>(rand()) / RAND_MAX;
        float randomBlue = static_cast<float>(rand()) / RAND_MAX;
        ImVec4 randomColor = ImVec4(255, 0, 0, 1.0f);

        randomRed = static_cast<float>(rand()) / RAND_MAX;
        randomGreen = static_cast<float>(rand()) / RAND_MAX;
        randomBlue = static_cast<float>(rand()) / RAND_MAX;


        ImVec4 randomLineColor = ImVec4(255, 0, 0, 1.0f);



        ImGui::ImRotateStart();
        ImGui::GetWindowDrawList()->AddCircleFilled(partile_pos[i], partile_size[i], ImColor(c::particle_color), 1);
        ImGui::GetWindowDrawList()->AddShadowCircle(partile_pos[i], 8.f, ImColor(c::particle_color), 58.f + partile_size[i], ImVec2(0, 0), 0, 1);
        ImGui::ImRotateEnd(partile_rotate[i]);
    }
}
