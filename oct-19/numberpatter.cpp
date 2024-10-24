#include<iostream>
using namespace std;

// int main(){
//     for(int i=1 ; i<=3 ;i++){
//         for(int j=1 ;j<=i ;j++){
//             cout<<j;
//         }
//         cout<<"\n";
//     }
// }

// int main(){
//     for(int i=1 ; i<=3 ;i++){
//         for(int j=1 ;j<=i ;j++){
//             cout<<j*j;
//         }
//         cout<<"\n";
//     }
// }

// consecutive series and floyd triangle

// int main(){
//     int count=0;
//     for(int i=1 ; i<=3 ;i++){
//         for(int j=1 ;j<=i ;j++){
//             count++;
//             cout<<count<<"\t";
//         }
//         cout<<"\n";
//     }
// }

int main(){
    int count=0;
    for(int i=1 ; i<=3 ;i++){
        for(int j=1 ;j<=i ;j++){
            count++;
            cout<<count*count<<"\t";
        }
        cout<<"\n";
    }
}

