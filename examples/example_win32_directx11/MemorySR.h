#pragma once
#include <Windows.h>
#include <vector>
#include <string> 
#include <iostream>
#include <TlHelp32.h>
#include <tchar.h>
#include "globals.h"

class MemorySR
{

public:

	const char* GetEmulatorRunning() {
		if (GetPid("HD-Player.exe") != 0)
			return "HD-Player.exe";

		else if (GetPid("MEmuHeadless.exe") != 0)
			return "MEmuHeadless.exe";

		else if (GetPid("LdVBoxHeadless.exe") != 0)
			return "LdVBoxHeadless.exe";

		else if (GetPid("AndroidProcess.exe") != 0)
			return "AndroidProcess.exe";

		else if (GetPid("aow_exe.exe") != 0)
			return "aow_exe.exe";

		else if (GetPid("Nox.exe") != 0)
			return "Nox.exe";
	}

	DWORD selectemulator;

	void Emulatorhayado()
	{
		selectemulator = GetPid("HD-Player.exe");

		if (AttachProcess2(selectemulator))
		{
			globals.MemoryLogs = "Bluestacks Detected";
		}
		else
		{
			globals.MemoryLogs = "Emulator No Detected";
		}
	}

	void ReWrite(std::string type, DWORD_PTR dwStartRange, DWORD_PTR dwEndRange, BYTE* Search, BYTE* Replace)
	{
		if (!AttackProcess(GetEmulatorRunning()))
			globals.MemoryLogs = type + ": An unexpected error occurred";


		bool Status = ReplacePattern(dwStartRange, dwEndRange, Search, Replace, true);
		if (Status)
			globals.MemoryLogs = type + " - Enabled!";
		else
			globals.MemoryLogs = type + ": Failed to Enable!";

		CloseHandle(ProcessHandle);
	}

