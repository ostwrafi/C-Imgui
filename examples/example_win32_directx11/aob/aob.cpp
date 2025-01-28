#include "aob.hpp"
//#include "../notify/imgui_notify.h"
//#include "../notify/font_awesome_5.h"
//#include "../notify/fa_solid_900.h"
//#include "../notify/tahoma.h"
#include <iostream> // Agrega esta l�nea para incluir la biblioteca de entrada/salida est�ndar



Aob inject;

Aob::Aob()
{
}

Aob::~Aob()
{
}








void Aob::MacrosC1()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\xCD\xCC\x4C\x3E\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
        VecAob,
        300
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
            0x00, 0x00, 0x80, 0xBF
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}
void Aob::MacrosC2()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x01\x50\x00\x43\x05\x00\xA0\xE1\x04\x8B\xBD\xEC\x30\x88\xBD\xE8"),
        "xxxxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
            0x00
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}
void Aob::MacrosC3()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x1E\xFF\x2F\xE1\x38\x10\x80\xE5\x1E\xFF\x2F\xE1\x3C\x00\x90\xE5\x1E\xFF\x2F\xE1\x3C\x10\x80\xE5\x1E\xFF\x2F\xE1"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
            0x1E, 0xFF, 0x2F, 0xE1, 0x38, 0x10, 0x80, 0xE5, 0x1E, 0xFF, 0x2F, 0xE1, 0x00, 0x00, 0xA0, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1, 0x3C, 0x10, 0x80, 0xE5, 0x1E, 0xFF, 0x2F, 0xE1
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}
void Aob::MacrosC4()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x06\x00\xA0\xE1\x18\xD0\x4B\xE2\x02\x8B\xBD\xEC\x70\x8C\xBD\xE8"),
        "xxxxxxxxxxxxxxxx",
        VecAob,
        1
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
            0x01, 0x00, 0xA0, 0xE3
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}





























void Aob::velosrafa()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x82\x00\x8D\xE8\x10\x17\x02\xE3\x3C\xFF\x2F\xE1\x00\x00\x58\xE3\x01\x00\x00\x1A"),

        "xxxxxxxxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {

0x82, 0x00, 0x8D, 0xE8, 0x10, 0x17, 0x02, 0xE3, 0x00, 0xF0, 0x20, 0xE3, 0x00, 0x00, 0x58, 0xE3, 0x01, 0x00, 0x00, 0x1A
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}





void Aob::camaraalta()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x30\x48\x2D\xE9\x08\xB0\x8D\xE2\x00\x40\xA0\xE1\x7D\x0D\x01\xE3"),

        "xxxxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {

                0x01, 0x00, 0xA0, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1, 0x00, 0x40, 0xA0, 0xE1, 0x7D, 0x0D, 0x01, 0xE3
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}



void Aob::verificado1()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x70\x4C\x2D\xE9\x10\xB0\x8D\xE2\x01\?\?\xA0\xE1\x00\?\?\xA0\xE1\?\?\x0E\x01\xE3"),

        "xxxxxxxxx??xxx??xx??xxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {

                0x01, 0x00, 0xA0, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}



void Aob::balasv1new()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x18\xD0\x8D\xE2\x70\x80\xBD\xE8\x0C\xDB\x8B\x00\xAC\xC5\x27\x37\x30\x48\x2D\xE9\x01\x40\xA0\xE1\x20\x10\x9F\xE5"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxx",
        VecAob,
        2
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
0x18, 0xD0, 0x8D, 0xE2, 0x70, 0x80 ,0xBD ,0xE8, 0x0C ,0x3B ,0x8B ,0x00 ,0x00 ,0x00, 0x80, 0x3F, 0x30 ,0x48, 0x2D, 0xE9 ,0x01 ,0x40, 0xA0, 0xE1 ,0x20, 0x10, 0x9F, 0xE5
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}







void Aob::verificado()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x70\x4C\x2D\xE9\x10\xB0\x8D\xE2\x01\x40\xA0\xE1\x00\x50\xA0\xE1\xF3\x0E\x01\xE3"),

        "xxxxxxxxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {

                 0x01, 0x00, 0xA0, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}






void Aob::bypassbr()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x28\x01\x87\xe5\x00"),
        "xxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
       0x00,0x01,0x87,0xE5,0x00
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}









void Aob::recargaplay()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x10\x0A\x18\xEE\x02\x8B\xBD\xEC\x30\x88\xBD\xE8\x30\x48\x2D\xE9\x08\xB0\x8D\xE2\x00\x40\xA0\xE1\x36\x07\x01\xE3\x00\x10\xA0\xE3"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
      0x10, 0x0A, 0x18, 0xEE, 0x02, 0x8B, 0xBD, 0xEC, 0x30, 0x88 ,0xBD ,0xE8 ,0xFF ,0x00, 0x45, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1, 0x00, 0x40, 0xA0, 0xE1
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}








void Aob::bypassbr2()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x3C\x51\x88\xE5"),
        "xxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
      0x00,0x51,0x88,0xE5
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}





void Aob::bypassbr3()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x10\xB0\xD0\xBD\xF0\xB5\x03\xAF\x2D\xE9\x00\x0F\x97\xB0"),
        "xxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
     0x10,0xB0,0xD0,0xBD,0x00,0x20,0x70,0x47,0x2D,0xE9,0x00,0x0F,0x97,0xB0
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}






void Aob::aim()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\xcd\xcc\x8c\x3f\x8f\xc2\xf5\x3c\xcd\xcc\xcc\x3d\x7\x0\x0\x0\x0\x0\x0\x0"),
        "xxxxxxxxxxxxxxxxxxxx",
        VecAob,
        16
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
        0xe0, 0xb1, 0xff, 0xff, 0xe0, 0xb1, 0xff, 0xff, 0xe0, 0xb1, 0xff, 0xff, 0xe0, 0xb1, 0xff, 0xff, 0xe0, 0xb1, 0xff, 0xff
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}









void Aob::aim1()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\xcd\xcc\x8c\x3f\x8f\xc2\xf5\x3c\xcd\xcc\xcc\x3d\x7\x0\x0\x0\x0\x0\x0\x0"),
        "xxxxxxxxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
          0xe0, 0xb1, 0xff, 0xff, 0xe0, 0xb1, 0xff, 0xff, 0xe0, 0xb1, 0xff, 0xff, 0xe0, 0xb1, 0xff, 0xff, 0xe0, 0xb1, 0xff, 0xff
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}







void Aob::seguridadlogo()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x7F\x45\x4C\x46\x01\x01\x01\x00"),
        "xxxxxxxx",
        VecAob,
        2
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
     0x7F, 0x45, 0x4C, 0x46, 0x01, 0x01, 0x0A, 0x00
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}








