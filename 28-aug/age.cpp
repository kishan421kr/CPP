#include<iostream>
using namespace std ;

int main(){
    int number ;

    cout << " Enter the number \n" ;
    cin >>number;
    // int even;
    // even = number % 2 == 0 ? 1 : 0 ;
    // cout << even;
    number % 2 == 0 ? cout << "Even" : cout << "Odd" ;
}