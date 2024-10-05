#include <iostream>
using namespace std ;

int main(){
    int number1 , number2 ;

    cout << "Enter the Two number " << "\n" ;
    cin >> number1 >> number2;

    number1 = number1 + number2 ;
    number2 = number1 - number2 ;
    number1 = number1 - number2 ;

    cout << "swaped numbers " << number1 << " and "<< number2 ;
 

}