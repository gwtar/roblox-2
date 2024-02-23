#include <stdio.h>
#include </usr/local/include/raylib.h>

int main()
{
    const int screenWidth = 700;
    const int screenHeight = 700;
    const char *title = "Roblox 2 - v0.1";

    InitWindow(screenWidth, screenHeight, title);

    while(!WindowShouldClose())
    {
        BeginDrawing();

        DrawRectangle(screenWidth / 2 - 100, screenHeight / 2 - 100, 200, 200, BLUE);

        ClearBackground(BLACK);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
