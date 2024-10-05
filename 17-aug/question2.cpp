#include <iostream>
using namespace std ;

int main () {

    int side;
    cout << " Enter the side of square " << " \n " ;
    cin >> side ;

    int area = side * side ;
    int perimeter = 4 * side ;

    cout << "Area of square is " << area << " \n " ;
    cout << "Perimeter of the square is " << perimeter << " \n " ;

    return 0 ;
}