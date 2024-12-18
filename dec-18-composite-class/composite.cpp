#include<iostream>
using namespace std;

// composite class having an object of previous class, and we call the function of previous class inside the member function of composite class.
class virus{

    public: void effect(){
        cout<<"u hacked\n";
    }
};
class reward{
    virus v;
    public: void price(){
        cout<<"u got 200\n";
        v.effect();
    }
};

int main(){
    reward r;
    r.price();
}