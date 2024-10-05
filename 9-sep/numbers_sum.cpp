// sum of 3 dgit number

#include<iostream>
using namespace std;

int main(){
    int number;

    cout << "Enter the three digit number " << "\n" ;
    cin >> number;

    int a = number / 100 ;
    int b = number % 100 ;
    int c = b / 10 ;
    int e = b % 10 ;

    cout << "Sum of digits is " << a+c+e <<"\n" ;
}