#include <iostream> 
using namespace std ;

int main () {

    float balance ;
    cout << " Enter the balance amount " << " \n " ;
    cin >> balance ;

    float interest_rate ;
    cout << "Enter the annual interest rate " << " \n " ;
    cin >> interest_rate ;

    float interest_next_month = balance * ( interest_rate / 1200 ) ;

    cout << " The interest for the next month is " << interest_next_month << " \n " ;

    return 0 ; 
}