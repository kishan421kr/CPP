#include<iostream>
using namespace std ;
 int main() {
    int number1;
    int number2;
    
    cout << "Enter the first value" << "\n";

    cin >> number1;

    cout << "Enter the Second value" << '\n';

    cin >> number2 ;

    int sum = number1 + number2;

    cout << "sum of number1 " << number1 << " and number2 " << number2 <<" is " << sum  ;
 }