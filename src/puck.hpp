#include <raylib.h>
#include "player.hpp"

class Puck
{
    private:
    Color color;
        
    public:
        Vector2 puckPosition;
        float puckRadius; 
        float moveSpeed;

        Puck(float moveSpeed, Vector2 puckPosition,
            float puckRadius, Color color);

        Puck(); 

        ~Puck(); 

        void MovePuck(int moveDirection);

        void CreatePuck();
};
