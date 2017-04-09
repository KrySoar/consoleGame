#include <iostream>
#include "Player.hpp"

using namespace std;
/*
Player::Player() {
  pos_X=1;
  pos_Y=1;
}*/
Player::Player(int x,int y) {
  pos_X=x;
  pos_Y=y;
}

int Player::get_X() const {
  return pos_X;
}

int Player::get_Y() const {
  return pos_Y;
}

void Player::move_Up() {
  pos_Y-=1;
}
void Player::move_Down() {
  pos_Y+=1;
}

void Player::move_Right() {
  pos_X+=1;
}
void Player::move_Left() {
  pos_X-=1;
}