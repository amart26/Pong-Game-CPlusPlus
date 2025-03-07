#include "player.hpp"

Player::Player(float moveSpeed, Vector2 playerPosition, Vector2 playerSize, Color color):
moveSpeed(moveSpeed),  
playerPosition(playerPosition),
playerSize(playerSize),
color(color)
{}

Player::Player():
moveSpeed(0), 
playerPosition((Vector2){100, 100}),
playerSize((Vector2){100, 200}),  
color(WHITE) 
{}

Player::~Player()
{}

void Player::CreatePlayer()
{
    playerBody = {playerPosition.x, playerPosition.y, playerSize.x, playerSize.y};
    DrawRectangleRec(playerBody, RAYWHITE);
}

void Player::MovePlayer()
{
    if(IsKeyDown(KEY_W) && playerPosition.y >= 0){ playerPosition.y -= moveSpeed;}
    else if(IsKeyDown(KEY_S) && playerPosition.y < 800 - playerSize.y){ playerPosition.y += moveSpeed;}
}
