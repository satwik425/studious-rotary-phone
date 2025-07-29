#pragma once
#include"include/raylib.h"

class laser{
    public:
    laser(Vector2 position,int speed);
    void draw();
    void update();
    bool active;
private:
   Vector2 position;
   int speed;
   
};