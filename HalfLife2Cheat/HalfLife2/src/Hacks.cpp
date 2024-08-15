#include "pch.h"
#include "Hacks.h"
#include "HL2.h"
ServerLocalEnt* sLocalPlayer;

namespace Hacks
{
	bool bHealth = false;
	bool bAmmo = false;

	void Initilize()
	{
		sLocalPlayer = HL2SE::getServerPlayer();
	}

	void Update()
	{
		if (sLocalPlayer != NULL)
		{
			if (bHealth)
			{
				sLocalPlayer->health = 333;
				sLocalPlayer->suit2 = 333;
			}
			if (bAmmo)
			{
				sLocalPlayer->point44Reserv = 44;
				sLocalPlayer->smgGrenade = 44;
				sLocalPlayer->smgReserv = 44;
				sLocalPlayer->grenades = 44;
				sLocalPlayer->boltsReserv = 44;
				sLocalPlayer->pistolReserv = 44;
				sLocalPlayer->rockets = 44;
				sLocalPlayer->shotgunReserv = 44;
			}
		}
		else
		{
		}
	}

	// other
	void GiveAmmo(int ammo)
	{
		sLocalPlayer->point44Reserv = ammo;
		sLocalPlayer->smgGrenade = ammo;
		sLocalPlayer->smgReserv = ammo;
		sLocalPlayer->grenades = ammo;
		sLocalPlayer->boltsReserv = ammo;
		sLocalPlayer->pistolReserv = ammo;
		sLocalPlayer->rockets = ammo;
		sLocalPlayer->shotgunReserv = ammo;
	}
	void GiveHealth(int health)
	{
		sLocalPlayer->health = health;
		sLocalPlayer->suit2 = health;
	}
}