#include<iostream>
using namespace std;
 int main(){
    int num,check=0,sum=0;
    cout<<"Enter any three digit number (100-999)\n";
    cin>>num;
    int original = num;
    if(num >= 100 && num <= 999 ){
        for(num;num>0;num=num/10){
        check =num%10;
        sum=sum + (check*check*check);
        }
        // cout<<"Answer is = " << sum;
        if(sum == original){
        cout<<original << " is Armstrong";
        }
        else{
        cout<<original << " is Not Armstrong";
        }
    }
    
    else{
        cout<<"invailid input";
    }
 }