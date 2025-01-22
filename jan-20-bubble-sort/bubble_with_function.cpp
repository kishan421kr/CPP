#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

void bubble(int arr[] , int s){
    int count=0;
    int loopcount=0;
    for(int i=0 ; i < s ; i++){
        for(int j = i;j <s-1;j++){
            loopcount++;
            if(arr[i]>arr[j+1]){
                int temp;
                temp=arr[i];
                arr[i]=arr[j+1];
                arr[j+1]=temp;
                
                count++;
            }
            
        }
        if(count==0){
            break;}
        
        // for(int j=0;j<s-i-1;j++){
        //     loopcount++;
        //     if(arr[j]>arr[j+1]){
        //         int temp;
        //         temp=arr[j];
        //         arr[j]=arr[j+1];
        //         arr[j+1]=temp;
        //         count++;
        //     }
        // }
        // if(count==0){
        //     break;
        // }
        
    }
    cout<<loopcount<<"\n";
    for(int i = 0 ; i<s ; i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    // int arr[]={999,99,9,8,7,6,5,4,3,2,1};
    // int arr[]={1,2,3,4,5,6,7,8,9};
    int arr[]={0,5,6,1,2,7,8,9};
    int len= sizeof(arr)/sizeof(arr[0]);
    bubble(arr, len);
}