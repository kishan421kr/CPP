#include<iostream>
#include<string>
using namespace std;

string MidValue(string s){
    int len = s.length();
    int mid = len/2;
    if(len%2 == 1){
        return string(1,s[mid]);
    }
    else{
        
        return s.substr(mid-1,2);
    }
}

int main(){
    string s ="length";
    cout<<MidValue(s);
}