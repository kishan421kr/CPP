#include<iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter size of row and column"<<'\n';
    cin>>r>>c;
    int arr[r][c];
    cout<<"Enter "<<r*c<<" data \n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"inputed data \n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }

    cout<<"inputed data \n";

    for(int i=0;i<r;i++){
        for(int j=i+1;j<c;j++){
            int temp;
            temp =arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
        cout<<"\n";
    }
    cout<<"transpose data \n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }
}