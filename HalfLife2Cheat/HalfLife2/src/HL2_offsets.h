#pragma once
#include "pch.h"
#define int32_t int
#define vec3 Vector3
#define vec2 Vector2
#define GameBase  (uintptr_t)GetModuleHandle(NULL)
#define ServerDLL (uintptr_t)GetModuleHandle("server.dll")

#define ServerPlayerAddy 0x0635334

class ServerLocalEnt
{
public:
	char pad_0000[224]; //0x0000
	int32_t health; //0x00E0
	char pad_00E4[532]; //0x00E4
	Vector2 vAngles2; //0x02F8
	char pad_0300[4]; //0x0300
	Vector3 camPosition; //0x0304
	Vector2 vAngles1; //0x0310
	char pad_0318[956]; //0x0318
	int32_t mgAmmoReserv; //0x06D4
	char pad_06D8[4]; //0x06D8
	int32_t pistolReserv; //0x06DC
	int32_t smgReserv; //0x06E0
	int32_t point44Reserv; //0x06E4
	int32_t boltsReserv; //0x06E8
	int32_t shotgunReserv; //0x06EC
	int32_t rockets; //0x06F0
	int32_t smgGrenade; //0x06F4
	char pad_06F8[8]; //0x06F8
	int32_t grenades; //0x0700
	char pad_0704[1116]; //0x0704
	bool isJumping; //0x0B60
	char pad_0B61[55]; //0x0B61
	Vector3 position; //0x0B98
	char pad_0BA4[356]; //0x0BA4
	int32_t suit1; //0x0D08
	char pad_0D0C[36]; //0x0D0C
	int32_t suit2; //0x0D30
	char pad_0D34[4932]; //0x0D34
}; //Size: 0x2078

class FloatBoatThingy // [<server.dll>+00636B64]
{
public:
	char pad_0000[1776]; //0x0000
	int32_t gunAmmo; //0x06F0
	char pad_06F4[2380]; //0x06F4
}; //Size: 0x1040