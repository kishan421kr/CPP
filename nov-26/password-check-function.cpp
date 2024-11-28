#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char pwd[20];
    char repwd[20];

    cout<<"Enter your password \n";
    cin>>pwd;
    cout<<"\n Re-Enter pasword \n";
    cin>>repwd;
    cout<<"\n";
    
    // strcmp is case sensitive which means it compares the asci values but when we use stricmp it will compare but ignor the upper lower case.

    if(strcmp(pwd,repwd)==0){
        cout<<"correct \n";
        cout<<"revers of the password is "<<strrev(pwd);
    }
    else{
        cout<<"incorrect";
    }
}