void Aob::seguridadantibantest()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x00\x00\xA0\xE3\x21\x00\x84\xE8\x70\x8C\xBD\xE8\xF0\x4F\x2D\xE9"),
        "xxxxxxxxxxxxxxxx",
        VecAob,
        2
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
 0x00, 0xF0, 0x20, 0xE3
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}



void Aob::seguridadantibantest2()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x47\x61\x6D\x65\x56\x61\x72"),
        "xxxxxxx",
        VecAob,
        2
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
0x47, 0x61, 0x6D, 0x65, 0x56, 0x61, 0x72, 0x4F, 0x66, 0x66
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}


void Aob::seguridadantibantest3()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x00\x48\x2D\xE9\x0D\xB0\xA0\xE1\x18\xD0\x4D\xE2\x04\x00\x0B\xE5\x08\x10\x0B\xE5\x0C\x20\x8D\xE5\x04\x00\x1B\xE5\x08\x10\x1B\xE5\x08\x00\x8D\xE5\x16\x00\x00\xEB\x08\x10\x1B\xE5\x28\x10\xD1\xE5\x01\x10"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
        VecAob,
        2
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
0x1E, 0xFF, 0x2F, 0xE1
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}



void Aob::seguridadantibantest4()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x0A\x00\xA0\xE3\x96\x00\x81\xE0\x00\x00\x51\xE3\x02\x01\x00\x1A"),
        "xxxxxxxxxxxxxxxx",
        VecAob,
        2
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
0x00, 0xF0, 0x20, 0xE3
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}





void Aob::seguridadantibantest5()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x0A\x00\xA0\xE3\x6E\x00\x54\xE3\x3F\x00\x00\x13\x10\x8C\xBD\xE8"),
        "xxxxxxxxxxxxxxxx",
        VecAob,
        2
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
0x00, 0xF0, 0x20, 0xE3
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}


void Aob::seguridadantibantest6()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x49\x44\x48\x48\x42\x47\x42\x4E\x48\x4D\x44"),
        "xxxxxxxxxxx",
        VecAob,
        2
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}













void Aob::onlyred()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x96\x00\x00\x00\x00\x00\xB0\x40\x00\x00\x80\x3F\x00\x00\x40\x3F"),
        "xxxxxxxxxxxxxxxx",
        VecAob,
        2
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
0x96, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB8, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}



















void Aob::seguridadantibantes7()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x0A\x00\xA0\xE3\x09\x10\xA0\xE1\xDE\x06\x00\xEB\x2C\x70\x99\xE5"),
        "xxxxxxxxxxxxxxxx",
        VecAob,
        2
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
0x00, 0xF0, 0x20, 0xE3
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}
































































void Aob::seguridadlogo2()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x7F \x45 \x4C \x46 \x01 \x01 \x0A \x00"),
        "xxxxxxxx",
        VecAob,
        2
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {

              0x01, 0x00, 0xA0, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}





void Aob::seguridadlogo3()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x0A \x00 \xA0 \xE3 \x6E \x00 \x54 \xE3 \x3F \x00 \x00 \x13 \x10 \x8C \xBD \xE8"),
        "xxxxxxxxxxxxxxxx",
        VecAob,
        2
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {

              0x00, 0xF0, 0x20, 0xE3
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}











void Aob::tiroawm()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\xCD \xCC \x8C \x3F \x8F \xC2 \xF5 \x3C \xCD \xCC \xCC \x3D \x07 \x00 \x00 \x00 \x00 \x00 \x00 \x00"),
        "xxxxxxxxxxxxxxxxxxxx",
        VecAob,
        2
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {

          0xE0, 0xB1, 0xFF, 0xFF, 0xE0, 0xB1, 0xFF, 0xFF, 0xE0, 0xB1, 0xFF, 0xFF, 0xE0, 0xB1, 0xFF, 0xFF, 0xE0, 0xB1, 0xFF, 0xFF
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}




































void Aob::seguridadtest2()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x7F\x45\x4C\x46\x01\x01\x01\x00"),
        "xxxxxxxx",
        VecAob,
        2
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
     0x7F, 0x45, 0x4C, 0x46, 0x01, 0x01, 0x0A, 0x00
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}





//
//void Aob::seguridadtest3()
//{
//    std::vector<DWORD_PTR>VecAob;
//    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
//        PBYTE("\x0A\x00\xA0\xE3????????\x03"),
//        "xxxx????????x",
//        VecAob,
//        2
//    );
//    for (int i = 0; i < VecAob.size(); i++)
//    {
//        BYTE buffer[] = {
//    0x00, 0xF0, 0x20
//        };
//        DWORD Protect;
//        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
//        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
//        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
//    }
//
//}



void Aob::seguridadpesada2()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x00\x48\x2D\xE9\x0D\xB0\xA0\xE1\x10\xD0\x4D\xE2\x64\x02\x9F\xE5\x00\x00\x8F\xE0\x68\x12\x9F\xE5"),
        "xxxxxxxxxxxxxxxxxxxxxxxx",
        VecAob,
        2
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
  0x00, 0x00, 0xA0, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}





void Aob::seguridadpesada3()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x00\x48\x2D\xE9\x0D\xB0\xA0\xE1\x90\xD0\x4D\xE2"),
        "xxxxxxxxxxxx",
        VecAob,
        2
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
  0x00, 0x00, 0xA0, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}
























void Aob::seguridadpesada4()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x10\x4C\x2D\xE9\x08\xB0\x8D\xE2\xD0\xD0\x4D\xE2\x0C\xC0\x9B"),
        "xxxxxxxxxxxxxxx",
        VecAob,
        2
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
     0x00, 0x00, 0xA0, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}

void Aob::wallhackof()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x00\x00\x00\xEA\x00\x00\x80\xBF\x85\x8A\x23\xEE\x87\x9A\x22\xEE"),
        "xxxxxxxxxxxxxxxx",
        VecAob,
        2
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
     0x00, 0x00, 0x00, 0xEA, 0xBD, 0x37, 0x86, 0x35, 0x85, 0x8A, 0x23, 0xEE, 0x87, 0x9A, 0x22, 0xEE
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}



















void Aob::seguridadpesada5()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x00\x0A\x81\xEE\x10\x0A\x10\xEE\x10\x8C\xBD\xE8\x00\x00\x7A\x44\xF0\x48\x2D\xE9\x10\xB0\x8D\xE2\x02\x8B\x2D\xED"),


        "xxxxxxxxxxxxxxxxxxxxxxxxxxxx",
        VecAob,
        2
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
         0x00, 0x0A, 0x81, 0xEE, 0x10, 0x0A, 0x10, 0xEE, 0x10, 0x8C, 0xBD, 0xE8, 0x00, 0xC0, 0x85, 0x44
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}






