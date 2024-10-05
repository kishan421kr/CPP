#include <iostream>
using namespace std ;

int main (){
    int number = 0 ;
    cout << "Enter the number "  << "\n" ;
    cin >> number ;

    if (number % 5 == 0)
    {
        cout <<"number is divisable by 5" << "\n" ;
    }
    else{
        int remainder = number & 5;
        int result = 5 - remainder ;
        cout << "add " << result << " to the number, to make it divisable by 5 " << "\n" ;
    }
    return 0;
}