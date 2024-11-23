#include<iostream>
using namespace std;
// write a program to count the length of array
int main(){
    int arr[]={20,3,5,46,8,6,7,452};
    int len=sizeof(arr)/sizeof(arr[0]);

    cout<<"length of array = "<<len<<"\n";

    for(int i=0 ; i<len ;i++){
        cout<<arr[i]<<"\t";
    }
}