void Aob::bpwall()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x28\x80\x8D\xE5\x24\x80\x8D\xE5\x20\x80\x8D\xE5\x1C\x80\x8D\xE5\x18\x80\x8D\xE5\x10\x80\x8D\xE5\x08\x60\x8D\xE5\x82\x00\x8D\xE8\x10\x17\x02\xE3\x3C\xFF\x2F\xE1"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
        VecAob,
        2
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
      0x28, 0x80, 0x8D, 0xE5, 0x24, 0x80, 0x8D, 0xE5, 0x20, 0x80, 0x8D, 0xE5, 0x1C, 0x80, 0x8D, 0xE5,
 0x18, 0x80, 0x8D, 0xE5, 0x10, 0x80, 0x8D, 0xE5, 0x08, 0x60, 0x8D, 0xE5, 0x82, 0x00, 0x8D, 0xE8,
 0x10, 0x17, 0x02, 0xE3, 0x00, 0xF0, 0x20, 0xE3
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}

void Aob::bpcamarahack()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x3C\xFF\x2F\xE1\x0A\x00\xA0\xE1\xE0"),
        "xxxxxxxxx",
        VecAob,
        2
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
0x00, 0xF0, 0x20, 0xE3, 0x0A, 0x00, 0xA0, 0xE1, 0xE0
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}

void Aob::byp1()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x28\x01\x87\xe5\x00"),
        "xxxxx",
        VecAob,
        1
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
            0x00, 0x01, 0x87, 0xE5, 0x00
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}
void Aob::byp2()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x3C\x51\x88\xE5"),
        "xxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
            0x00, 0x51, 0x88, 0xE5
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}
void Aob::byp3()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x10\xB0\xD0\xBD\xF0\xB5\x03\xAF\x2D\xE9\x00\x0F\x97\xB0"),
        "xxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
            0x10, 0xB0, 0xD0, 0xBD, 0x00, 0x20, 0x70, 0x47, 0x2D, 0xE9, 0x00, 0x0F, 0x97, 0xB0
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}

void Aob::camara()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\xDB\x0F\x49\x40\x10\x2A\x00\xEE\x00\x10\x80\xE5\x10\x3A\x01\xEE"),
        "xxxxxxxxxxxxxxxx",
        VecAob,
        2
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
0x00, 0x00, 0xA0, 0x40, 0x10, 0x2A, 0x00, 0xEE, 0x00, 0x10, 0x80, 0xE5, 0x10, 0x3A, 0x01, 0xEE };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}





void Aob::nBalas1()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x23\xAA\xA6\xB8\x46\x0A\xCD\x70"),
        "xxxxxxxx",
        VecAob,
        5
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
              0x23, 0xAA, 0xA6, 0xB8, 0xB2, 0xF7, 0x1F, 0xA4

        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}

void Aob::nBalas2()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x47\x7B\x5A\xBD\xAE\x57\x66\xBB\x5C\x1F\x48\xBA\x1B\xC0\xCF\x3B\x9C\xFB\x28\x3D\xA2\xB1\x17\xBD\xE4\x99\x7F\x3F\x04\x00\x80\x3F\x00\x00\x80\x3F\xFE\xFF\x7F\x3F"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
        VecAob,
        5
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
             0x8D, 0x07, 0x74, 0x3F, 0xAE, 0x57, 0x66, 0xBB, 0x5C, 0x1F, 0x48, 0xBA, 0x1B, 0xC0, 0xCF, 0x3B,
 0x9C, 0xFB, 0x28, 0x3D, 0xA2, 0xB1, 0x17, 0xBD, 0xE4, 0x99, 0x7F, 0x3F, 0x00, 0x00, 0x60, 0x41,
 0x00, 0x00, 0x60, 0x41, 0x00, 0x00, 0x60, 0x41
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}

void Aob::nBalas3()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x4C\x7B\x5A\xBD\x0A\x57\x66\xBB\x1E\x21\x48\xBA\x2A\xC2\xCF\x3B\x96\xFB\x28\x3D\xE8\xB1\x17\xBD\xE3\x99\x7F\x3F\x04\x00\x80\x3F\x01\x00\x80\x3F\xFC\xFF\x7F\x3F"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
        VecAob,
        6
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
              0x1B, 0x0E, 0x74, 0x3F, 0xAE, 0x57, 0x66, 0xBB, 0x5C, 0x1F, 0x48, 0xBA, 0x1B, 0xC0, 0xCF, 0x3B,
 0x9C, 0xFB, 0x28, 0x3D, 0xA2, 0xB1, 0x17, 0xBD, 0xE4, 0x99, 0x7F, 0x3F, 0x00, 0x00, 0x60, 0x41,
 0x00, 0x00, 0x60, 0x41, 0x00, 0x00, 0x60, 0x41
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}

void Aob::nBalas4()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x10\x00\x00\x00\x62\x00\x6F\x00\x6E\x00\x65\x00\x5F\x00\x4C\x00\x65\x00\x66\x00\x74\x00\x5F\x00\x57\x00\x65\x00\x61\x00\x70\x00\x6F\x00\x6E\x00"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
        VecAob,
        10
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
                0x10, 0x00, 0x00, 0x00, 0x62, 0x00, 0x6F, 0x00, 0x6E, 0x00, 0x65, 0x00, 0x5F, 0x00, 0x53, 0x00,
                 0x70, 0x00, 0x69, 0x00, 0x6E, 0x00, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                 0x00, 0x00, 0x00, 0x00, 0x00
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}








void Aob::semiaim()
{

    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x4C\x7B\x5A\xBD\x0A\x57\x66\xBB\x1E\x21\x48\xBA\x2A\xC2\xCF\x3B\x96\xFB\x28\x3D\xE8\xB1\x17\xBD\xE3\x99\x7F\x3F\x04\x00\x80\x3F\x01\x00\x80\x3F\xFC\xFF\x7F\x3F????\x23\xAA\xA6\xB8\x46\x0A\xCD\x70\x00\x00\x00\x00"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx????xxxxxxxxxxxx",
        VecAob,
        15
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
            0xD1, 0x0A, 0xC0, 0xBE, 0x16, 0xDC, 0x98, 0xBD, 0xBB, 0x82, 0x97, 0xB4, 0x00, 0x00, 0x00, 0x00, 0xBF, 0xB2, 0x2F, 0x3F, 0x43, 0x32, 0x73, 0x36, 0x66, 0x03, 0x7B, 0x35, 0x72, 0x1C, 0xC7, 0x3F, 0x72, 0x1C, 0xC7, 0x3F, 0x72, 0x1C, 0xC7, 0x3F


        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}






