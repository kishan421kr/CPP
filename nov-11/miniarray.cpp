#include<iostream>
using namespace std;

int main(){
    int arr[]={21,54,66,11,42,64};
    int arr1[5];
    arr[5]=500;
    int len=sizeof(arr)/sizeof(arr[0]);
    int chotu=INT_MAX;
    int value=arr[0];
    cout<<"Enter 5 values in array "<<"\n";
    for(int i=0;i<len;i++){
        if(arr[i] < value){
            // chotu=arr[i];
            value=arr[i];
        }
    }
    cout<<"smallest value of array is "<<value;
}