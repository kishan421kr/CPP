#include<iostream>
using namespace std;

int main(){
    int a=23;
    char f='A';
    cout<<"a= "<<a<<"\n";
    int b=a;
    cout<<"b= "<<b<<"\n";
    int &c=a;
    c=20;
    cout<<"a= "<<a<<"\t b= "<<b<<"\n";
    int *p=&a;
    cout<<p<<"\t";
    cout<<*p<<"\n";

}