void Aob::semiaim2()
{

    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x10\x00\x00\x00\x62\x00\x6F\x00\x6E\x00\x65\x00\x5F\x00\x4C\x00\x65\x00\x66\x00\x74\x00\x5F\x00\x57"),
        "xxxxxxxxxxxxxxxxxxxxxxxxx",
        VecAob,
        15
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {

             0x10, 0x00, 0x00, 0x00, 0x62, 0x00, 0x6F, 0x00, 0x6E, 0x00, 0x65, 0x00, 0x5F, 0x00, 0x48, 0x00, 0x65, 0x00, 0x61, 0x00, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}





void Aob::semiaim3()
{

    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x23\xAA\xA6\xB8\x46\x0A\xCD\x70"),
        "xxxxxxxx",
        VecAob,
        15
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {

       0x23, 0xAA, 0xA6, 0xB8, 0xB2, 0xF7, 0x1F, 0xA4

        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}







void Aob::rapido()
{

    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x5F\x48\x69\x70\x73\x62"),
        "xxxxxx",
        VecAob,
        15
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {

   0x5F, 0x4E, 0x65, 0x63, 0x6B, 0x62

        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}












void Aob::bypasscamara()
{

    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x3C\xFF\x2F\xE1\x0A\x00\xA0\xE1\xE0"),
        "xxxxxxxxx",
        VecAob,
        15
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
                0x00, 0xF0, 0x20, 0xE3, 0x0A, 0x00, 0xA0, 0xE1, 0xE0


        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}









void Aob::canbiotest()
{

    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\?\?\?\x3F\x00\x00\x80\x3E\x00\x00\x00\x00\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3F"),
        "???xxxxxxxxx????????????????????xxxxxxxxxxxx",
        VecAob,
        15
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
                0xEC, 0x51, 0xB8, 0x0A, 0x8F, 0xC2, 0xF5, 0x0C


        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}







void Aob::NPC()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x00\x00\x00\x00\x21\x00\x00\x00\x69\x00\x6E\x00\x67\x00\x61\x00\x6D\x00\x65\x00\x2F\x00\x63\x00\x61\x00\x70\x00\x73\x00\x75\x00\x6C\x00\x65\x00\x68\x00\x75\x00\x6D\x00\x61\x00\x6E\x00\x73\x00\x6E\x00\x69\x00\x70\x00\x65\x00\x72\x00\x63\x00\x6F\x00\x6C\x00\x6C\x00\x69\x00\x64\x00\x65\x00\x72\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
          0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x49, 0x00, 0x6E, 0x00, 0x47, 0x00, 0x61, 0x00, 0x6D, 0x00, 0x65, 0x00, 0x2F, 0x00, 0x4E, 0x00, 0x65, 0x00, 0x74, 0x00, 0x77, 0x00, 0x6F, 0x00, 0x72, 0x00, 0x6B, 0x00, 0x41, 0x00, 0x49, 0x00, 0x50, 0x00, 0x61, 0x00, 0x77, 0x00, 0x6E, 0x00, 0x2F, 0x00, 0x4E, 0x00, 0x65, 0x00, 0x74, 0x00, 0x77, 0x00, 0x6F, 0x00, 0x72, 0x00, 0x6B, 0x00, 0x41, 0x00, 0x49, 0x00, 0x50, 0x00, 0x61, 0x00, 0x72, 0x00, 0x74, 0x00, 0x79, 0x00, 0x4E, 0x00, 0x50, 0x00, 0x43
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}


void Aob::antiban()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x62\x6F\x6E\x65\x5F\x48\x69\x70\x73"),
        "xxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
          0x62, 0x6F, 0x6E, 0x65, 0x5F, 0x4E, 0x65, 0x63, 0x6B
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}




void Aob::test()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x47\x61\x6d\x65\x56\x61\x72"),
        "xxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
          0x47, 0x61, 0x6d, 0x65, 0x56, 0x40, 0x72
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}

void Aob::test2()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x00\x48\x2D\xE9\x0D\xB0\xA0\xE1\x90\xD0\x4D\xE2"),
        "xxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
          0x00, 0x00, 0xA0, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}



void Aob::test3()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\xA0\x42\x00\x00\xC0\x3F\x33\x33\x13\x40\x00\x00\xC0\x3F\x00\x00\x80\x3F"),
        "xxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
          0xA0, 0x42, 0x00, 0x00, 0xC0, 0x3F, 0xFF, 0xB1, 0xFF, 0xFF, 0x01, 0x01, 0xFF, 0x3F, 0x0F, 0x0F, 0x99, 0x5F
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}







void Aob::antigay()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x7F\x45\x4C\x46\x01\x01\x01\x00"),
        "xxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
   0x7F, 0x45, 0x4C, 0x46, 0x01, 0x01, 0x0A, 0x00
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}






//void Aob::antigay5()
//{
//    std::vector<DWORD_PTR>VecAob;
//    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
//        PBYTE("\x47\x61\x6D\x65\x56\x61\x72"),
//        "xxxxxxx",
//        VecAob,
//        100
//    );
//    for (int i = 0; i < VecAob.size(); i++)
//    {
//        BYTE buffer[] = {
//   0x47, 0x61, 0x6D, 0x65, 0x56, 0x61, 0x72, 0x4F, 0x66, 0x66
//        };
//        DWORD Protect;
//        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
//        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
//        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
//    }
//
//}



void Aob::antigay4()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x7F\x45\x4C\x46\x01\x01\x01\x00"),
        "xxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
 0x42, 0xF9, 0x20, 0xE5, 0x0E, 0xEE, 0x0F, 0xE1
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}



void reportes3();



void Aob::reportes()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x49\x44\x48\x48\x42\x47\x42\x4e\x48\x4d\x44"),
        "xxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
  0x50, 0x4b, 0x45, 0x4a, 0x42, 0x4c, 0x4e, 0x42, 0x41, 0x48, 0x48
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}


void Aob::reportes2()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x10\x4c\x2d\xe9\x08\xb0\x8d\xe2"),
        "xxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
 0x00, 0x00, 0xa0, 0xe3, 0x1e, 0xff, 0x2f, 0xe1
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}



