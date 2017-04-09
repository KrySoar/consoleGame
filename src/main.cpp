#include <iostream>
#include "Map.hpp"
#include "Player.hpp"

using namespace std;

int main(int argc,char const *argv[]) {
  Map map;
  Player player(1,1);
  int top;
  int right;
  int bottom;
  int left;
  map.setBlock(player.get_X(),player.get_Y(),2);
  map.draw();
  bool gameloop=true;
  char controller;
  while(gameloop){

    top=map.getBlock(player.get_X(),player.get_Y()-1);
    right=map.getBlock(player.get_X()+1,player.get_Y());
    bottom=map.getBlock(player.get_X(),player.get_Y()+1);
    left=map.getBlock(player.get_X()-1,player.get_Y());

    cin>>controller;
    map.setBlock(player.get_X(),player.get_Y(),0);
    switch(controller){
      case 'z':
        if(top!=1){
          player.move_Up();
        }
        break;
      case 'q':
        if(left!=1){
          player.move_Left();
        }
        break;
      case 's':
        if(bottom!=1){
          player.move_Down();
        }
        break;
      case 'd':
        if(right!=1){
          player.move_Right();
        }
        break;
      case 'x':
        gameloop=false;
        break;
      default:
        break;
    }
    map.setBlock(player.get_X(),player.get_Y(),2);
    map.draw();
  }
  return 0;
}
