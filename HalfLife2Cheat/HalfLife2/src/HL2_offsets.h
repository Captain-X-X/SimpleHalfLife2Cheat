#pragma once
#include "pch.h"
#define GameBase  (uintptr_t)GetModuleHandle(NULL)
#define ServerDLL (uintptr_t)GetModuleHandle("server.dll")

#define ServerPlayerAddy 0x0635334

class ServerLocalEnt
{
public:
	char pad_0000[224]; //0x0000
	int health; //0x00E0
	char pad_00E4[532]; //0x00E4
	Vector2 vAngles2; //0x02F8
	char pad_0300[4]; //0x0300
	Vector3 camPosition; //0x0304
	Vector2 vAngles1; //0x0310
	char pad_0318[964]; //0x0318
	int pistolReserv; //0x06DC
	int smgReserv; //0x06E0
	int Magnum44Reserv; //0x06E4
	char pad_06E8[12]; //0x06E8
	int smgGrenade; //0x06F4
	char pad_06F8[1128]; //0x06F8
	bool isJumping; //0x0B60
	char pad_0B61[55]; //0x0B61
	Vector3 position; //0x0B98
	char pad_0BA4[356]; //0x0BA4
	int suit1; //0x0D08
	char pad_0D0C[36]; //0x0D0C
	int suit2; //0x0D30
	char pad_0D34[4932]; //0x0D34
}; //Size: 0x2078

class FloatBoatThingy // [<server.dll>+00636B64]
{
public:
	char pad_0000[1776]; //0x0000
	int32_t gunAmmo; //0x06F0
	char pad_06F4[2380]; //0x06F4
}; //Size: 0x1040