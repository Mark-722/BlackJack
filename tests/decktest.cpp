#include "deck.hpp"
#include <iostream>

int main(){


    Deck DeckA;

    std::vector<Card> Udeck = DeckA.get_deck();

    for (int i = 0; i < 53; i++){
        std::cout << Udeck[i].get_gameValue() << std::endl;
    }

    return 0;
}