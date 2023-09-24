#ifndef PLAYER_H
#define PLAYER_H

#include "raylib.h"

class Player
{
    private:
        Vector2 position;
        Vector2 size;
        int keyUp, keyDown;
    public:
        Player(Vector2 targetPostion, Vector2 targetSize);
        void SetInitialPosition(Vector2 targetPosition);
        void SetSize(Vector2 targetSize);
        void SetMovementKeys(int up, int down);
        Vector2 GetPosition();
        Vector2 GetSize();
        void Move();
        void Draw();
        void CheckBorderCollision(Vector2 screenSize);
};

#endif