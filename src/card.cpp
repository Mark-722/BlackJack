#include "card.hpp"
#include <iostream>

using namespace std;

#include <string>

std::string Card :: get_gameValue() const { //maybe add input card
    switch (_value)
    {
    case 1:
        return "Ace";
    case 2:
        return "2";
    case 3:
        return "3";
    case 4:
        return "4";
    case 5:
        return "5";
    case 6:
        return "6";
    case 7:
        return "7";
    case 8:
        return "8";
    case 9:
        return "9";
    case 10:
        return tenplus_toString(this->_tenplus); // should say what 10 it is (jack,queen,king)
        //not sure about this logic?????
    case 11:
        return "Ace";

    default:
        return "None";
        //if i need anything in here
        break;
    }

} //returns the value of the card


void Card :: print_cardTenplus1(){ // do switch statement || This is a usless function - I can just use get_gameValue function
    switch (_tenplus)
    {
    case 0:
        cout << "Jack" << endl;
        break;
    case 1:
        cout << "Queen" << endl;
        break;
    case 2:
        cout << "King" << endl;
        break;
    case 3:
        cout << "Ace" << endl;
        break;
    case 4:
        cout << "Under" << endl;
        break;
    case 5:
        cout << "Zero" << endl;
        break;
    default:
        cout << "Print cardTenplus error" << endl;
        break;
    }
}

std::string Card :: tenplus_toString(tenplus tenplus1) const{
    switch (tenplus1)
    {
    case 0:
        return "Jack";
    case 1:
        return "Queen";
    case 2:
        return "King";
    case 3:
        return "Ace";
    case 4:
        return "Under";    
    case 5:
        return "Blank";
    default:
        return "tenplus to string error";
    }
}


int Card :: get_trueValue() const {
    return this->_value;
} //returns int value


Card :: Card() : _suit(Blank), _value(0), _tenplus(Zero){}//defult constructor


Card :: Card(Suit suit, int value, tenplus tenplus): _suit(suit), _value(value), _tenplus(tenplus) {}


Card :: ~Card(){
    cout << "Card gone" << endl;
}

Suit Card :: get_cardSuit() const{
    return this->_suit;
} //returns Suit value


void Card :: print_cardSuit(){
    switch (_suit)
    {
    case 0:
        cout << "Clubs" << endl;
        break;
    case 1:
        cout << "Hearts" << endl;
        break;
    case 2:
        cout << "Spades" <<endl;
        break;
    case 3:
        cout << "Diamonds" << endl;
        break;
    case 4:
        cout << "Blank" << endl;
        break;
    default:
        cout << "printcardSuit Error" << endl;
        break;
    }
} //prints it

tenplus Card :: get_cardTenplus(){
    return this-> _tenplus;
} //returns tenplus value in tenplus form, maybe usefull in the future