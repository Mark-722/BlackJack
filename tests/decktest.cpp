#include "deck.hpp"
#include <iostream>

int main(){


    Deck DeckA;

    std::vector<Card> Udeck = DeckA.get_deck();

    for (int i = 0; i < 53; i++){
        std::cout << Udeck[i].get_gameValue() << " | ";
        Udeck[i].print_cardSuit();
    }

    std::cout << "Deck A has | " << DeckA.get_no_of_cards() << " number of cards" << std::endl;

    return 0;
}