#include "card.hpp"
#include <iostream>

using namespace std;

int main(){
    Card A;
    cout << "Game value is: " << A.get_gameValue() << endl;
    cout << "True value is: " << A.get_trueValue() << endl;
    cout << "Get card tenplus: " << A.get_cardTenplus() <<endl;
    cout << "Print card tenplus || ";
    A.print_cardTenplus1();
    cout << "Get card suit: " << A.get_cardSuit() << endl;
    cout << "Print card suit || ";
    A.print_cardSuit();
    cout << "Tenplus to string: " << A.tenplus_toString(A.get_cardTenplus()) << endl;
    cout << "---------------------------------\n";

    Card B(Hearts, 10, King);
    cout << "Game value is: " << B.get_gameValue() << endl;
    cout << "True value is: " << B.get_trueValue() << endl;
    cout << "Get card tenplus: " << B.get_cardTenplus() <<endl;
    cout << "Print card tenplus || ";
    B.print_cardTenplus1();
    cout << "Get card suit: " << B.get_cardSuit() << endl;
    cout << "Print card suit || ";
    B.print_cardSuit();
    cout << "Tenplus to string: " << B.tenplus_toString(B.get_cardTenplus()) << endl;


    return 0;
}