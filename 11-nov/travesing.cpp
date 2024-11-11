#include<iostream>
using namespace std;
int main (){
    int arr[]={19,8,5,4,6};
    int len= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        cout<<arr[i]<<"\n";
    }
    cout<<"back trav"<<"\n";
    for(int i=len-1;i>=0;i--){
        cout<<arr[i]<<"\n";
    }
}