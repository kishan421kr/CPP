#include<iostream>
using namespace std;



// int main(){

    
//     for(int i=1 ; i<=3 ; i++){
//         for(int s=3 ; s>i ;s--){
//             cout<<" ";
//         }
//         for(int j=i ; j>=1 ; j--){
//             cout<<"* ";
//         }
//         cout<<"\n";
//     }
// }
// output
//   *
//  * *
// * * *

int main(){

    int k=0;
    for(int i=1 ; i<=5 ; i++){
        for(int s=5 ; s>i ;s--){
            cout<<" ";
        }
        for(int j=i ; j>=1 ; j--){
            
            if(k==0){
                cout<<"1 ";
                k=1;
            }
            else{
                cout<<"0 ";
                k=0;
            }

        }
        cout<<"\n";
    }
}