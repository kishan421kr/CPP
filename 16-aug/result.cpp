#include <iostream>
using namespace std;

int main (){

    cout << "Enter the number 1" <<'\n';
    int number1;
    cin >> number1;

    cout << "Enter the number 2" <<'\n';
    int number2;
    cin >> number2;

    cout << "Enter the number 3" <<'\n';
    int number3;
    cin >> number3;

    cout << "Enter the number 4" <<"\n";
    int number4;
    cin >> number4;

    cout << "Enter the number 5" <<"\n";
    int number5;
    cin >> number5;

    int result = number1 + number2 - number3 * number4 / number5 ;

    cout << number1 << " + "
            << number2 << " - "
                << number3 << " * "
                    << number4 << " / "
                        << number5 << " = " 
                            << result << " \n ";
}