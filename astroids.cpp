#include"astroids.hpp"

astroid::astroid(Vector2 pos,Vector2 speed){
    this->pos=pos;
    this->speed=speed;
}
void astroid::draw(){
    DrawCircle(pos.x,pos.y,4.0,GRAY);
}
void astroid::update(){
    pos.x+=speed.x;
    pos.y+=speed.y;
    if(pos.x>=1600||pos.x<=0){
        speed.x=-speed.x;
    }
    if(pos.y>=900||pos.y<=0){
        speed.y=-speed.y;
    }
    
}