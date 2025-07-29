#include"spaceship.hpp"
#include"laser.hpp"

spaceship::spaceship(){
Image= LoadTexture("spaceship.png");
position.x=(1600-112)/2;
position.y=900-75;
lastfiretime=0.0;
}
spaceship::~spaceship(){
    UnloadTexture(Image);
}
void spaceship::draw(){
    DrawTextureV(Image,position,WHITE);
}
void spaceship::moveleft(){
    position.x-=3;
    if(position.x<=0){
        position.x=0;
    }
}
void spaceship::moveright(){
    position.x+=3;
     if(position.x>=1600-112){
        position.x=1600-112;
    }
}
void spaceship::firelaser(){
    if(GetTime()-lastfiretime>=0.2){
    lasers.push_back(laser({position.x+112/2-2,position.y},-6));
    lastfiretime=GetTime();
}
}