void Aob::reportes3()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x47\x61\x6d\x65\x56\x61\x72\x44\x65\x66??????????????????"),
        "xxxxxxxxxx??????????????????",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
 0x43, 0x68, 0x65, 0x61, 0x74, 0x69, 0x6e, 0x67, 0x5f, 0x4d, 0x65, 0x6d, 0x6f, 0x72, 0x79, 0x48, 0x61, 0x63, 0x6b
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}



void Aob::reportes4()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x03\x01\x00\xeb\x10\x00\x80\xe2"),
        "xxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
0x01, 0x00, 0xa0, 0xe1, 0x02, 0x10, 0xa0, 0xe1
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}









void Aob::seguridadnew()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x10\x4C\x2D\xE9\x08\xB0\x8D\xE2\x40\xD0\x4D\xE2\xE0\x20\x9F\xE5\x02\x20\x9F\xE7\x00\x20\x92\xE5"),
        "xxxxxxxxxxxxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {

   0x00, 0x00, 0xA0, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1


        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}










void Aob::seguridadpesada6()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x7F\x45\x4C\x46\x01\x01\x01\x00"),

        "xxxxxxxx",
        VecAob,
        2
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
         0x01, 0x00, 0xA0, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}






void Aob::seguridadpesada()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x0A\x00\xA0\xE3????????\x03"),
        "xxxx????????x",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
  0x00, 0xF0, 0x20
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}



void Aob::SEGURIDADWALLHACK2()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x7F\x45\x4C\x46\x01\x01\x0A\x00"),
        "xxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
   0x01, 0x00, 0xA0, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}








void Aob::antigay2()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x00\x48\x2D\xE9\x0D\xB0\xA0\xE1\x10\xD0\x4D\xE2\x64\x02\x9F\xE5\x00\x00\x8F\xE0\x68\x12\x9F\xE5"),
        "xxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
    0x00, 0x00, 0xA0, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}




void Aob::antigay3()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x10\x4C\x2D\xE9\x08\xB0\x8D\xE2\xD0\xD0\x4D\xE2\x0C\xC0\x9B"),
        "xxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
    0x00, 0x00, 0xA0, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}

void Aob::fixwall()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x28\x90\x8D\xE5\x24\x90\x8D\xE5\x20\x90\x8D\xE5\x1C\x90\x8D\xE5\x18\x90\x8D\xE5\x10\x90\x8D\xE5\x08\x60\x8D\xE5\x82\x00\x8D\xE8\x10\x17\x02\xE3\x3C\xFF\x2F\xE1"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
    0x28, 0x90, 0x8D, 0xE5, 0x24, 0x90, 0x8D, 0xE5, 0x20, 0x90, 0x8D, 0xE5, 0x1C, 0x90, 0x8D, 0xE5, 0x18, 0x90, 0x8D, 0xE5, 0x10, 0x90, 0x8D, 0xE5, 0x08, 0x60, 0x8D, 0xE5, 0x82, 0x00, 0x8D, 0xE8, 0x10, 0x17, 0x02, 0xE3, 0x00, 0xF0, 0x20, 0xE3

        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}





void Aob::bypass5()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x00\x00\xA0\xE3\xDD\x2E\xE2\xEB\x94\x51\x88\xE5\x00\x40\x94\xE5"),
        "xxxxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
         0x00, 0x00, 0xA0, 0xE3, 0xDD, 0x2E, 0xE2, 0xEB, 0x99, 0x51, 0x88, 0xE5, 0x00, 0x40, 0x94, 0xE5
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}


void Aob::bypass6()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x00\x00\xA0\xE3\xDD\x2E\xE2\xEB\x94\x51\x88\xE5\x00\x40\x94\xE5"),
        "xxxxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
         0x00, 0x00, 0xA0, 0xE3, 0xDD, 0x2E, 0xE2, 0xEB, 0x99, 0x51, 0x88, 0xE5, 0x00, 0x40, 0x94, 0xE5
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}



void Aob::bypass7()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x4F\xF0\x01\x00\x1C\xBF\xFC\x68\x00\x2C\x07\xD0\x50\x46\x0A\xF2\x3A\xF9"),
        "xxxxxxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
        0x00, 0x00
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}







void Aob::bypass2()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x70\x00\xD0\xE5\x1E\xFF\x2F\xE1\x70\x10"),
        "xxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
        0x00, 0x00, 0xA0, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1, 0x70, 0x10
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}



void Aob::antiblacklist()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x62\x6F\x6E\x65\x5F\x48\x69\x70\x73"),
        "xxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
          0x01, 0x00, 0xA0, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}

void Aob::ClearReport()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x62\x6F\x6E\x65\x5F\x48\x69\x70\x73"),
        "xxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
          0x62, 0x6F, 0x6E, 0x65, 0x5F, 0x4E, 0x65, 0x63, 0x6B
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}



void Aob::cambiofast()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x27\xC1\x8B\x3C\xC0\xD0\xF8\xB9"),
        "xxxxxxxx",

        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {

     0x00, 0x00, 0xC8, 0x42, 0xC0, 0xD0, 0xF8, 0xB9
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}

void Aob::black()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x7F\x45\x4C\x46\x01\x01\x0A\x00"),
        "xxxxxxxx",

        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
       0x01, 0x00, 0xA0, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}


void Aob::black2()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x10\x4C\x2D\xE9\x08\xB0\x8D\xE2\x40\xD0\x4D\xE2\xE0\x20\x9F\xE5\x02\x20\x9F\xE7\x00\x20\x92\xE5"),
        "xxxxxxxx",

        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
       0x00, 0x00, 0xA0, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}




void Aob::black3()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,

        PBYTE("\x0A\x00\xA0\xE3????????\x03"),
        "xxxx????????x",

        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
      0x00, 0xF0, 0x20
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}




void Aob::black4()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x0A\x00\xA0\xE3\x96\x00\x81\xE0\x00\x00\x51\xE3\x02\x01"),
        "xxxxxxxx",

        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
        0x42, 0xF9, 0x20, 0xE5, 0x0E, 0xEE, 0x0F, 0xE1
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}





void Aob::black5()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x00\x48\x2D\xE9\x0D\xB0\xA0\xE1\x90\xD0\x4D\xE2"),
        "xxxxxxxx",

        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
       0x00
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}













void Aob::anti2()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x7F\x45\x4C\x46\x01\x01\x0A\x00\x00\x00"),
        "xxxxxxxx",

        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
        0x01, 0x00, 0xA0, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1, 0x00, 0x00
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}


void Aob::anti3()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\xE0\x20\x96\xC5\xC4\x74\xF0\xA5"),
        "xxxxxxxx",

        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
        0x42, 0xF9, 0x20, 0xE5, 0x0E, 0xEE, 0x0F, 0xE1
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}


