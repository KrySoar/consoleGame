#include <iostream>
#include "Map.hpp"
#include "Player.hpp"

using namespace std;

int main(int argc,char const *argv[]) {
  Map map;
  Player kry(1,1);
  int top;
  int right;
  int bottom;
  int left;
  map.setBlock(kry.get_X(),kry.get_Y(),2);
  map.draw();
  bool gameloop=true;
  char controller;
  while(gameloop){

    top=map.getBlock(kry.get_X(),kry.get_Y()-1);
    right=map.getBlock(kry.get_X()+1,kry.get_Y());
    bottom=map.getBlock(kry.get_X(),kry.get_Y()+1);
    left=map.getBlock(kry.get_X()-1,kry.get_Y());

    cin>>controller;
    map.setBlock(kry.get_X(),kry.get_Y(),0);
    switch(controller){
      case 'z':
        if(top!=1){
          kry.move_Up();
        }
        break;
      case 'q':
        if(left!=1){
          kry.move_Left();
        }
        break;
      case 's':
        if(bottom!=1){
          kry.move_Down();
        }
        break;
      case 'd':
        if(right!=1){
          kry.move_Right();
        }
        break;
      case 'x':
        gameloop=false;
        break;
      default:
        break;
    }
    map.setBlock(kry.get_X(),kry.get_Y(),2);
    map.draw();
  }
  return 0;
}
