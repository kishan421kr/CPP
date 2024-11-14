// wap to display the prime number in a given array
// input arr[]={7,4,6,11,5}
// output 7,11,5
#include<iostream>
using namespace std;

int main(){
    int arr[] = {7,4,6,11,5};
    int len = sizeof(arr) / sizeof(arr[0]);

    for(int i=0 ; i<len ; i++){
        if(arr[i] % 2 != 0){
            cout<<arr[i] <<"\t";
        }
    }
}