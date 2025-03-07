#include "puck.hpp"

Puck::Puck(float moveSpeed, Vector2 puckPosition, float puckRadius, Color color):
moveSpeed(moveSpeed), 
puckPosition(puckPosition),
puckRadius(puckRadius), 
color(color)
{}

Puck::Puck():
moveSpeed(0), 
puckPosition((Vector2){0, 0}),
puckRadius(100), 
color(WHITE)
{}

Puck::~Puck()
{}

void Puck::MovePuck(int moveDirection)
{
   if(moveDirection == 1)
    {
        puckPosition.x += moveSpeed; 
    }
    else if(moveDirection == -1)
    {
        puckPosition.x -= moveSpeed;
    }
        
}

void Puck::CreatePuck()
{
    DrawCircleV(puckPosition, puckRadius, color);
}

