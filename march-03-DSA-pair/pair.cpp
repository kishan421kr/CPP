#include<iostream>
using namespace std;

#include<vector>

int main(){
    pair<int,int>p1{101,21};
    // pair<int,string>p1{101,"amit"};
    // p1 = make_pair(102,"22");//another way to insert data
    cout<<"rno = "<<p1.first<<"\t";
    cout<<"age = "<<p1.second<<"\t";
}