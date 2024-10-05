// wrp to disply the revers of a given number

#include<iostream>
using namespace std;

int main(){
    int number,revers=0;

    cout<<"Enter the number";
    cin>>number;

    while(number>0){
        
        revers=revers*10+number%10;
        number=number/10;
    }
    cout<<revers;
}