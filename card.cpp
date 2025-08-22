#include "card.h"

Card::Card():type("X"){}

void Card::RevealCard(std::string s){type = s;}