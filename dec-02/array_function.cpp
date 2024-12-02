#include<iostream>
using namespace std;

void fun(int just[],int len){
        // make changes on original array because it have the inbuilt 
        for(int i=0;i<len;i++){
            just[i]=just[i]+10;
        }

        for(int i=0;i<len;i++){
            cout<<just[i]<<"\t";
        }
        // for(int i=0;i<len;i++){
        //     if(just[i]>just[i+1]){
        //         cout<<just[i]<<"\t";
        //     }
            
        // }
    
}
// pointer is enbilt in array without use of (&)=refrence variable we can make changes in a original.
int main(){
    int arr[]={32,15,2,6,29,45,45,51};
    int s=sizeof(arr)/sizeof(arr[0]);
    fun(arr,s);
    cout<<"\n after make chnages in fun \n";
    for(int i=0;i<s;i++){
            cout<<arr[i]<<"\t";
    }
    // by default arr on 0th position
    // cout<<arr;

}