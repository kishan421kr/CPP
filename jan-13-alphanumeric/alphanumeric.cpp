#include<iostream>
using namespace std;
#include<string.h>

int main(){
    string a;
    // string b;
    char b[20];
    cout<<"Enter the alphanumeric string \n";

    cin >> a;

    int length = a.length();
    // cout<<length;
    for(int i=0 ; i <  length ; i++){
        cout<<a[i]<<"\t";
        // if(!(a[i] == 1 || a[i] == 2 || a[i] == 3 ||  a[i] == 4 || a[i] == 5 || a[i] == 6 || a[i] == 7 || a[i] == 8 || a[i] == 9 || a[i] == 0)){
        //     int count=1;
        //     for(int j = 0 ; j < count ; j++){
        //         cout<<count<<a[i]<<"\t";
        //         b[j] = a[i];
                
        //     }
        //     count++;
        //     cout<<b<<"\n";
        // }
        
    }

    cout<<b<<"\n";


}