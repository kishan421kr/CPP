#include<iostream>
using namespace std;

int balance(int a){
    return a/10;
}
string pwd(int pwd0){
    if(pwd0 == 300){

        return "completed";
    }
    else{
        return "wrong password";
    }
}


int main(){
    cout<<balance(300)<<"\n";
    cout<<pwd(300);
}