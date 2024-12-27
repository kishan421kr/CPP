// operator overloading : it is used the redefine
// the nature of the operator for non primitive data
// types:
// 1.tinary op ovlo
// 2.binary op ovlo

#include<iostream>
using namespace std;

class top{
    int a=10;
    public: operator ++()
    {
        a++;
        cout<<a<<"\n";
    }
    public : operator --(){
        a--;
        cout<<a;
    }
};
int main(){
    top obj;
    ++obj;
    --obj;
    int a=90;
    cout<<"\n"<<++a;
}