#include <iostream>
using namespace std;

int main(){
    int number,count=0;

    cout<<"Enter the number";
    cin>>number;

    while(number>=0){
        
        number=number/10;
        count++;
    }

    cout<<count;
}