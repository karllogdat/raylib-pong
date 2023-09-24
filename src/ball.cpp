#include "../include/ball.h"
#include "raylib.h" 

Ball::Ball(Vector2 targetCenter, int radius)
{
    SetCenter(targetCenter);
    SetRadius(radius);
    SetVelocity();
}

void Ball::SetCenter(Vector2 targetCenter) { center = targetCenter; }
void Ball::SetRadius(int targetRadius) { radius = targetRadius; }
void Ball::SetVelocity() { velocity = (Vector2){4.0f, 4.0f}; }

void Ball::Draw()
{
    DrawCircleV(center, radius, WHITE);
}

void Ball::Move()
{
    center.x = center.x + velocity.x;
    center.y = center.y + velocity.y;
}

// Collision Functions 
void Ball::CheckCollisionBorder(Vector2 screenSize)
{
    // x-related
    if (center.x - radius <= 0) 
    {
        velocity.x = -velocity.x;
        center.x = screenSize.x / 2;
        center.y = screenSize.y / 2;
    }
    if (center.x + radius >= screenSize.x) 
    {
        velocity.x = -velocity.x;
        center.x = screenSize.x / 2;
        center.y = screenSize.y / 2;
    }

    // y-related
    if (center.y - radius <= 0) velocity.y = -velocity.y;
    if (center.y + radius >= screenSize.y) velocity.y = -velocity.y;
}

void Ball::CheckCollisionPlayer(Rectangle playerRect)
{
    if (CheckCollisionCircleRec(center, radius, playerRect))
        velocity.x = -velocity.x;
}

// Get functions
Vector2 Ball::GetCenter() { return center; }
int Ball::GetRadius() { return radius; }