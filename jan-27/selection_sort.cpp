#include<iostream>
using namespace std;
// structure based , timecomplexcity is log(n)


void selection (int arr[] , int s){
    int chotu;
    for(int i=0 ; i <s -1;i++){
        chotu = i;
        for(int j = i+1 ; j <s; j++){
            if(arr[chotu]>arr[j])
            {
                chotu=j;
            }
        }
        if(chotu != i){
            int temp=arr[i];
            
            arr[i]=arr[chotu];
            arr[chotu]=temp;
        }
    }
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
}

int main(){
    int arr[]={2,5,9,1,3,4,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    selection(arr,len);
}