	void Anticheat()
	{
		if (!AttackProcess(GetEmulatorRunning()))
			globals.MemoryLogs = "An unexpected error occurred";

		bool st = ReplacePattern(0x0L, 0x00007fffffffffff,
			new BYTE[]{ 0x00, 0x00, 0xA0, 0xE3, 0x21, 0x00, 0x84, 0xE8, 0x70, 0x8C, 0xBD, 0xE8, 0xF0, 0x4F, 0x2D, 0xE9 },
			new BYTE[]{ 0x00, 0xF0, 0x20, 0xE3 }, true);

		bool st2 = ReplacePattern(0x0L, 0x00007fffffffffff,
			new BYTE[]{ 0x47, 0x61, 0x6D, 0x65, 0x56, 0x61, 0x72 },
			new BYTE[]{ 0x47, 0x61, 0x6D, 0x65, 0x56, 0x61, 0x72, 0x4F, 0x66, 0x66 }, true);

		bool st3 = ReplacePattern(0x0L, 0x00007fffffffffff,
			new BYTE[]{ 0x00, 0x48, 0x2D, 0xE9, 0x0D, 0xB0, 0xA0, 0xE1, 0x18, 0xD0, 0x4D, 0xE2, 0x04, 0x00, 0x0B, 0xE5, 0x08, 0x10, 0x0B, 0xE5, 0x0C, 0x20, 0x8D, 0xE5, 0x04, 0x00, 0x1B, 0xE5, 0x08, 0x10, 0x1B, 0xE5, 0x08, 0x00, 0x8D, 0xE5, 0x16, 0x00, 0x00, 0xEB, 0x08, 0x10, 0x1B, 0xE5, 0x28, 0x10, 0xD1, 0xE5, 0x01, 0x10 },
			new BYTE[]{ 0x1E, 0xFF, 0x2F, 0xE1 }, true);

		bool st4 = ReplacePattern(0x0L, 0x00007fffffffffff,
			new BYTE[]{ 0x0A, 0x00, 0xA0, 0xE3, 0x96, 0x00, 0x81, 0xE0, 0x00, 0x00, 0x51, 0xE3, 0x02, 0x01, 0x00, 0x1A },
			new BYTE[]{ 0x00, 0xF0, 0x20, 0xE3 }, true);

		bool st5 = ReplacePattern(0x0L, 0x00007fffffffffff,
			new BYTE[]{ 0x0A, 0x00, 0xA0, 0xE3, 0x6E, 0x00, 0x54, 0xE3, 0x3F, 0x00, 0x00, 0x13, 0x10, 0x8C, 0xBD, 0xE8 },
			new BYTE[]{ 0x00, 0xF0, 0x20, 0xE3 }, true);

		globals.MemoryLogs = "Casi Listo...";

		bool st6 = ReplacePattern(0x0L, 0x00007fffffffffff,
			new BYTE[]{ 0x49, 0x44, 0x48, 0x48, 0x42, 0x47, 0x42, 0x4E, 0x48, 0x4D, 0x44 },
			new BYTE[]{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, true);

		bool st7 = ReplacePattern(0x0L, 0x00007fffffffffff,
			new BYTE[]{ 0x0A, 0x00, 0xA0, 0xE3, 0x09, 0x10, 0xA0, 0xE1, 0xDE, 0x06, 0x00, 0xEB, 0x2C, 0x70, 0x99, 0xE5 },
			new BYTE[]{ 0x00, 0xF0, 0x20, 0xE3 }, true);

		if (st7) {
			globals.MemoryLogs = "AntiCheat: Enabled!";
		}
		else
			globals.MemoryLogs = "AntiCheat: Failed to Enable!";

		CloseHandle(ProcessHandle);
	}

	void Antiban()
	{
		if (!AttackProcess(GetEmulatorRunning()))
			globals.MemoryLogs = "An unexpected error occurred";

		bool st = ReplacePattern(0x0L, 0x00007fffffffffff,
			new BYTE[]{ 0xF6, 0x0D, '?', 0xEA },
			new BYTE[]{ 0x00, 0xF0, 0x20, 0xE3 }, true);

		bool st2 = ReplacePattern(0x0L, 0x00007fffffffffff,
			new BYTE[]{ 0x7F, 0x45, 0x4C, 0x46, 0x01, 0x01, 0x0A, 0x00, 0x00, 0x00 },
			new BYTE[]{ 0x01, 0x00, 0xA0, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1, 0x00, 0x00 }, true);

		bool st3 = ReplacePattern(0x0L, 0x00007fffffffffff,
			new BYTE[]{ 0x0A, 0x00, 0xA0, 0xE3, '?', '?', '?', '?', '?', '?', '?', '?', 0x03 },
			new BYTE[]{ 0x00, 0xF0, 0x20, 0xE3 }, true);

		bool st4 = ReplacePattern(0x0L, 0x00007fffffffffff,
			new BYTE[]{ 0x0A, 0x00, 0xA0, 0xE3, '?', '?', '?', '?', '?', '?', '?', '?', 0x02 },
			new BYTE[]{ 0x0A, 0x00, 0xA0, 0xE3, '?', '?', '?', '?', '?', '?', '?', '?', 0x02 }, true);

		bool st5 = ReplacePattern(0x0L, 0x00007fffffffffff,
			new BYTE[]{ 0x10, 0x4C, 0x2D, 0xE9, 0x08, 0xB0, 0x8D, 0xE2, 0xD0, 0xD0, 0x4D, 0xE2, 0x0C, 0xC0, 0x9B },
			new BYTE[]{ 0x00, 0x00, 0xA0, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1 }, true);

		bool st6 = ReplacePattern(0x0L, 0x00007fffffffffff,
			new BYTE[]{ 0x00, 0x48, 0x2D, 0xE9, 0x0D, 0xB0, 0xA0, 0xE1, 0x90, 0xD0, 0x4D, 0xE2 },
			new BYTE[]{ 0x00, 0x00, 0xA0, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1 }, true);

		bool st7 = ReplacePattern(0x0L, 0x00007fffffffffff,
			new BYTE[]{ 0x0A, 0x00, 0xA0, 0xE3, '?', '?', '?', '?', '?', '?', '?', '?', 0x04 },
			new BYTE[]{ 0x00, 0xF0, 0x20, 0xE3 }, true);

		globals.MemoryLogs = "Casi Listo...";

		bool st8 = ReplacePattern(0x0L, 0x00007fffffffffff,
			new BYTE[]{ 0x10, 0x4C, 0x2D, 0xE9, 0x08, 0xB0, 0x8D, 0xE2, 0x40, 0xD0, 0x4D, 0xE2, 0xE0, 0x20, 0x9F },
			new BYTE[]{ 0x00, 0x00, 0xA0, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1 }, true);
		globals.MemoryLogs = "Casi Listo.";
		bool st9 = ReplacePattern(0x0L, 0x00007fffffffffff,
			new BYTE[]{ 0x0A, 0x00, 0xA0, 0xE3, '?', '?', '?', '?', '?', '?', '?', '?', 0x90, 0x00, 0x9F, 0xE5 },
			new BYTE[]{ 0x00, 0xF0, 0x20, 0xE3 }, true);
		globals.MemoryLogs = "Casi Listo..";
		bool st10 = ReplacePattern(0x0L, 0x00007fffffffffff,
			new BYTE[]{ 0x0A, 0x00, 0xA0, 0xE3, 0xB0, 0x01, 0xCD, 0xE1, 0x10, 0x00, 0x8D, 0xE2, 0x10 },
			new BYTE[]{ 0x00, 0xF0, 0x20, 0xE3 }, true);
		globals.MemoryLogs = "Casi Listo...";
		bool st11 = ReplacePattern(0x0L, 0x00007fffffffffff,
			new BYTE[]{ 0x00, 0x48, 0x2D, 0xE9, 0x0D, 0xB0, 0xA0, 0xE1, 0x10, 0xD0, 0x4D, 0xE2, 0x64, 0x02 },
			new BYTE[]{ 0x00, 0x00, 0xA0, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1 }, true);

		if (st11) {
			globals.MemoryLogs = "AntiBlock Fucked: Enabled!";
		}
		else
			globals.MemoryLogs = "AntiBlock Fucked: Failed to Enable!";

		CloseHandle(ProcessHandle);
	}

	void AntiLogo()
	{
		if (!AttackProcess(GetEmulatorRunning()))
			globals.MemoryLogs = "An unexpected error occurred";

		bool st = ReplacePattern(0x0L, 0x00007fffffffffff,
			new BYTE[]{ 0x7F, 0x45, 0x4C, 0x46, 0x01, 0x01, 0x01, 0x00 },
			new BYTE[]{ 0x7F, 0x45, 0x4C, 0x46, 0x01, 0x01, 0x0A, 0x00 }, true);

		if (st)
		{
			globals.MemoryLogs = "Securitys - Logo: Enabled!";

		}
		else
			globals.MemoryLogs = "Securitys - Logo: Failed to Enable!";

		CloseHandle(ProcessHandle);
	}


	void bypassblack()
	{
		if (!AttackProcess(GetEmulatorRunning()))
			globals.MemoryLogs = "An unexpected error occurred";




		bool st = ReplacePattern(0x0L, 0x00007fffffffffff,
			new BYTE[]{ 0x47, 0x61, 0x6d, 0x65, 0x56, 0x61, 0x72 },
			new BYTE[]{ 0x47, 0x61, 0x6d, 0x65, 0x56, 0x40, 0x72 }, true);

		if (st) {
			globals.MemoryLogs = "Securitys - Reports: Enabled!";
		}
		else
			globals.MemoryLogs = "Securitys - Reports: Failed to Enable!";

		CloseHandle(ProcessHandle);
	}


	void deWrite(std::string type, DWORD_PTR dwStartRange, DWORD_PTR dwEndRange, BYTE* Search, BYTE* Replace)
	{
		if (!AttackProcess(GetEmulatorRunning()))
			globals.MemoryLogs = type + ": An unexpected error occurred";;

		bool Status = ReplacePattern(dwStartRange, dwEndRange, Search, Replace, true);
		if (Status)
			globals.MemoryLogs = type + " - Disabled!";
		else
			globals.MemoryLogs = type + ": Failed to Disable!";

		CloseHandle(ProcessHandle);
	}

	DWORD ProcessId = 0;
	HANDLE ProcessHandle;

	typedef struct _MEMORY_REGION {
		DWORD_PTR dwBaseAddr;
		DWORD_PTR dwMemorySize;
	}MEMORY_REGION;

	int GetPid(const char* procname) {

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

	BOOL AttachProcess2(DWORD ProcId)
	{
		if (ProcId == 0)
			return false;
		ProcessId = ProcId;
		ProcessHandle = OpenProcess(PROCESS_ALL_ACCESS, 0, ProcessId);
		return ProcessHandle != nullptr;
	}

	BOOL AttackProcess(const char* procname) {
		DWORD ProcId = GetPid(procname);
		if (ProcId == 0)
			return false;

		ProcessId = ProcId;
		ProcessHandle = OpenProcess(PROCESS_ALL_ACCESS, 0, ProcessId);
		return ProcessHandle != nullptr;
	}

	bool ChangeProtection(ULONG Address, size_t size, DWORD NewProtect, DWORD& OldProtect)
	{
		return VirtualProtectEx(ProcessHandle, (LPVOID)Address, size, NewProtect, &OldProtect);;
	}

	bool ReplacePattern(DWORD_PTR dwStartRange, DWORD_PTR dwEndRange, BYTE* SearchAob, BYTE* ReplaceAob, bool ForceWrite = false)
	{
		int RepByteSize = _msize(ReplaceAob);
		if (RepByteSize <= 0) return false;
		std::vector<DWORD_PTR> foundedAddress;



		FindPattern(dwStartRange, dwEndRange, SearchAob, foundedAddress);
		if (foundedAddress.empty())
			return false;


		Beep(600, 400);
		//OutputDebugStringA(std::to_string(foundedAddress.size()).c_str());

		DWORD OldProtect;
		for (int i = 0; i < foundedAddress.size(); i++)
		{
			ChangeProtection(foundedAddress[i], RepByteSize, PAGE_EXECUTE_READWRITE, OldProtect);
			WriteProcessMemory(ProcessHandle, (LPVOID)foundedAddress[i], ReplaceAob, RepByteSize, 0);
		}

		return true;
	}

	bool FindPattern(DWORD_PTR StartRange, DWORD_PTR EndRange, BYTE* SearchBytes, std::vector<DWORD_PTR>& AddressRet)
	{

		BYTE* pCurrMemoryData = NULL;
		MEMORY_BASIC_INFORMATION	mbi;
		std::vector<MEMORY_REGION> m_vMemoryRegion;
		mbi.RegionSize = 0x1000;
		DWORD_PTR dwAddress = StartRange;
		DWORD_PTR nSearchSize = _msize(SearchBytes);


		while (VirtualQueryEx(ProcessHandle, (LPCVOID)dwAddress, &mbi, sizeof(mbi)) && (dwAddress < EndRange) && ((dwAddress + mbi.RegionSize) > dwAddress))
		{

			if ((mbi.State == MEM_COMMIT) && ((mbi.Protect & PAGE_GUARD) == 0) && (mbi.Protect != PAGE_NOACCESS) && ((mbi.AllocationProtect & PAGE_NOCACHE) != PAGE_NOCACHE))
			{

				MEMORY_REGION mData = { 0 };
				mData.dwBaseAddr = (DWORD_PTR)mbi.BaseAddress;
				mData.dwMemorySize = mbi.RegionSize;
				m_vMemoryRegion.push_back(mData);

			}
			dwAddress = (DWORD_PTR)mbi.BaseAddress + mbi.RegionSize;

		}

		std::vector<MEMORY_REGION>::iterator it;
		for (it = m_vMemoryRegion.begin(); it != m_vMemoryRegion.end(); it++)
		{
			MEMORY_REGION mData = *it;


			DWORD_PTR dwNumberOfBytesRead = 0;
			pCurrMemoryData = new BYTE[mData.dwMemorySize];
			ZeroMemory(pCurrMemoryData, mData.dwMemorySize);
			ReadProcessMemory(ProcessHandle, (LPCVOID)mData.dwBaseAddr, pCurrMemoryData, mData.dwMemorySize, &dwNumberOfBytesRead);
			if ((int)dwNumberOfBytesRead <= 0)
			{
				delete[] pCurrMemoryData;
				continue;
			}
			DWORD_PTR dwOffset = 0;
			int iOffset = Memfind(pCurrMemoryData, dwNumberOfBytesRead, SearchBytes, nSearchSize);
			while (iOffset != -1)
			{
				dwOffset += iOffset;
				AddressRet.push_back(dwOffset + mData.dwBaseAddr);
				dwOffset += nSearchSize;
				iOffset = Memfind(pCurrMemoryData + dwOffset, dwNumberOfBytesRead - dwOffset - nSearchSize, SearchBytes, nSearchSize);
			}

			if (pCurrMemoryData != NULL)
			{
				delete[] pCurrMemoryData;
				pCurrMemoryData = NULL;
			}

		}
		return TRUE;
	}

	int Memfind(BYTE* buffer, DWORD_PTR dwBufferSize, BYTE* bstr, DWORD_PTR dwStrLen) {
		if (dwBufferSize < 0) {
			return -1;
		}
		DWORD_PTR  i, j;
		for (i = 0; i < dwBufferSize; i++) {
			for (j = 0; j < dwStrLen; j++) {
				if (buffer[i + j] != bstr[j] && bstr[j] != '?')
					break;

			}
			if (j == dwStrLen)
				return i;
		}
		return -1;
	}

	typedef LONG(NTAPI* NtSuspendProcess)(IN HANDLE ProcessHandle);
	typedef LONG(NTAPI* NtResumeProcess)(IN HANDLE ProcessHandle);

	void suspend(DWORD processId)
	{
		HANDLE processHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, processId);

		NtSuspendProcess pfnNtSuspendProcess = (NtSuspendProcess)GetProcAddress(
			GetModuleHandleA("ntdll"), "NtSuspendP");

		pfnNtSuspendProcess(processHandle);

	}

	void resume_process(DWORD processId)
	{
		HANDLE hThreadSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);

		THREADENTRY32 threadEntry;
		threadEntry.dwSize = sizeof(THREADENTRY32);

		Thread32First(hThreadSnapshot, &threadEntry);

		do
		{
			if (threadEntry.th32OwnerProcessID == processId)
			{
				HANDLE hThread = OpenThread(THREAD_ALL_ACCESS, FALSE,
					threadEntry.th32ThreadID);

				ResumeThread(hThread);
				CloseHandle(hThread);
			}
		} while (Thread32Next(hThreadSnapshot, &threadEntry));

		CloseHandle(hThreadSnapshot);
	}

	void suspend_process(DWORD processId)
	{
		HANDLE hThreadSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);

		THREADENTRY32 threadEntry;
		threadEntry.dwSize = sizeof(THREADENTRY32);

		Thread32First(hThreadSnapshot, &threadEntry);

		do
		{
			if (threadEntry.th32OwnerProcessID == processId)
			{
				HANDLE hThread = OpenThread(THREAD_ALL_ACCESS, FALSE,
					threadEntry.th32ThreadID);

				SuspendThread(hThread);
				CloseHandle(hThread);
			}
		} while (Thread32Next(hThreadSnapshot, &threadEntry));

		CloseHandle(hThreadSnapshot);
	}

};

