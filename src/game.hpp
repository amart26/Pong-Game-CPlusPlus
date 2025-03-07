#include <raylib.h>

#include "player.hpp"
#include "puck.hpp"


class Game {

    private: 
        int screenWidth;
        int screenHeight;
        float moveSpeed;

        Player player;
        Vector2 playerPosition; 
        Vector2 playerSize;

        Puck puck;
        Vector2 puckPosition; 
        float puckRadius; 
        int puckMoveDirection; 

    public:
        void CreateGame(); 

};