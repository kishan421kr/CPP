#include<iostream>
using namespace std;
int main(){
    int a=0;
    
    for(int i=1 ; i<=3 ; i++){
        for(int s=1 ; s<i ;s++){
            cout<<" "<<"\t";
        }
        for(int j=3 ; j>=i ; j--){
            cout<<j<<"\t";
        }
        cout<<"\n";
    }
}
// 