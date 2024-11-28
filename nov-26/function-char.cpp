#include<iostream>
using namespace std;
#include<string.h>

int main(){
    char name[20];
    cout<<"Befor entering data (means its empty) length is "<<strlen(name);
    cout<<"\n Enter your name \n";
    cin>>name;
    cout<<"\n Name is "<<name;
    cout<<"\n Afte entering data length is "<<strlen(name);

    char surname[20];
    cout<<"\n Enter the surname \n";
    cin>>surname;

    cout<<"Upper case = "<<strupr(name);
    cout<<"\n Lower Case = "<<strlwr(surname);

    cout<<"\n conctinate the both string name and surname "<<strcat(name,surname); 
    cout<<"\n after name is "<<name;
    cout<<"\n after surname is "<<surname;


    cout<<"\n  copying the string surname in name "<<strcpy(name, surname);
    cout<<"\n after name is "<<name;
    cout<<"\n after surname is "<<surname;


}
