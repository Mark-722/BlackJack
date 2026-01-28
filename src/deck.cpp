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
    for (int i = 2; i <= 9; i++){ //value cards loop
        for (int j = 0; j < 4; j++){ //suit card loop
            Card new_card(static_cast<Suit>(j),i,static_cast<tenplus>(4));
            _deck.push_back(new_card);
            no_of_cards++;
        }

    }
    for(int i = 0; i < 4; i++){ //tens
        Card new_card(static_cast<Suit>(i),10,static_cast<tenplus>(6));
        _deck.push_back(new_card);
        no_of_cards++;
    } 

    for(int i=0; i<4; i++){ //tenplus - ace
        for(int j = 0; j<4; j++){
            Card new_card(static_cast<Suit>(j),10,static_cast<tenplus>(i));
            _deck.push_back(new_card);
            no_of_cards++;
        }
    }
    
    /*
    for(int j = 0; j < 4; j++){ //ace
        Card new_card(static_cast<Suit>(j),11,static_cast<tenplus>(3));
        _deck.push_back(new_card);
        no_of_cards++;
    }*/

}

const std::vector<Card>& Deck::get_deck() const {  // ✅ Reference, no param
    return _deck;
}

Deck :: ~Deck(){
    std::cout << "Deck Gone" << std::endl;
}

Deck :: Deck(std::vector<Card>& customDeck): _deck(customDeck), no_of_cards(static_cast<int>(customDeck.size())), no_of_decks(static_cast<int>(customDeck.size())/52){
    /*
    for (int i = 0; i < sizeof(customDeck); i++){
        Card newCard = customDeck[i];
        _deck.push_back(newCard);
    }
    */ //old logic
}

int Deck :: get_no_of_decks()const{
    return this->no_of_decks;
}

void Deck :: printDeck()const{
    for (int i = 0; i < static_cast<int>(_deck.size()); i++){
        std::cout << "Card " << i+1 << " is the: ";
        Card cardA = _deck[i]; //i dont understand why I have to do this. Why can't I just do _deck[i].print_cardSuit(); 
        std::cout<<cardA.get_gameValue();
        std::cout<<" of ";
        cardA.print_cardSuit(); 
        //std::cout << "\n";
    }
    

    /*
    for (const auto& card : _Deck) {
        card.print_cardSuit();
    }
        */
}