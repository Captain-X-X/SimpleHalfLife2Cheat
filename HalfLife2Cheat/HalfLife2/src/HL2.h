#pragma once
#include "HL2_offsets.h"
namespace HL2SE
{
	ServerLocalEnt* getServerPlayer();

	bool worldToScreen(Vector3 position, Vector2& screen, float vMatrix[16], int wWidth, int wHeight);
}