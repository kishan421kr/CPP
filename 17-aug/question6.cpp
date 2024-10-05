#include <iostream> 
using namespace std ;

 int main () {

    float celsius ;

    cout << " Enter a degree in Celsius : " << " \n " ;
    cin >> celsius ;

    float fahrenheit = ( 9.0 / 5 ) * celsius + 32 ;

    cout << celsius << " Celsius is " << fahrenheit << " Fahrenheit " << " \n " ;

    return 0 ;
 }