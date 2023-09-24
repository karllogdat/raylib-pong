#include "raylib.h"

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 450

int main()
{
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Pong");
    SetTargetFPS(60);

    while(!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(BLACK);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}