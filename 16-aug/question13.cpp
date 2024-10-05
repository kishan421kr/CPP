#include<iostream>
using namespace std ;

int main () {
    cout << "Enter the divident " << "\n";
    int divident ;
    cin >> divident ;

    cout << "Enter the divisor" << "\n" ;
    int divisor ;
    cin >> divisor ;

    int remainder = divident % divisor ;

    cout << "Remainder of divident " << divident << " and  divisor " << divisor << " is " << remainder ;
}