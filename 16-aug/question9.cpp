#include <iostream>
using namespace std;

int main () {
    cout << "Enter the radius of the circle " << "\n";
    float radius;
    cin >> radius;

    float area_of_circle = 3.14 * radius * radius ;
    float perimeter_of_circle = 2 * 3.14 * radius ;

    cout << " Area of circle radius " << radius << " = " << area_of_circle << " \n " ;
    cout << "perimeter of circle radius " << radius << " = " << perimeter_of_circle << " \n " ;   
}