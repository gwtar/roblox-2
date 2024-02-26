#include <stdio.h>
#include </usr/local/include/raylib.h>

#include "window.h"
#include "draw.h"

void window()
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, WINDOW_TITLE);
    SetTargetFPS(FPS_MAX);

    draw();

    CloseWindow();
}
