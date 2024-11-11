#include<iostream>
using namespace std;

int main(){
    int arr[]={21,54,66,42,64};
    arr[5]=500;
    int len=sizeof(arr)/sizeof(arr[0]);
    int value=arr[0];
    for(int i=0;i<len;i++){
        if(arr[i] < value){
            value=arr[i];
        }
    }
    cout<<"smallest value of array is "<<value;
}