#include <iostream>
using namespace std ;

int main () {
    cout << "Enter the amount of water in kilograms " << " \n ";
    float weight ;
    cin >> weight ;

    cout << "Enter the intial temperature " << " \n ";
    float initial_temperature ;
    cin >> initial_temperature ;

    cout << "Enter the final temperature " << " \n ";
    float final_temperature ;
    cin >> final_temperature ;

    float energy = weight * (final_temperature - initial_temperature) * 4184 ;

    cout << "The energy needed is " << energy << " \n ";


}