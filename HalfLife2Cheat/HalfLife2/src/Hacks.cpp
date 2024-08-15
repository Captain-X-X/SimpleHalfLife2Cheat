#include "pch.h"
#include "Hacks.h"
//ServerLocalEnt* sLocalPlayer;

namespace Hacks
{
	bool bHealth = false;
	bool bAmmo = false;
	ServerLocalEnt* sLocalPlayer;
	void Initilize()
	{
		sLocalPlayer = HL2SE::getServerPlayer();
	}

	void Update()
	{
		if (sLocalPlayer != NULL || sLocalPlayer != nullptr)
		{
			if (bHealth)
			{
				sLocalPlayer->health = 333;
				sLocalPlayer->suit = 333;
			}
			if (bAmmo)
			{
				sLocalPlayer->point44Reserv = 44;
				sLocalPlayer->smgGrenade = 44;
				sLocalPlayer->smgReserv = 44;
				sLocalPlayer->grenades = 44;
				sLocalPlayer->crossbowReserv = 44;
				sLocalPlayer->pistolReserv = 44;
				sLocalPlayer->rockets = 44;
				sLocalPlayer->shotgunReserv = 44;
			}
		}
		else
		{
		}
	}

	void Shutdown()
	{
		sLocalPlayer = nullptr;
		delete sLocalPlayer;
	}

	// other
	void GiveAmmo(int ammo)
	{
		sLocalPlayer->point44Reserv = ammo;
		sLocalPlayer->smgGrenade = ammo;
		sLocalPlayer->smgReserv = ammo;
		sLocalPlayer->grenades = ammo;
		sLocalPlayer->crossbowReserv = ammo;
		sLocalPlayer->pistolReserv = ammo;
		sLocalPlayer->rockets = ammo;
		sLocalPlayer->shotgunReserv = ammo;
	}
	void GiveHealth(int health)
	{
		sLocalPlayer->health = health;
		sLocalPlayer->suit = health;
	}
}