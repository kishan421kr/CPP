#include<iostream>
using namespace std;

void show(int a , int b){
    cout<<a+b<<"\n";
}
void sqr(int a){
    cout<<a*a;
}
int main(){
    show(4,5);
    // function over loading . in a function loading function name are same and parameter is diffrent.
    sqr(5);
}