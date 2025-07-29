#pragma once
#include<iostream>
#include"include/raylib.h"
#include"spaceship.hpp"

class game{
    public:
    game();
    ~game();
    void draw();
    void update();
    void handleinput();
    void drawastroid();
    private:
    spaceship spaceship;
    void deleteinactivelaser();
};