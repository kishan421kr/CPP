#include<iostream>
using namespace std;

#include<tuple>

int main(){
    tuple<int ,string,int >student{101,"arun",86};
    cout<<"rollno = " << get<0>(student)<<"\n";
    cout<<"name = " << get<1>(student)<<"\n";
    cout<<"marks = " << get<2>(student)<<"\n";
}