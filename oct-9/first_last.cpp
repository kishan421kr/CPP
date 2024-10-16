#include<iostream>
using namespace std;

int main(){
    int num , last ,first, sum=0 ;
    cout<<"Enter the number ";
    cin >>num;
    
    if(num>0){
        last = num%10;
    }
    for(num;num>0;num=num/10){
        first=num;
    }
    sum = first +last;
    cout<<"Sum of First and Last number is "<<sum;
}