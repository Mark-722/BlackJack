#ifndef CARD_HPP
#define CARD_HPP

#include <string>

enum Suit {
    Clubs,
    Hearts,
    Spades,
    Diamonds,
    Blank,
};

enum tenplus {
    Jack,
    Queen,
    King,
    Ace,
    Under,
    Zero,
    Ten,
};

class Card {
    protected: //could be priviate in the future
        Suit _suit; //the suit of the card
        int _value; //the value of the card
        tenplus _tenplus; //if the value is over 10 it determins what the card actually is

    public:
        std::string get_gameValue() const; //returns the written value of the card
        int get_trueValue() const; //returns int value of the card

        tenplus get_cardTenplus(); //returns tenplus value in tenplus form, maybe usefull in the future
        void print_cardTenplus1(); //prints tenpuls value || might be useless

        Suit get_cardSuit() const; //returns Suit value
        void print_cardSuit(); //prints it

        std::string tenplus_toString(tenplus tenplus1)const; //simple tenplus to string converter

        Card(); //default

        Card(Suit suit, int value, tenplus tenplus); //constructor

        ~Card();

        //make some setters
};

#endif