#pragma once
#include "pch.h"
#define int32_t int
#define vec3 Vector3
#define vec2 Vector2
#define GameBase  (uintptr_t)GetModuleHandle(NULL)
#define ServerDLL (uintptr_t)GetModuleHandle("server.dll")
#define EngineDLL (uintptr_t)GetModuleHandle("engine.dll")

#define ServerPlayerAddy 0x0635334
#define EngineViewAngles 0x000BA2E4

class ServerLocalEnt // [<server.dll>+00635334]
{
public:
	char pad_0000[144]; //0x0000
	int32_t serverTimeMaybe; //0x0090
	char pad_0094[76]; //0x0094
	int32_t health; //0x00E0
	char pad_00E4[336]; //0x00E4
	float camRotation; //0x0234
	char pad_0238[68]; //0x0238
	Vector3 positionWrite; //0x027C for some reason z=y and the x and y are not writeable.
	char pad_0288[1100]; //0x0288
	int32_t mgReserv; //0x06D4
	int32_t ff; //0x06D8
	int32_t pistolReserv; //0x06DC
	int32_t smgReserv; //0x06E0
	int32_t point44Reserv; //0x06E4
	int32_t crossbowReserv; //0x06E8
	int32_t shotgunReserv; //0x06EC
	int32_t rockets; //0x06F0
	int32_t smgGrenade; //0x06F4
	char pad_06F8[8]; //0x06F8
	int32_t grenades; //0x0700
	char pad_0704[36]; //0x0704
	int32_t mgBallThing; //0x0728
	char pad_072C[1500]; //0x072C
	int32_t suitReadOnly; //0x0D08 Read Only
	char pad_0D0C[36]; //0x0D0C
	int32_t suit; //0x0D30
	char pad_0D34[36]; //0x0D34
	Vector2 viewAngleRead; //0x0D58 Read Only
	char pad_0D60[4920]; //0x0D60
}; //Size: 0x2098

class ViewAngles // [<engine.dll>+000BA2E4]
{
public:
	char pad_0000[92]; //0x0000
	Vector2 viewAngles; //0x005C
}; //Size: 0x0064

class FloatBoatThingy // [<server.dll>+00636B64] // this is not valid, it was for 1 game contex but no more!!
{
public:
	char pad_0000[1776]; //0x0000
	int32_t gunAmmo; //0x06F0
	char pad_06F4[2380]; //0x06F4
}; //Size: 0x1040