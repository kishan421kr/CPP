#include<iostream>
using namespace std;

int main(){
    int *p1;//wild pointer
    int *p=NULL;//null pointer
    cout<<sizeof(p)<<"\n";
    int r =300;
    p=&r;
    cout<<p;

}
// function overloading
