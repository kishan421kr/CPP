#include<iostream>
using namespace std;
int main(){
    int arr[]={545,526,2,2215,14,2,1,2,};
    int len = sizeof(arr) / sizeof(arr[0]);

    for(int i=0 ; i<len ; i++)
    {
        for(int j=i+1 ; j<len ; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0 ; i<len ; i++){
        cout<<arr[i]<<"\t";
    }
}


// int main(){
//     int arr[]={545,526,2,2215,14,2,1,2,};
//     int len = sizeof(arr) / sizeof(arr[0]);

//     for(int i=0 ; i<len ; i++)
//     {
//         for(int j=0 ; j<len-1 ; j++)
//         {
//             if(arr[i]>arr[j])
//             {
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(int i=0 ; i<len ; i++){
//         cout<<arr[i]<<"\t";
//     }
// }