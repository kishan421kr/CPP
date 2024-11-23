#include<iostream>
using namespace std;

int main(){
    int arr[]={25,2,6,46,524,632,9};
    int len=sizeof(arr)/sizeof(arr[0]);
    int chotu=INT_MIN;
    int a=0,b=0;
    a=b=chotu;
    for(int i=0 ;i <len ; i++){
        
        int temp=0;
        if(arr[i] >a){
            b=a;
            a=arr[i];
        }
        else if(arr[i] > b && arr[i] != b)
        {
            b=arr[i];
        }
        
    }
    cout<<b;
}