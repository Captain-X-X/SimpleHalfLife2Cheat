#include "pch.h"
#include "Hacks.h"
#include "Draw.h"
extern int winWidth;
extern int winHeight;
extern bool menu_open;
namespace Hacks
{
	bool bHealth = false;
	bool bAmmo = false;
	ServerLocalEnt* sLocalPlayer = nullptr; // this has some writeable ammo, position and view angles, would be nice to use the ent list.. but im still reversing it some. sorry haha.
	void Initilize()
	{
		sLocalPlayer = HL2SE::getServerPlayer();
	}

	void Update(IDirect3DDevice9* pDevice/* we take the D3D9 device for rendering esp.. if ever i find that stoopid entlist*/)
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
			menu_open = false;
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