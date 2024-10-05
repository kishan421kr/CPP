#include<iostream>
using namespace std;

int main(){
    int power,bass,total=1;
    cout<<"Enter the bass and power";
    cin>>bass>>power;

    // first type

    // for(int i=0; i<power;i++){
    //     total=total*bass;
    //     // cout<<"in loop";
    // }
    // cout<<total;

    // second type

    for(power;power>0;power--){
        total=total*bass;
    }
    cout<<total;
}