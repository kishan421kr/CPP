#include <iostream> 
using namespace std ;

int main () { 

    float length ;
    cout << "Enter the length in inches " << " \n " ;
    cin >> length ;

    float result = length * 2.54 ;

    cout << length << " inches = " << result << " centimeters." <<" \n " ;
    
    return 0;
}