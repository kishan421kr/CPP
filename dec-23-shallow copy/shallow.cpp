#include<iostream>
#include<string.h>
using namespace std;
class student{
    char *c;
    public:student(char *s){
        c=new char[20];
        strcpy(c,s);
    }
    void show(){
        cout<<"\n name="<<c<<"\n";
    }
    void surname(char *s){
        strcat(c,s);
    }
};
int main(){
    student s1("sumit");
    s1.show();
    student s2(s1);//calling shallow copy
    // student s2=s1;//implicite assignment copy constructure
    s2.show();
    s2.surname("verma");
    s1.show();
    s2.show();
}