#ifndef CARD_H
#define CARD_H
#include <string>

class Card{
protected:
    std::string type;
public:
    Card();

    void RevealCard(std::string);

};


#endif