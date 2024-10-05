// wrp to display the sum to digit to the give number
#include<iostream>
using namespace std;

int main(){
    int number, temp=0,temp2;

    cout<<"Enter the number";
    cin>>number;

    while(number>0){
        temp=number%10;
        temp2=temp2+temp;
        number=number/10;
    }
    cout<<temp2;
}