void Aob::anti4()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x00\x00\xa0\xe3"),
        "xxxx",

        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
      0x00, 0xf0, 0x20, 0xe3
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}

void Aob::anti5()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x0a\x00\xa0\xe3"),
        "xxxx",

        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
     0xc0, 0xf0, 0x20, 0xe3
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}




void Aob::anti6()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\xA0\x42\x00\x00\xC0\x3F\x33\x33\x13\x40\x00\x00\xC0\x3F\x00\x00\x80\x3F"),
        "xxxxxxxxxxxxxxxxxx",

        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
     0x01, 0x00, 0xa0, 0xe1, 0x02, 0x10, 0xa0, 0xe1
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}


void Aob::anti7()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x04\x00\x1b\xe5"),
        "xxxx",

        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
 0x00, 0xf0, 0x20, 0xe3
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}



void Aob::anti8()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x00\x20\x04\x90\xc0\x43"),
        "xxxxxx",

        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
  0x00, 0x20, 0x70, 0x47, 0x00, 0x00
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}


void Aob::anti()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x0A\x00\xA0\xE3\x09\x10\xA0\xE1\xDE\x06\x00\xEB\x2C\x70\x99\xE5"),
        "xxxxxxxxxxxxxxxx",

        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
       0x00, 0xF0, 0x20, 0xE3
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}












void Aob::hombro()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x0C\x6C\x45\xBF\x00\x00\x00\x00\xC0\x9C\x7E\x3A"),
        "xxxxxxxxxxxx",

        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
       0x0C, 0x6C, 0x45, 0xBF, 0x00, 0x00, 0x7A, 0x44, 0xC0, 0x9C, 0x7E, 0x3A
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}




void Aob::hombro2()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x9A\x30\xFA\x3D\x00\x00\x00\x00\x6B\xDA\x50\x3F"),
        "xxxxxxxxxxxx",

        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
      0x9A, 0x30, 0xFA, 0x3D, 0x00, 0x00, 0x7A, 0x44, 0x6B, 0xDA, 0x50, 0x3F
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}

































































//void Aob::cambiofast()
//{
//
//    std::vector<DWORD_PTR>VecAob;
//    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
//        PBYTE("???\x3F\x00\x00\x80\x3E\x00\x00\x00\x00????????????????????\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3F"),
//        "???xxxxxxxxx????????????????????xxxxxxxxxxxx",
//        VecAob,
//        20
//    );
//    for (int i = 0; i < VecAob.size(); i++)
//    {
//        BYTE buffer[] = {
//               0xEC, 0x51, 0xB8, 0x3D, 0x8F, 0xC2, 0xF5, 0x3C
//        };
//        DWORD Protect;
//        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
//        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
//        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
//    }
//
//}










void Aob::DISPARORAPIDO()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\xA0\x42\x00\x00\xC0\x3F\x33\x33\x13\x40\x00\x00\xC0\x3F\x00\x00\x80\x3F"),
        "xxxxxxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {

           0xA0, 0x42, 0x00, 0x00, 0xC0, 0x3F, 0xE0, 0xB1, 0xFF, 0xFF, 0x00, 0x00, 0xC0, 0x3F, 0x00, 0x00, 0x80, 0x3F

        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}




void Aob::DISPARORAPIDO2()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x41\x00\x00\x48\x42\x00\x00\x00\x3F\x33\x33\x13\x40\x66\x66\xA6\x3F\x00\x00\x80\x3F\x01"),
        "xxxxxxxxxxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {

          0x41, 0x00, 0x00, 0x48, 0x42, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0xB1, 0xFF, 0xFF, 0x66, 0x66, 0xA6, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x01

        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}




void Aob::DISPARORAPIDO3()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\xcd\xcc\x8c\x3f\x8f\xc2\xf5\x3c\xcd\xcc\xcc\x3d\x7\x00\x00\x00\x00\x00\x00\x00"),
        "xxxxxxxxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {

         0xe0, 0xb1, 0xff, 0xff, 0xe0, 0xb1, 0xff, 0xff, 0xe0, 0xb1, 0xff, 0xff, 0xe0, 0xb1, 0xff, 0xff, 0xe0, 0xb1, 0xff, 0xff

        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}










void Aob::fixawm()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        /*PBYTE("\x1E\xFF\x2F\xE1\x38\x10\x80\xE5\x1E\xFF\x2F\xE1\x3C\x00\x90\xE5\x1E\xFF\x2F\xE1\x3C\x10\x80\xE5\x1E\xFF\x2F\xE1"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxx",*/

        PBYTE("\x06\x00\xA0\xE1\x18\xD0\x4B\xE2\x02\x8B\xBD\xEC\x70\x8C\xBD\xE8"),
        "xxxxxxxxxxxxxxxx",


        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {

           0x01, 0x00, 0xA0, 0xE3

        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}











void Aob::miranegra()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x00\x00\x80\x3F\x00\x00\x80\x3F\x00\x00\x80\x3F\x00\x00\x80\x3F\x00\x00\x80\x3F\xF5\xF4\x74\x3E\xD1\xD0\x50\x3E\x00\x00\x80\x3F\x00\x00\x80\x3F"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {


     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0xF5, 0xF4, 0x74, 0x3E, 0xD1, 0xD0, 0x50, 0x3E, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0xA4, 0xA3, 0x23, 0x3F, 0x91, 0x90, 0x10, 0x3E, 0x00, 0x00, 0x80, 0x3F

        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}






void Aob::nigth()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\xA4\x70\x7D\x3F\x3A\xCD\x13\x3F\x0A\xD7\x23\x3C\xBD\x37\x86\x35\x00\x00\x51\xE3\x04\x10\x91\x15"),
        "xxxxxxxxxxxxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
           0xA4, 0x70, 0x7D, 0x3F, 0x3A, 0xCD, 0x13, 0x3F, 0x0A, 0xD7, 0x23, 0x3C, 0x00, 0x00, 0x80, 0xBF,
 0x00, 0x00, 0x51, 0xE3, 0x04, 0x10, 0x91, 0x15
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}

void Aob::balasv2()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x70\x80\xBD\xE8\xD4\x2A\x8C\x00\xAC\xC5\x27\x37\x30\x48\x2D\xE9\x01\x40\xA0\xE1"),
        "xxxxxxxxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
             0x70, 0x80, 0xBD, 0xE8, 0xD4, 0x2A, 0x8C, 0x00, 0xD7, 0xA3, 0x30, 0x3F, 0x30, 0x48, 0x2D, 0xE9, 0x01, 0x40, 0xA0, 0xE1
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}















