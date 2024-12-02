#include<iostream>
using namespace std;
int main(){
    int a=20;
    int &b=a;//refrence variable

    b=40;
    a=900;
    
    cout<<"a="<<a;
    cout<<"b="<<b;
}