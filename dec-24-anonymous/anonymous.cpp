#include<iostream>
using namespace std;

class {
    public:void show(){
        cout<<"calling show\n";
    }
}e;
int main(){
    cout<<"main calling\n";
    e.show();
}
