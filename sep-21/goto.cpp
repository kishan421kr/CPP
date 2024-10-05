// without using loop 
// using goto statement

#include <iostream>
using namespace std;

int main(){
    // int n, i =1;
    // cout << "Enter any number to genreate the tabel \n";
    // cin >> n;
    // table:
    // cout<< n*i<<"\t";
    // i++;
    // if(i<=10){
    //     goto table;
    // }

    // decending order table 

    // int n, i =10;
    // cout << "Enter any number to genreate the tabel \n";
    // cin >> n;
    // table:
    // cout<<n*i<<"\t";
    // i--;
    // if(i>=1){
    //     goto table;
    // }

    // series 10 to 1 without using loop

    int n=10;
    series:
    cout<<n<<"\t";
    n--;
    if(n>=1){
        goto series;
    }

}