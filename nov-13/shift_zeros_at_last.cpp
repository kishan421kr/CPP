#include<iostream>
using namespace std;
int main(){

int arr[]={2,0,7,0,0,0,0,6};
int len =sizeof(arr)/sizeof(arr[0]);

for(int i=0 ; i<len ; i++){

    if(arr[i] == 0)
    {
        for(int j=i+1;j<len;j++)
        {
            if(arr[j]!=0)
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                break;
            }
         }        
    }
}
for(int i=0;i<len;i++)
{
    cout<<arr[i]<<"\t";
}
}





// wap to display the prime number in a given array
// input arr[]={7,4,6,11,5}
// output 7,11,5

// wap to replace 1 with 0 in a given array
// input arr[]={2,1,3,1,5,1}
// output 2,0,3,0,5,0

// wap to shift all zero at last by holding related position
// input arr[]={2,0,7,0,3,0,6}
// output 2,7,3,6,0,0,0

