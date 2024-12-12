#include <iostream>
using namespace std ;

 int main (){

    cout << "Enter the numerator "<< "\n";
    int numerator;
    cin >>numerator;

    cout << "Enter the denominator" << "\n";
    int denominator;
    cin >>denominator;

    int remainder = numerator / denominator ;

    cout << "Remainder is " << remainder << "\n";

 }