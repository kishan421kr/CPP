#include<iostream>
using namespace std;

int main(){
    int start = 1;
    while(start <=20){
        if(start%5 == 0){
            cout<<start<<"\t";
        }
        start++;
    }
}