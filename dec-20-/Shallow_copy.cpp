#include<iostream>
using namespace std;

class top{
    // int rno;
    int r;
    public:top (int rno){
        // this pointer is use here 
        // this pointer use when the duplicate variable is present in class
        // this change variable data of the class because it points the variable of class variable.-+/]
        // it is use when the class variable name and function variable name are same.
        // this->rno=rno;
        r=rno;
    }
    void show(){
        cout<<r<<" in your account \n";
    }
};

int main(){
    top t(100);
    t.show();
    // shallow copy -> it copies the object . for copying the data one object data to another object.
    top t2(t);
    t2.show();

}
