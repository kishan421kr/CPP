#include<iostream>
using namespace std;

int main(){
    int r1,c1,r2,c2;
    cout<<"Enter the row1 size \n";
    cin>>r1;
    cout<<"Enter the column1 size \n";
    cin>>c1;
    cout<<"Enter the row2 size \n";
    cin>>r2;
    cout<<"Enter the column2 size \n";
    cin>>c2;

    if(c1==r2){
        int arr[r1][c1];
        int arr1[r2][c2];

        cout<<"Enter "<<r1*c1<<" values in array1 \n";
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                cin>>arr[i][j];
            }
        }

        cout<<"Enter "<<r2*c2<<" values in array2 \n";
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                cin>>arr1[i][j];
            }
        }

        cout<<"output Array1 \n";
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                cout<<arr[i][j]<<"\t";
            }
            cout<<"\n";
        }

        cout<<"output Array2 \n";
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                cout<<arr1[i][j]<<"\t";
            }
            cout<<"\n";
        }

        
    }
    else{
        cout<<"not allow beacuse of the size of column1 and row2 are not same";
    }

}