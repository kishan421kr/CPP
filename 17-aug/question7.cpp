#include <iostream>
using namespace std ;

int main () {
     
     double velocity0;
     double velocity1;
     double time ;

     cout << "Enter the v0 " << " \n " ;
     cin >> velocity0 ;

     cout << "Enter the v1 " << " \n " ;
     cin >> velocity1 ;

     cout << "Enter the time " << " \n " ;
     cin >> time ;
    
     double average = (velocity1 - velocity0) / time ;

     cout << "The average acceleration is " << average << " \n " ;

     return 0 ;

}