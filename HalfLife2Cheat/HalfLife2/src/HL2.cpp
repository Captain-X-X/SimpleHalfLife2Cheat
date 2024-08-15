#include "pch.h"
#include "HL2.h"
namespace HL2SE
{
    ServerLocalEnt* getServerPlayer()
    {
        return *(ServerLocalEnt**)(ServerDLL + ServerPlayerAddy);
    }
    void fPrintToConsole(const char* text) // this dont work
    {
        // 1026F3F0
        typedef char*(__cdecl* _cPrint)(char* sFormat, ...);
        _cPrint conPrint = (_cPrint)(ServerDLL + 0x1026F3F0);
        char format[] = "Cheat: %s\n";
        conPrint(format, (char)text);
    }
}