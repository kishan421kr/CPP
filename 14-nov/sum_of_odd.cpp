#include<iostream>
using namespace std;
// W.A.P to fint out the sum of all the odd numbers in given array?
int main(){
    int arr[]={45, 52,68,2,45,3,2,4};
    int len=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<len;i++){
        if(arr[i]%2 != 0){
            sum=sum+arr[i];
            // cout<<arr[i]<<"\t";
        }
    }
    cout<<"sum of array is "<<sum;
}