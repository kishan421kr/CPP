#include<iostream>
using namespace std;

int fib(int a){
    if(a<1){
        return 1;
    }
    return fib(a-1)+fib(a-2);
}

int main(){
    int a;
    cout<<"Enter any no for fibonacci\n";
    cin>>a;
    cout<<fib(a);
}