#include"laser.hpp"

laser::laser(Vector2 position,int speed){
    this->position=position;
    this->speed=speed;
    active=true;
}
 void laser::draw(){
    if(active){
    DrawRectangle(position.x,position.y,4,16,RED);
}
}
 void laser::update(){
    position.y+=speed;
    if(active){
     if(position.y>GetScreenHeight()||position.y<0){
        active=false;
    }
    }
    
}