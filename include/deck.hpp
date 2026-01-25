#ifndef DECK_HPP
#define DECK_HPP

#include "card.hpp"
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>


class Deck {
    protected:
        std::vector<Card> _deck;
        int no_of_cards; //might need to change
        int no_of_decks; //this is for when decks are combined and shuffled for multiple deck blackjack

    public:
        void shuffleDeck();//shuffle function
        
        Deck(); //default constructor

        Deck(); //permaatirsed

        void combine_decks(const Deck& other); //const - cannot modify 'other'      Reference (&) - no copy, just alias

        int get_no_of_cards()const;//return size of deck

        void add_card(Card _Card);

        void remove_card(Card _Card); //might change it to iterator eg: (int num) //so place in the deck

        void modify_card(); //like a way of adjusting a certain value of a card inside the deck. This might include what number it is in the deck

        Card return_top_card(Deck Deck1); //return the value of top card

        //possible deal function

        ~Deck();
};


#endif