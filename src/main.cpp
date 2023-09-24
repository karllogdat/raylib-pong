#include "raylib.h"
#include "../include/player.h"

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 450

int main()
{
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Pong");
    SetTargetFPS(60);

    Player player1 = Player((Vector2){20 ,0}, (Vector2){10, 50});
    Player player2 = Player((Vector2){770, 0}, (Vector2){10, 50});

    player1.SetMovementKeys(KEY_W, KEY_S);
    player2.SetMovementKeys(KEY_UP, KEY_DOWN);

    while(!WindowShouldClose())
    {
        player1.Move();
        player2.Move();

        player1.CheckBorderCollision((Vector2){WINDOW_WIDTH, WINDOW_HEIGHT});
        player2.CheckBorderCollision((Vector2){WINDOW_WIDTH, WINDOW_HEIGHT});

        BeginDrawing();
            ClearBackground(BLACK);

            player1.Draw();
            player2.Draw();
        EndDrawing();
    }

    CloseWindow();

    return 0;
}