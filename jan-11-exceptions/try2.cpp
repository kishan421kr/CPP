#include<iostream>
using namespace std;
 int main(){
    int b;
    cout<<"Enter options:";
    cin >>b;

    try{
        if(b == 1){
            throw 'a';//Throwing a chasr
        }
        else if(b == 2){
            throw 23.67; // throwing an double
        }
        else if (b ==3){
            throw 3 ; // Throwing an int 
        }
        cout<< "Welcome!"<<"\n";
    }
    catch(double d){
        cout<<"Caught a Double Exception:"<<d <<"\n";
    }
    catch(char c){
        cout<<"Caught a char exception"<<c<<"\n";
    }
    catch(int  n){
        cout<<"Caught an int exception:"<<n<<"\n";
    }
    cout<<"Finished"<<"\n";
    return 0;
 }