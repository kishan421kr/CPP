#include<iostream>
using namespace std;

// class top{
//     int a=10;
//     int b=90;
//     public:int sum(){
//         return a+b;
//     }
// };

class top{
    int a=10;
    int b=90;
    public:int sum();
};

int top::sum(){
    return a+b;
}


int main(){
    top pk;
    cout<<pk.sum();
}