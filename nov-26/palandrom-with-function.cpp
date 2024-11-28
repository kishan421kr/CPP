#include<iostream>
#include<string.h>
using namespace std;

int main(){

    char name[20];

    cout<<"Enter your name for checking \n";
    cin>>name;
    // cout<<strrev(name);

    char revname[20];
    
    strcpy(revname,name);

    strrev(name);

    cout<<name<<" == "<<revname;
    if(stricmp(revname,name)==0){
        cout<<"\nit is palandrom\n ";
    }
    else{
        cout<<"\nit is not a palandrom\n";
    }
}