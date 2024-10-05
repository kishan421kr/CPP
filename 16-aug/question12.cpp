#include <iostream>
using namespace std ;

int main (){
    cout << "Enter the remaining balance " << " \n ";
    float balance ;
    cin >> balance ;

    cout << "Enter the  annual interest rate " << " \n " ;
    float interest_rate ;
    cin >> interest_rate ;

    float interest = balance * ( interest_rate / 1200) ;

    cout << "Interest for the next month is " << interest << "rs" <<" \n " ;
}