void Aob::balasv1()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\xD4\x2A\x8C\x00\xAC\xC5\x27\x37\x30\x48\x2D\xE9"),
        "xxxxxxxxxxxx",
        VecAob,
        1
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
            0xD4, 0x2A, 0x8C, 0x00, 0x66, 0x66, 0x66, 0x3F, 0x30, 0x48, 0x2D, 0xE9
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}






void Aob::Balas3()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x23\xAA\xA6\xB8\x46\x0A\xCD\x70"),
        "xxxxxxxx",
        VecAob,
        5
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
              0x23, 0xAA, 0xA6, 0xB8, 0xB2, 0xF7, 0x1F, 0xA4

        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}

void Aob::Balas4()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x47\x7B\x5A\xBD\xAE\x57\x66\xBB\x5C\x1F\x48\xBA\x1B\xC0\xCF\x3B\x9C\xFB\x28\x3D\xA2\xB1\x17\xBD\xE4\x99\x7F\x3F\x04\x00\x80\x3F\x00\x00\x80\x3F\xFE\xFF\x7F\x3F"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
        VecAob,
        5
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
             0x8D, 0x07, 0x74, 0x3F, 0xAE, 0x57, 0x66, 0xBB, 0x5C, 0x1F, 0x48, 0xBA, 0x1B, 0xC0, 0xCF, 0x3B,
 0x9C, 0xFB, 0x28, 0x3D, 0xA2, 0xB1, 0x17, 0xBD, 0xE4, 0x99, 0x7F, 0x3F, 0x00, 0x00, 0x60, 0x41,
 0x00, 0x00, 0x60, 0x41, 0x00, 0x00, 0x60, 0x41
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}

void Aob::Balas5()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x4C\x7B\x5A\xBD\x0A\x57\x66\xBB\x1E\x21\x48\xBA\x2A\xC2\xCF\x3B\x96\xFB\x28\x3D\xE8\xB1\x17\xBD\xE3\x99\x7F\x3F\x04\x00\x80\x3F\x01\x00\x80\x3F\xFC\xFF\x7F\x3F"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
        VecAob,
        6
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
              0x1B, 0x0E, 0x74, 0x3F, 0xAE, 0x57, 0x66, 0xBB, 0x5C, 0x1F, 0x48, 0xBA, 0x1B, 0xC0, 0xCF, 0x3B,
 0x9C, 0xFB, 0x28, 0x3D, 0xA2, 0xB1, 0x17, 0xBD, 0xE4, 0x99, 0x7F, 0x3F, 0x00, 0x00, 0x60, 0x41,
 0x00, 0x00, 0x60, 0x41, 0x00, 0x00, 0x60, 0x41
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}

void Aob::Balas6()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x10\x00\x00\x00\x62\x00\x6F\x00\x6E\x00\x65\x00\x5F\x00\x4C\x00\x65\x00\x66\x00\x74\x00\x5F\x00\x57\x00\x65\x00\x61\x00\x70\x00\x6F\x00\x6E\x00"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
        VecAob,
        10
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
                0x10, 0x00, 0x00, 0x00, 0x62, 0x00, 0x6F, 0x00, 0x6E, 0x00, 0x65, 0x00, 0x5F, 0x00, 0x53, 0x00,
                 0x70, 0x00, 0x69, 0x00, 0x6E, 0x00, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                 0x00, 0x00, 0x00, 0x00, 0x00
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}


void Aob::norecoin()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x00\x0A\x81\xEE\x10\x0A\x10\xEE\x10\x8C\xBD\xE8\x00\x00\x00\x00\xF0\x48\x2D\xE9\x10\xB0\x8D\xE2\x02\x8B\x2D\xED"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
        0x00, 0x0A, 0x81, 0xEE, 0x10, 0x0A, 0x10, 0xEE, 0x10, 0x8C, 0xBD, 0xE8, 0x00, 0x00, 0x7A, 0x44, 0xF0, 0x48, 0x2D, 0xE9, 0x10, 0xB0, 0x8D, 0xE2, 0x02, 0x8B, 0x2D, 0xED
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}





void Aob::sonic()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x00\x00\x0C\x42\x00\x00\x20\x41\x00\x00\xA0\x41"),
        "xxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
         0x00, 0x00, 0x0C, 0x42, 0x00, 0x00, 0x20, 0x41, 0x00, 0x00, 0x20, 0x41
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}

void Aob::hand()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x00\x00\x80\x3F\xCF\xF7\xAD\x34"),
        "xxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
      0x33, 0x33, 0x34, 0x43, 0xCF, 0xF7, 0xAD, 0x34
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}



void Aob::cabeza3()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x69\x00\x6E\x00\x67\x00\x61\x00\x6D\x00\x65\x00\x2F\x00\x63\x00\x61\x00\x70\x00\x73\x00\x75\x00\x6C\x00\x65\x00\x68\x00\x75\x00\x6D\x00\x61\x00\x6E\x00\x73\x00\x6E\x00\x69\x00\x70\x00\x65\x00\x72\x00\x63\x00\x6F\x00\x6C\x00\x6C\x00\x69\x00\x64\x00\x65\x00\x72\x00\x00\x00\x00\x00\x00\x00"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {
   0x65, 0x00, 0x66, 0x00, 0x66, 0x00, 0x65, 0x00, 0x63, 0x00, 0x74, 0x00, 0x73, 0x00, 0x2F, 0x00, 0x62, 0x00, 0x72, 0x00, 0x5F, 0x00, 0x61, 0x00, 0x69, 0x00, 0x72, 0x00, 0x64, 0x00, 0x72, 0x00, 0x6F, 0x00, 0x70, 0x00, 0x62, 0x00, 0x6F, 0x00, 0x78, 0x00, 0x6C, 0x00, 0x69, 0x00, 0x67, 0x00, 0x68, 0x00, 0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}


void Aob::cabeza2()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x9A \x30 \xFA \x3D \x00 \x00 \x00 \x00 \x6B\xDA \x50 \x3F"),
        "xxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {

  0x9A, 0x30, 0xFA, 0x3D, 0x00, 0x00, 0x7A, 0x44, 0x6B,0xDA, 0x50, 0x3F
        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}



void Aob::miraamarilla()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x00\x00\x80\x3F\x00\x00\x80\x3F\x00\x00\x80\x3F\x00\x00\x80\x3F\x00\x00\x80\x3F\xF5\xF4\x74\x3E\xD1\xD0\x50\x3E\x00\x00\x80\x3F\x00\x00\x80\x3F"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {

 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x7F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0xF5, 0xF4, 0x74, 0x3E, 0xD1, 0xD0, 0x50, 0x3E, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0xA4, 0xA3, 0x23, 0x3F, 0x91, 0x90, 0x10, 0x3E, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0xA4, 0xA3, 0x23, 0x3F, 0x91, 0x90, 0x10, 0x3E, 0x00, 0x00, 0x80, 0x3F

        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}



