#include "game.hpp"

void Game::CreateGame()
{
    screenWidth = 1800; 
    screenHeight = 800; 
    moveSpeed = 0.1;

    playerPosition = {(float)400, 400};
    playerSize = (Vector2){50, 250};
    player = Player(1.0, playerPosition, playerSize, WHITE);

    puckPosition = {(float)screenWidth/2, (float)screenHeight/2}; 
    puckRadius = 50.0f;
    puck = Puck(moveSpeed, puckPosition, puckRadius, RED);
    puckMoveDirection = -1;

    InitWindow(screenWidth, screenHeight, "Pong Game");
    
    while (!WindowShouldClose())
    {
        if(CheckCollisionCircleRec(puck.puckPosition, puck.puckRadius, player.playerBody))
        {
            DrawText("Has Collided", 400, 400, 32, WHITE);
            puckMoveDirection = 1;
        }
        player.MovePlayer();
        puck.MovePuck(puckMoveDirection);

        ClearBackground(BLACK); 

        BeginDrawing();
            player.CreatePlayer();
            puck.CreatePuck();
        EndDrawing();
    }

   
    CloseWindow(); 
}
