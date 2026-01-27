#include "deck.hpp"
#include <iostream>

int main(){


    Deck DeckA;

    std::vector<Card> Udeck = DeckA.get_deck();

    for (int i = 1; i <= 52; i++){//made i = 1 for testing purposes
        std::cout << Udeck[i-1].get_gameValue() << " | ";
        Udeck[i-1].print_cardSuit();
        //std::cout<< i << std::endl;
    }

    std::cout << "Deck A has | " << DeckA.get_no_of_cards() << " number of cards" << std::endl;

    //---------------- Working on Shuffle Function-------------------------
    DeckA.shuffleDeck();
    std::cout<<"Shuffle Deck\n"<< "---------------------" << std::endl;

    for (int i = 0; i <= 52; i++){//made i = 1 for testing purposes
        std::cout << DeckA.get_deck()[i].get_gameValue() << " | ";
        //DeckA.get_deck()[0].print_cardSuit(); needs to be fixed
    }
    //---------------- Working on Shuffle Function-----------------------

    return 0;
}