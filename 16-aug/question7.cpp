#include <iostream>
using namespace std;

int main(){
    cout << "Enter the first number " << " \n " ;
    int number1 ;
    cin >> number1 ;

    cout << "Enter the second number " << " \n " ;
    int number2 ;
    cin >> number2 ;

    int addition = number1 + number2 ;
    int substraction = number1 - number2 ;

    cout << " addition of number1 " << number1 << " and number2 " << number2 << " = " << addition << " \n " ;

    cout << " substraction of number1 " << number1 << " and number2 " << number2 << " = " << substraction << " \n " ;
}