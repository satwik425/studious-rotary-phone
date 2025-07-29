#pragma once
#include<iostream>
#include"include/raylib.h"
#include"vector"
#include"laser.hpp"


class spaceship{
    public:
    spaceship();
    ~spaceship();
    void draw();
    void moveleft();
    void moveright();
    void firelaser();
    std::vector<laser> lasers;
    private:
    Texture2D Image;
    Vector2 position;
    double lastfiretime;
};