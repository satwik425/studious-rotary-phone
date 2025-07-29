
#include "include/raylib.h"
#include"game.hpp"

int main(void)
{
  
    const int screenWidth = 1600;
    const int screenHeight = 900;
SetConfigFlags(FLAG_WINDOW_RESIZABLE);

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");
    SetTargetFPS(100);
    game a;
   
    while (!WindowShouldClose())  { 
       
        BeginDrawing();

            ClearBackground(BLACK);
        
           a.draw();
           a.handleinput();
           a.update();
          // a.drawastroid();
        EndDrawing();
        
    }

   
    CloseWindow();        
    return 0;
}