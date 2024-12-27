#include<iostream>
using namespace std;

class diff{
    int mile;
    public:diff(int m){
        mile=m;
    }
    operator -(diff &obj){
        mile=obj.mile-mile;
        cout<<"total k.m."<<mile;
    }
};

int main(){
    diff start(12000);
    diff end(12180);
    start-(end);

    
}