#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player{
protected:
    std::string name;
    int score;
public:
    Player();
    Player(std::string);

    std::string getName();
    int getScore();

};


#endif

/*
Card game where there are 3 by 3 rows

player & cards


*/