#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            cout<<"*"<<"\t";
            if(j==2)
            cout<<"*   *";
        }
        cout<<"\n";
    }
}