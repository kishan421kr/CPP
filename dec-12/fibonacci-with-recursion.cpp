#include<iostream>
using namespace std;

int fib(int a){
    int count=0;
    if(a<0){
        count++;
        return 0;
    }
    if(a==0){
        count++;
        return 1;
    }
    cout<<count;
    return fib(a-1)+fib(a-2);
}

int main(){
    int a;
    cout<<"Enter any no for fibonacci number of that term\n";
    cin>>a;
    cout<<fib(a);
}