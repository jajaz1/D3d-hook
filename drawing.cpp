#include "includes.h"
//https://guidedhacking.com/threads/ezp1z1s-csgo-direct3d9-hooking-esp-tutorial-series.14570/

// filled rectangle
void DrawFilledRect(int x, int y, int w, int h, D3DCOLOR color) {
	D3DRECT rect = { x,y,x + w,y + h };
	pDevice->Clear(1, &rect, D3DCLEAR_TARGET, color, 0, 0);
}