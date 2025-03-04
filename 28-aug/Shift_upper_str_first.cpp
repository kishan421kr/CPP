#include<iostream>
using namespace std;
#include<string>

string UppStr(string s){
    string o,k;
    int len = s.length();
    for(int i=0;i<len;i++){
        if(s[i] >= 'A' && s[i] <='Z'){
            o=o+s[i];
        }
        else{
            k=k+s[i];
        }
    }
    
    return o+k;
}

int main(){
    string s="MonoMeEvVnNtT";
    cout<<UppStr(s);
}

