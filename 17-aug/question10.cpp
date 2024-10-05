#include <iostream>
using namespace std ;

int main ( ) {

    float total_distance ;
    float mileage ;
    float petrol_cost ;

    cout << " Enter the driving distance " << " \n " ;
    cin >> total_distance ;

    cout << "Enter kilometer per liter " << " \n " ;
    cin >> mileage ;

    cout << "Enter price per liter " << " \n " ;
    cin >> petrol_cost ;

    float total_cost = total_distance / mileage * petrol_cost ;

    cout << "The cost of driving is " <<  total_cost << " \n " ;

    return 0 ;
}