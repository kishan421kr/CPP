#include<iostream>
using namespace std;

bool isArr(int arr[],int s){
    bool isEven =true;
    bool isOdd =true;
    for(int i=0;i<s;i+=2){
        if(arr[i]%2 != 0){
            isEven=false;
        }
    }
    for(int i=1;i<s;i+=2){
        if(arr[i]%2 != 0){
            isOdd=false;
        }
    }
    if(isEven){
        if(isOdd){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}

int main(){
    // int a;
    // bool prime=true;
    // cout<<"Enter number to check \n ";
    // cin>> a;
    // int org=a;
    // cout<<"before "<<a<<"\n";
    // int revers=0;
    // int count=0;
    // for(int i =0 ;  i <a ; ){
    //     int digit = a%10;
    //     revers =revers*10+digit;
    //     a=a/10;
    //     count++;
    // }
    
    // for(int i=0;i<count;i++){
    //     revers=revers*10;
    // }
    // cout<<revers+org;

    int arr[]={2,3,4,5,6,7,8};
    int len = sizeof(arr)/sizeof(arr[0]);
    if(isArr(arr,len)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
}
