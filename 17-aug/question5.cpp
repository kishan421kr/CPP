#include <iostream> 
using namespace std ;

int main () {

    float radius ;
    float length ;

    cout << "Enter the radius of a cylinder : " << " \n " ;
    cin >> radius ;

    cout << "Enter the length of a cylinder : " << " \n " ;
    cin >> length ;

    float area = radius * radius * 3.14 ;
    float volume = area * length ;

    cout << " The area is " << area << " \n " ;
    cout << " The volume is " << volume << " \n " ;

    return 0 ;
}