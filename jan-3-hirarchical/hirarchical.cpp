#include<iostream>
using namespace std;
// class college
// {
//     protected:void show(){
// cout<<"\n college\n";
//     }
// };
// class student:public college
// {
// public:void msg(){
// cout<<"\nstudent\n";
// show();
// }
// };

// int main(){
//     student s;
//     s.msg();
// }

class Rbi : public sbi ,public axis

{
    public:void showrbi(){
        cout<<"Rbi show \n";
    }
};
class sbi {
    public : void showsbi(){
        cout<<"sbi show \n";

    }
};

class axis {
    public: void showaxis (){
        cout<<"axis show\n";
    }
};
class union {
    public: void showunion (){
        cout<<"union show\n";
    }
};
int main(){

}