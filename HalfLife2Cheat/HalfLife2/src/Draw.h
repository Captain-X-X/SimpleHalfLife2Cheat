#pragma once
/*
* 
	This is a simple D3D9 drawing class.
	more thingd to draw will be added soon. or something..

*/
#include <d3dx9.h>

namespace DX9Draw
{
	void drawLine(int x1, int y1, int x2, int y2, int lWidth, D3DCOLOR colour, IDirect3DDevice9* pDevice);
}
