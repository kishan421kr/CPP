// wrp to check the give number is perfect number or not?
#include<iostream>
using namespace std;

int main(){
    int number=1,temp=1,temp2=0;
    while(number <= 20){ 
        if(number%temp == 0){
            temp2=temp2+temp;
            cout << temp2 <<"\t";
        }
        temp++;
        // cout <<number;
        // number++;
    }
}