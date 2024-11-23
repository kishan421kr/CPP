// it is apply only when the row and colum have same size/number.

// transpose matrix
// matrix multiplication
// int arr[2][3]
// transpose matrix:
// rule : Matrix should be in square formate.
// when we convert any matrix into transpose matrix the column get converted into row & vice versa.

#include<iostream>
using namespace std;

int main(){
    int arr[2][3];

    cout<<"Enter 6 values";
    for(int r=0;r<2;r++){
        for(int c=0;c<3;c++){
            cin>>arr[r][c];
        }
    }
    cout<<"output"<<"\n";
    for(int r=0;r<2;r++){
        for(int c=0;c<3;c++){
            cout<<arr[r][c]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"after appling transpose"<<"\n";
    for(int c=0;c<3;c++){
        for(int r=0;r<2;r++){
            cout<<arr[r][c]<<"\t";
        }
        cout<<"\n";
    }

}

