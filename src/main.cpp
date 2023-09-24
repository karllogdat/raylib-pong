#include "raylib.h"
#include "../include/player.h"

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 450

int main()
{
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Pong");
    SetTargetFPS(60);

    Player player1 = Player((Vector2){0 ,0},(Vector2){15, 45});

    while(!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(BLACK);

            DrawRectangleV(player1.GetPosition(), player1.GetSize(), WHITE);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}