#include<iostream>
using namespace std;

// void quick(int arr[],int len){
//     int pv=arr[0],low=1,high=len-1;
//     for(int i=0;i<len;i++){
//         for(int j=0;j<len;j++){
//             if(arr[low]>arr[pv]){
//                 break;
//             }
//             else{
//                 low++;
//             }
//         }
//         for(int j=0;j<len-1;j--){
//             if(arr[high]<=arr[pv]){
//                 break;
//             }
//             else{
//                 high--;
//             }
//         }
//         if(low<=high){
//             int temp=arr[low];
//             arr[low]=arr[high];
//             arr[high]=temp;
//         }
//         else{
//             int temp=arr[high];
//             arr[high]=arr[pv];
//             arr[pv]=temp;
            
//         }
//     }
//     for(int i=0;i<len;i++){
//         cout<<arr[i]<<"\t";
//     }
// }

// int main(){
//     int arr[]={15,2,2,4,3,1,2};
//     int len= sizeof(arr)/sizeof(arr[0]);
//     quick(arr,len);
// }



int part(int arr[] , int low , int high){
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    do{
        while(arr[i]< pivot){
            i++;
        }
        while(arr[j]> pivot){
            j--;
        }
        if(i<j){
            int tmp;
            tmp=arr[j];
            arr[j]=arr[i];
            arr[i]=tmp;
        }
        
    }while(i<j);
    int tmp=arr[low];
    arr[low]=arr[j];
    arr[j]=tmp;
    return j;
}
int quksrt(int arr[],int low,int high){
    int pv;
    if(low<high){
        pv=part(arr,low,high);
        quksrt(arr,0,pv-1);
        quksrt(arr,pv+1,high);

    }

}

int main(){
    int arr[]={2,3,6,1,5,2,7};
    int len=sizeof(arr)/sizeof(arr[0]);

    cout<<"before Sorting....\n";
    for(int i =0 ; i<len-1;i++){
        cout<<arr[i]<<'\t';
    }
    quksrt(arr,0,len-1);
    cout<<"\n after Sorting....\n";
    for(int i =0 ; i<len-1;i++){
        cout<<arr[i]<<'\t';
    }

}