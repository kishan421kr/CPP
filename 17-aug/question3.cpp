#include <iostream> 
using namespace std ;

int main (){

    int lenght ;
    int breadth ;

    cout << " Enter the lenght of the rectangle " << " \n " ;
    cin >> lenght ;

    cout << "Enter the breadth of the rectangle " << " \n " ;
    cin >> breadth ;

    int area = lenght * breadth ;
    int perimeter = 2 * ( lenght + breadth ) ;

    cout << " Area of the rectangle is " << area << " \n " ;
    cout << " perimeter of the rectangle is " << perimeter << " \n " ;

    return 0 ;
}