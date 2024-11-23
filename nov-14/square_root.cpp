#include<iostream>
using namespace std;

int main(){
    int arr[]={24,64,48,81,36,49};
    int len =sizeof(arr)/sizeof(arr[0]);

    for(int i=0 ;i <len; i++){
        for(int j=1;j*j<arr[i];j++){
            if(j*j==arr[i]){
                cout<<arr[i]<<"\t";
                break;
            }
            // cout<<j<<"\t";
        }
    }
}
