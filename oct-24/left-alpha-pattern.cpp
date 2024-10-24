#include<iostream>
using namespace std;

// question 5
// int main(){
//     for(int i=1 ; i<=3 ; i++){
//         for(int s=3 ; s>i ;s--){
//             cout<<" "<<"\t";
//         }
//         for(int j=1 ; j<=i ; j++){
//             cout<<char(64+i)<<"\t";
//         }
//         cout<<"\n";
//     }
// }
// output
//   A
//  BB
// CCC

// ouestion 4

int main(){
    for(int i=1 ; i<=3 ; i++){
        for(int s=3 ; s>i ;s--){
            cout<<" "<<"\t";
        }
        for(int j=i ; j>=1 ; j--){
            cout<<char(64+j)<<"\t";
        }
        cout<<"\n";
    }
}
// output
//   A
//  BA
// CBA