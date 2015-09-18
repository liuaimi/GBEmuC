#ifndef GBEMC_GPU_H
#define GBEMC_GPU_H

#include "common.h"

extern u8 scanline;

void render_full(void);
void draw_scanline(void);

u8 *pixels;

#endif // GBEMC_GPU_H
