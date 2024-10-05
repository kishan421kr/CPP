#include <iostream>
using namespace std ;

int main(){
     cout << "Enter the first number " << " \n " ;
    float number1 ;
    cin >> number1 ;

    cout << "Enter the second number " << " \n " ;
    float number2 ;
    cin >> number2 ;

    float multiply = number1 * number2 ;
    float division = number1 / number2 ;

    cout << " Multiply of number1 " << number1 << " and number2 " << number2 << " = " << multiply << " \n " ;
    cout << " Division of number1 " << number1 << " and number2 " << number2 << " = " << division << " \n " ;

}