#include <raylib.h>

#pragma once

class Player 
{
    private:
        float moveSpeed; 
        Vector2 playerPosition;
        Vector2 playerSize; 
        Color color;

    public: 
       Rectangle playerBody; 

        Player(float moveSpeed, Vector2 playerPosition,
               Vector2 playerSize, Color color);
        
        Player(); 

        ~Player();

        void CreatePlayer(); 
        
        void MovePlayer(); 

};

