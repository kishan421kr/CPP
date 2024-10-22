#include<iostream>
using namespace std;
// int main(){
//     char alpha='A';
//     for(int i=1;i<=3;i++){
//         for(int j=1;j<=i;j++){
//             cout<<alpha<<"\t";
//             alpha++;
//         }

//         cout<<"\n";
//     }
// }

int main(){
    
    for(int i=1;i<=3;i++){
        char alpha='A';
        for(int j=1;j<=i;j++){
            cout<<alpha<<"\t";
            alpha++;
        }
        cout<<"\n";
    }
}