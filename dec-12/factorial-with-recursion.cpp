#include<iostream>
using namespace std;

int fact(int a){
    
    if(a==0){
        
        return 1;
    }
    // int i=;
    // --a;
    
    return (a*fact(a-1));
}

int main(){
    int a; 
    cout<<"Enter any no for factorial \n";
    cin>>a;
    cout<<"Factorial = "<<fact(a);
}