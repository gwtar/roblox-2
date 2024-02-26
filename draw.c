#include <stdio.h>
#include <raylib.h>

#include "draw.h"
#include "window.h"
#include "shape.h"

void draw()
{
    rectangle rectangle;
    rectangle.position_x = SCREEN_WIDTH / 2 - 100;
    rectangle.position_y = SCREEN_HEIGHT / 2 - 100;
    rectangle.size_x = 200;
    rectangle.size_y = 200;
    rectangle.color = BLUE;

    while(!WindowShouldClose())
    {
        BeginDrawing();

        DrawRectangle(rectangle.position_x, rectangle.position_y, rectangle.size_x, rectangle.size_y, rectangle.color);

        ClearBackground(BLACK);
        EndDrawing();
    }
}
