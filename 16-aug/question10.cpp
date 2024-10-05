#include <iostream>
using namespace std ;

int main(){
    cout << "Enter the length of rectangle " << " \n " ;
    int length ;
    cin >> length ;

    cout << "Enter the breadth of rectangle " << " \n " ;
    int breadth ;
    cin >> breadth ;

    int area = length * breadth ;
    int perimeter = 2 * (length + breadth) ;

    cout << "Area of rectangle " << area << " \n " ;
    cout << "Perimeter of rectangle " << perimeter << " \n " ;


}