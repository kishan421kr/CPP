#include<iostream>
using namespace std;

// Constructor
// -> its also call special function.
// -> its called a special type of function constructor is use to allocate the memory of an object.constructor doesnot have any return type.bydefault the class having a consturctor which is belongs to public specifier.
// 1.default
// 2.parameterized
// 3.copy constructor
    // 1.shallow copy
    // 2.deep copy

class top{
    // implicite calling , consturctor overwriting.
    // syntex:-
    // publc:classname(){
        // statement/code;
    // }
    
    public:top (){
        cout<<"defaul constructor called\n";
    } 


    public:void show() //explicite
    {
        cout<<"its show function\n";
    }
    
};

int main(){
    top t;
    t.show();

}