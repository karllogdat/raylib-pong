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

Vector2 Player::GetPosition() { return position; }

Vector2 Player::GetSize() { return size; }