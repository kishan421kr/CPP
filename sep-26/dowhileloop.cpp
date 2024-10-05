// it is called exit loop it will execute the statemnet till the condition is ture otherwise is will come out from the loop.
// note: the do while statement will execute the statement atlest one time whether the condition is true or false.

#include <iostream>
using namespace std;

int main(){
    int d=1;
    do{
        cout<<d<<"\t";
        d++;
        
    }while(d<=10);

    // wrp to dispaly the even number btw 1 to 10

    // int d=1;
    // do{
    //     if(d%2 == 0){
    //         cout<<d<<"\t";
    //     }
        
    //     d++;
    //  } while(d<=10);

    // wrp to diplay odd

    // int d=1;

    // do{
    //     if(d%2 != 0)
    //     {
    //         cout<< d <<"\t";
    //     }
    //     d++;
    // }while(d<=10);

    // wrp to reverse number

    // int d=10;
    // do{
    //     cout <<d<<"\t";
    //     --d;
    // }while(d>=1);

    // squre

    // int d=1;
    // do{
    //     cout<<d*d<<"\t";
    //     d++;
    // }while(d<=10);



}