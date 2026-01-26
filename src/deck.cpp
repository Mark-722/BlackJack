#include "deck.hpp"
#include <iostream>
#include <random>
#include <chrono>


void Deck :: add_card(Card _Card){ 
    /*i might need to change this to include multiple decks
    have a private value saying how many decks there is
    -------------------------------------------------------
    Done
    */
    if (no_of_cards <= 52*this->no_of_decks){
        std::cout<< "Deck Is full" << std::endl;
    }
    else {
        this->_deck.push_back(_Card);
        this->no_of_cards += 1;
    }
}

void Deck::shuffleDeck(){ //AI Gen
    // Each Deck gets its own random generator
    std::mt19937 rng(std::chrono::steady_clock::now().time_since_epoch().count());
    std::shuffle(_deck.begin(), _deck.end(), rng);

}

int Deck :: get_no_of_cards()const{//return size of deck
    return this->no_of_cards;
}


void Deck :: combine_decks(const Deck& other){ //AI helped
    // Add all cards from 'other' to this deck
    _deck.insert(_deck.end(), other._deck.begin(), other._deck.end());
    no_of_cards += other.get_no_of_cards();
    no_of_decks += other.no_of_decks;

}

Deck::Deck(): no_of_cards(0), no_of_decks(1) {
    for (int i = 2; i < 10; i++){ //value cards loop
        for (int j = 0; j < 4; j++){ //suit card loop
            Card new_card(static_cast<Suit>(j),i,static_cast<tenplus>(4));
            _deck.push_back(new_card);
            no_of_cards++;
        }

    }
    for(int i=0; i<3; i++){ //tenplus - ace
        for(int j = 0; j<4; j++){
            Card new_card(static_cast<Suit>(j),10,static_cast<tenplus>(i));
            _deck.push_back(new_card);
            no_of_cards++;
        }
    }

    for(int j = 0; j<4; j++){ //ace
        Card new_card(static_cast<Suit>(j),11,static_cast<tenplus>(3));
        _deck.push_back(new_card);
        no_of_cards++;
    }

}

const std::vector<Card>& Deck::get_deck() const {  // ✅ Reference, no param
    return _deck;
}

Deck :: ~Deck(){
    std::cout << "Deck Gone" << std::endl;
}