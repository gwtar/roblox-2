#include <stdio.h>
#include </usr/local/include/raylib.h>

typedef struct rectangle
{
    int x_position;
    int y_position;
    int x_size;
    int y_size;
    int x_speed;
    int y_speed;
    Color color;
} rectangle;

typedef struct circle
{
    int x_position;
    int y_position;
    float radius;
    int x_speed;
    int y_speed;
    Color color;
} circle;

int main()
{
    const int screen_width = 700;
    const int screen_height = 700;
    const char *title = "Roblox 2 - v0.2";

    rectangle rectangle;
    rectangle.x_position = screen_width / 2 - 100;
    rectangle.y_position = screen_height / 2 - 100;
    rectangle.x_size = 200;
    rectangle.y_size = 200;
    rectangle.color = BLUE;

    circle circle;
    circle.x_position = 300;
    circle.y_position = 100;
    circle.radius = 50;
    circle.x_speed = 10;
    circle.y_speed = 10;
    circle.color = RED;

    InitWindow(screen_width, screen_height, title);
    SetTargetFPS(60);

    while(!WindowShouldClose())
    {
        if(IsKeyDown(KEY_W)) rectangle.y_position -= 20;
        if(IsKeyDown(KEY_S)) rectangle.y_position += 20;
        if(IsKeyDown(KEY_A)) rectangle.x_position -= 20;
        if(IsKeyDown(KEY_D)) rectangle.x_position += 20;

        circle.x_position += circle.x_speed;
        circle.y_position += circle.y_speed;

        if(circle.x_position == screen_width - 50) circle.x_speed *= -1;
        if(circle.x_position == 50) circle.x_speed *= -1;
        if(circle.y_position == screen_height - 50) circle.y_speed *= -1;
        if(circle.y_position == 50) circle.y_speed *= -1;

        if(rectangle.x_position > screen_width - rectangle.x_size) rectangle.x_position = screen_width - rectangle.x_size;
        if(rectangle.x_position < 0) rectangle.x_position = 0;
        if(rectangle.y_position > screen_height - rectangle.y_size) rectangle.y_position = screen_height - rectangle.y_size;
        if(rectangle.y_position < 0) rectangle.y_position = 0;

        BeginDrawing();

        DrawCircle(circle.x_position, circle.y_position,
                circle.radius, circle.color);

        DrawRectangle(rectangle.x_position, rectangle.y_position,
                rectangle.x_size, rectangle.y_size, rectangle.color);

        ClearBackground(BLACK);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
