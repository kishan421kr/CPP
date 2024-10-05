#include<iostream>
using namespace std;

int main(){
    cout << "Enter the number1" <<'\n';
    int number1;
    cin >> number1;

    cout << "Enter the number2" <<'\n';
    int number2;
    cin >>number2;

    cout << "Enter the number3" <<'\n';
    int number3;
    cin >> number3;

    int sum = number1 + number2;

    int subtraction = sum - number3;

    cout << "sum of the values is " << sum << " and substraction is " << subtraction ;
}