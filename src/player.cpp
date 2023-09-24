#include "../include/player.h"
#include "raylib.h"

Player::Player(Vector2 targetPosition, Vector2 targetSize)
{
    SetInitialPosition(targetPosition);
    SetSize(targetSize);
}

void Player::SetInitialPosition(Vector2 targetPosition)
{
    position = targetPosition;
}

void Player::SetSize(Vector2 targetSize)
{
    size = targetSize;
}

void Player::SetMovementKeys(int up, int down)
{
    keyUp = up;
    keyDown = down;
}

Vector2 Player::GetPosition() { return position; }

Vector2 Player::GetSize() { return size; }

void Player::Move()
{
    if (IsKeyDown(keyUp)) position.y -= 5.0f;
    if (IsKeyDown(keyDown)) position.y += 5.0f;
}

void Player::Draw()
{
    DrawRectangleV(GetPosition(), GetSize(), WHITE);
}

void Player::CheckBorderCollision(Vector2 screenSize)
{
    if (position.x <= 0) position.x = 0;
    if ((position.x + size.x) >= screenSize.x) position.x = (screenSize.x - size.x);

    if (position.y <= 0) position.y = 0;
    if ((position.y + size.y) >= screenSize.y) position.y = (screenSize.y - size.y);
}