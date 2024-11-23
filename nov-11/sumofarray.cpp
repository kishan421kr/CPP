#include<iostream>
using namespace std;

int main(){
    int arr[]={21,54,66,42,64};
    arr[5]=500;
    int len=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    // for(int i=len-1;i>=0;i--){
    //     cout<<arr[i]<<"\n";
    // } 
    // cout<<"forward trav"<<"\n";
    for(int i=0;i<len;i++){
        // sum=arr[i]+sum;
    }
    cout<<"total sum = "<<sum;
}
//wap to diplay the sum of the values of the is an array.

