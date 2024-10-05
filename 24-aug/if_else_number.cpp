#include <iostream>
using namespace std ;

int main () {
    int number = 0 ;
    cout << "Enter the number " << "\n" ;
    cin >> number ;

    if (number < 100)
    {
        cout << "lesser number" ;
    } 
    else {
        cout << "greater number" ;
    }
    return 0 ;
}