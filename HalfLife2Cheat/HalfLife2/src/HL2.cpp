#include "pch.h"
#include "HL2.h"
namespace HL2SE
{
    ServerLocalEnt* getServerPlayer()
    {
        return *(ServerLocalEnt**)(ServerDLL + ServerPlayerAddy);
    }
}