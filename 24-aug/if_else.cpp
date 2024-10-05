#include <iostream>
using namespace std ;

int main(){
    int number = 0;
    cout << "Enter the number " << "\n" ;
    cin >> number ; 

    if(number  % 2  == 0){
        cout << "Even number" <<"\n" ;
    }

    else{
        cout << "odd number" <<"\n" ;
    }

    return 0 ;
}