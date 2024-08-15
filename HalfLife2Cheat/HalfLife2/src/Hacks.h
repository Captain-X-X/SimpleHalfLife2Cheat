#pragma once

namespace Hacks
{
	extern bool bHealth;
	extern bool bAmmo;
	void Initilize();
	void Update();

	// other
	void GiveAmmo(int ammo);
	void GiveHealth(int Health);
}
