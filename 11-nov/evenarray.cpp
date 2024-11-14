// wap to display even number
#include<iostream>
using namespace std;

int main(){
    int arr[]={25,2,6,46,524,632,9};
    int len=sizeof(arr)/sizeof(arr[0]);

    for(int i=0 ;i <len ; i++){
        if(arr[i]%2 == 0){
            cout<<arr[i]<<"\t";
        }
    }
}