void Aob::mirarosa()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x00\x00\x80\x3F\x00\x00\x80\x3F\x00\x00\x80\x3F\x00\x00\x80\x3F\x00\x00\x80\x3F\xF5\xF4\x74\x3E\xD1\xD0\x50\x3E\x00\x00\x80\x3F\x00\x00\x80\x3F"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {

            0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0xA0, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0xF5, 0xF4, 0x74, 0x3E, 0xD1, 0xD0, 0x50, 0x3E, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0xA4, 0xA3, 0x23, 0x3F, 0x91, 0x90, 0x10, 0x3E, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0xA4, 0xA3, 0x23, 0x3F, 0x91, 0x90, 0x10, 0x3E, 0x00, 0x00, 0x80, 0x3F


        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}




void Aob::miraroja()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x00\x00\x80\x3F\x00\x00\x80\x3F\x00\x00\x80\x3F\x00\x00\x80\x3F\x00\x00\x80\x3F\xF5\xF4\x74\x3E\xD1\xD0\x50\x3E\x00\x00\x80\x3F\x00\x00\x80\x3F"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {

         0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x7F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0xF5, 0xF4, 0x74, 0x3E, 0xD1, 0xD0, 0x50, 0x3E, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0xA4, 0xA3, 0x23, 0x3F, 0x91, 0x90, 0x10, 0x3E, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0xA4, 0xA3, 0x23, 0x3F, 0x91, 0x90, 0x10, 0x3E, 0x00, 0x00, 0x80, 0x3F



        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}



void Aob::seguridadnuevafull1()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x00\x48\x2D\xE9\x0D\xB0\xA0\xE1\x18\xD0\x4D\xE2\x04\x00\x0B\xE5\x08\x10\x0B\xE5\x0C\x20\x8D\xE5\x04\x00\x1B\xE5\x08\x10\x1B\xE5\x08\x00\x8D\xE5\x16\x00\x00\xEB\x08\x10\x1B\xE5\x28\x10\xD1\xE5\x01\x10"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", //50
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {


        0x42, 0xF9, 0x20, 0xE5, 0x0E, 0xEE, 0x0F, 0xE1


        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}







void Aob::seguridadnuevafull2()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x00\x48\x2D\xE9\x0D\xB0\xA0\xE1\x10\xD0\x4D\xE2\x64\x02\x9F\xE5\x00\x00\x8F\xE0\x68\x12\x9F\xE5"),
        "xxxxxxxxxxxxxxxxxxxxxxxx",//24
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {


    0x42, 0xF9, 0x20, 0xE5, 0x0E, 0xEE, 0x0F, 0xE1


        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}







void Aob::seguridadnuevafull3()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x00\x48\x2D\xE9\x0D\xB0\xA0\xE1\x10\xD0\x4D\xE2\x64\x02"),
        "xxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {


     0x42, 0xF9, 0x20, 0xE5, 0x0E, 0xEE, 0x0F, 0xE1



        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}




void Aob::seguridadnuevafull5()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\xF0\x4B\x2D\xE9\x18\xB0\x8D\xE2\x18\xD0\x4D\xE2\x00\x90\xA0\xE1\xE0\x01\x9F\xE5"),
        "xxxxxxxxxxxxxxxxxxxx",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {


 0x00, 0x00, 0xA0, 0xE3, 0x1E, 0xFF, 0x2F, 0xE1



        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}





void Aob::seguridadnuevafull6()
{
    std::vector<DWORD_PTR>VecAob;
    CMemory::Initialize()->ScanMem(0x0000000000000000, 0x7fffffffffff,
        PBYTE("\x0A\x00\xA0\xE3\x6E\x00\x54\xE3\x3F\x00\x00\x13\x10\x8C\xBD\xE8\x08\x00\xA0\xE3\x00\x00\x00\xEA\x0D\x00\xA0\xE3\x70\x00\xFF"),
        "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1",
        VecAob,
        100
    );
    for (int i = 0; i < VecAob.size(); i++)
    {
        BYTE buffer[] = {


0x00, 0xF0, 0x20, 0xE3



        };
        DWORD Protect;
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), PAGE_EXECUTE_READWRITE, &Protect);
        WriteProcessMemory(CMemory::Initialize()->processHandle, (void*)VecAob[i], buffer, sizeof(buffer), NULL);
        VirtualProtectEx(CMemory::Initialize()->processHandle, (void*)VecAob[i], sizeof(VecAob[i]), Protect, &Protect);
    }

}

































































void Aob::aimbotexterno()
{

}















void Aob::camarax7()
{

}




















void Aob::seguridanose1()
{


}

void Aob::seguridanose2()
{


};



void Aob::seguridadnose3()
{


};





void Aob::camaramderecha()
{


};



























void Aob::camaramill()
{


}
















void Aob::fixcamara()
{


}










void Aob::fastreload()
{


}






void Aob::removerbug()
{


}





void Aob::seguridadblacknosek()
{
  

}




void Aob::seguridadblacknosek2()
{
  

}




void Aob::seguridadblacknosek3()
{
   

}



void Aob::seguridadblacknosek4()
{
  

}









void Aob::balas360()
{
  

}


void Aob::hs50()
{
    

}






void Aob::balas3602()
{


}





























void Aob::fixspeend()
{


}






void Aob::seguridadnosek1() 
{


}




void Aob::seguridadnosek2()
{


}









void Aob::darkseguridadlogo()
{


}





void Aob::sg()
{


}



void Aob::sg2()
{


}




void Aob::sg3()
{


}






void Aob::sg4()
{

}

void Aob::sg5()
{


}





void Aob::aim18022()
{


}





//original
void Aob::bugcamara()
{


}





void Aob::invitado()
{


}










void Aob::fix99()
{


}


















void Aob::seguridadnosek3()
{


}




void Aob::seguridadnosek4()
{


}



void Aob::seguridadnosek5()
{


}


















void Aob::seguridadblacknosek5()
{


}



void Aob::seguridadblacknosek6()
{


}


















void Aob::seguridadreportesv2()
{


}











void Aob::sniperawm()
{


}



void Aob::BYPASSMOBILE()
{


}





void Aob::BYPASSMOBILE2()
{


}




















void Aob::triplefast22()
{


}





















void Aob::BYPASSMOBILE3()
{


}




























void Aob::camarapremium()
{


}




























void Aob::recoil()
{
    

}




