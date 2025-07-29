#pragma once
#include"include/raylib.h"

class astroid{
    public:
    astroid(Vector2 pos,Vector2 speed);
    void draw();
    void update();
    void collision();
    private:
    Vector2 pos;
    Vector2 speed;
};