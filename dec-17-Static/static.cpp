#include<iostream>
using namespace std;
// static variable are shareabl not copyable
// static data member and static member function is a attribut of a class. while non-static data member and non-static member function is attribut of an object. 
// note: whenever we call static member function we need not create an object. 
static int a=10;
static int b=80;
class top{
    
    static int k;
    static int j;
    public:static void sum(){
        cout<<"hello";
        cout<<a+b;
        cout<<k+j;
    }
};
int top::k=10;
int top::j=20;

int main(){
    top d;
    d.sum();
}