#ifndef BALL_H
#define BALL_H

#include "raylib.h"

class Ball
{
    private:
        Vector2 center;
        int radius;

        Vector2 velocity;

    public:
        Ball(Vector2 targetCenter, int radius);
        void SetCenter(Vector2 targetCenter);
        void SetRadius(int targetRadius);
        void SetVelocity();                     // Only run at construction
        void Draw();
        void Move();

        // Collision Functions
        void CheckCollisionBorder(Vector2 screenSize);
        void CheckCollisionPlayer(Rectangle playerRect);

        // Get private variables
        Vector2 GetCenter();
        int GetRadius();
};

#endif