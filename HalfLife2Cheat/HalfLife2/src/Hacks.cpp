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
				sLocalPlayer->Magnum44Reserv = 44;
				sLocalPlayer->smgGrenade = 44;
				sLocalPlayer->smgReserv = 44;
			}
		}
		else
		{
		}
	}
}