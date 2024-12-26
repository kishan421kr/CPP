#include<iostream>
using namespace std;

class Axis{
    int amount=10000;
    friend class Rbi;
};
class Sbi {
    int amount=25500;
    friend class Rbi;
};
class Rbi{
     public : void balanceaxis(Axis a){
            cout<<"Balance of axis ="<<a.amount;
            }
     public :   void balancesbi(Sbi s){
                cout<<"Balance of sbi= " << s.amount;
            }
    // public:void Rbicall(int num){
    //     if(num==1){
            
    //     }
        
    //     else if(num==2){
            
    //     }
    //     else{
    //         cout<<"invailid input\n";
    //     }
    //     void balanceaxis(Axis a){
    //         cout<<"Balance of axis ="<<a.amount;
    //         }
    //     void balancesbi(Sbi s){
    //             cout<<"Balance of sbi= " << s.amount;
    //         }
        
    // }
};

int main(){
    Axis a;
    Sbi s;
    Rbi r;
    cout<<"Enter name your bank 1 for axis and 2 for sbi\n";
    int num;
    cin>>num;

    // r.Rbicall(num);
    r.balanceaxis(a);
    r.balancesbi(s);



}