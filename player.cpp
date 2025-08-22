#include "player.h"

Player::Player(): score(0){}
Player::Player(std::string s): name(s), score(0){}

std::string Player::getName(){return name;}
int Player::getScore(){return score;}