#include"game.hpp"
#include"vector"
#include"astroids.hpp"
#include"iostream"



game::game(){

}
game::~game(){

}
void game::update(){
     for(auto& laser: spaceship.lasers){
        laser.update();
    }
    deleteinactivelaser();
}
void game::draw(){
    spaceship.draw();
    for(auto& laser: spaceship.lasers){
        laser.draw();
    }
}
void game::handleinput(){
    if(IsKeyDown(KEY_D)){
        spaceship.moveright();
    }
    else if(IsKeyDown(KEY_A)){
        spaceship.moveleft();
    }
     else if(IsKeyDown(KEY_SPACE)){
        spaceship.firelaser();
     }
     else if(IsKeyDown(KEY_SPACE)&&IsKeyDown(KEY_A)){
        spaceship.firelaser();
     }
     else if(IsKeyDown(KEY_SPACE)&&IsKeyDown(KEY_D)){
        spaceship.firelaser();
}
}
void game::deleteinactivelaser(){
    for(auto it = spaceship.lasers.begin(); it != spaceship.lasers.end();){

if(!it -> active) {

it = spaceship.lasers.erase(it);

}else{

++it;
}
    }
}
void game::drawastroid(){
std:: vector<astroid> astroids;
Vector2 randompos={100,100};
Vector2 randomspeed={10,10};
for(int i=0;i<3;i++){
     astroids[i]=astroid(randompos,randomspeed);
    randompos.x+=400;
    randomspeed.y=-randomspeed.y;
    randomspeed.x=-randomspeed.x;
   astroids[i].draw();
   astroids[i].update();
}
}