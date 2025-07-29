#include "include/raylib.h"


int main(void)
{
  
    const int screenWidth = 1600;
    const int screenHeight = 900;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    
   
    while (!WindowShouldClose())  { 
       
        BeginDrawing();

            ClearBackground(BLACK);

         

        EndDrawing();
        
    }

   
    CloseWindow();        
    return 0;
}