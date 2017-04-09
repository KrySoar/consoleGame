#include <iostream>
#include "Map.hpp"
#define MAP_SIZE 16
using namespace std;
int Map::gridMap[]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                    1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                    1,1,1,0,1,1,1,1,0,0,0,0,0,0,0,1,
                    1,3,1,0,1,0,0,1,0,0,0,0,0,0,0,1,
                    1,0,1,0,1,0,0,0,0,1,1,1,1,0,0,1,
                    1,0,0,0,0,0,0,0,0,1,3,1,0,0,0,1,
                    1,1,1,0,1,1,0,0,1,1,0,1,1,1,0,1,
                    1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,
                    1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                    1,1,1,0,0,0,0,1,1,1,1,0,0,0,0,1,
                    1,3,1,1,1,1,0,1,0,0,1,1,1,0,1,1,
                    1,0,1,0,0,0,0,1,0,0,0,0,0,0,0,1,
                    1,0,1,1,0,1,1,1,0,0,0,0,0,0,0,1,
                    1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                    1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
Map::Map() {
}
void Map::draw() {
  int k=0;
  for(int i=0;i<MAP_SIZE;i++,k++){
    for(int j=0;j<MAP_SIZE;j++,k++){
      cout<<setTile(k);
      //cout<<" ";
    }
    k--;
    cout<<endl;
  }
}

int Map::getBlock(int x,int y) {
  int r_block=gridMap[x+(y*MAP_SIZE)];
  //cout<<"Debug: "<<gridMap[x+(y*MAP_SIZE)]<<endl;
  return r_block;
}
void Map::setBlock(int x,int y,int id) {
  gridMap[x+(y*MAP_SIZE)]=id;
}

char Map::setTile(int index){
  char r_block;
  switch(gridMap[index]){
    case 0:
      r_block=' ';//air
      break;
    case 1:
      r_block='#';//block
      break;
    case 2:
      r_block='X';//player
      break;
    case 3:
      r_block='o';//coin
      break;
    case 4:
      r_block='.';
      break;
    default:
      break;
  }
  return r_block;
}