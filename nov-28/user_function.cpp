#include<iostream>
using namespace std;

int c=0;
void run(int a,int b){
    c=a+b;
    cout<<"hello";
}
void show(){
    cout<<c;
}

int main(){
    // two types of calling
    // explicit call function
    // implicit call function
    int temp=0;
    for(int i=0;i<=10;i++){
        run(2,i);
        cout<<temp++<<"\n";
    }
    show();
}