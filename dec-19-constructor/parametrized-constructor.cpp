// in a parametrized constructor we use parameter in a function .
#include<iostream>
using namespace std;

class atm{
    public:atm(int a, int b){
        if(a==10 && b==20){
            cout<<"Welcome";
        }
        else{
            cout<<"invailid input";
        }
    }
};
int main(){
    int a=10,b=20;
    atm m(a,b);
    
}