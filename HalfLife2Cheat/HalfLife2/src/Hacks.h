#pragma once
#include "HL2.h"
namespace Hacks
{
	extern bool bHealth;
	extern bool bAmmo;
	extern ServerLocalEnt* sLocalPlayer;

	void Initilize();
	void Update(IDirect3DDevice9* pDevice);
	void Shutdown();

	// other
	void GiveAmmo(int ammo);
	void GiveHealth(int Health);
}
