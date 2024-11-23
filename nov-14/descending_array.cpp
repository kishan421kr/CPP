// wap to dispaly the array in desending order
#include<iostream>
using namespace std;

int main(){
    int arr[]={64,3,81,9,25,8};
    int len = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(arr[i]<arr[j]){
                // cout<<"enter in if";
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                
            }
        }
        // cout<<arr[i];
    }
    for(int i=0;i<len;i++){
        cout<<arr[i]<<"\t";
    }

}
