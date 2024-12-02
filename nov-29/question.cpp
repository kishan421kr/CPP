#include<iostream>
using namespace std;

void cube(int a){
    cout<<"Cube is "<<a*a*a<<"\n";
}

int main(){
    int arg;
    cout<<"Enter number for cube \n";
    cin>>arg;
    cube(arg);
}