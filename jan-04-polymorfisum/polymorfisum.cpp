#include<iostream>
using namespace std;

// class top {
//     public : void show(){
//         cout<<"\n top class ";

//     }
// };
// class btm {
//     public: void show(){
//         cout<<"\n btm class";
//     }
// };
// int main(){
//     btm obj;
//     obj.show();
// }


                            // many     forms
                            //   |       |
                            //  polymorphism
                            //   |        |
                            //  |          |
                            // |            |
                    //(early binding)      (late binding)
                // compile time              run time
        // |->function  overloading          |->function overriding
        // |->operator overloading           |->virtual function & pure virtual function
        // |->normal object                  |->super class
        // |->multiple function              |->abstract class
        //                                   |->pointer object & normal object


class Rbi {
    public :virtual void loan(){
        cout<<"Rbi loan \n";
    }
};
class Sbi : public Rbi {
    public :void loan(){
        cout<<"Sbi loan \n";
    }
};
class Axis : public Rbi {
    public : void loan(){
        cout<<"Axis loan \n";
    }
};
class indian : public Rbi {
    public :void loan(){
        cout<<"indian loan \n";
    }
};
int main(){
    Rbi *p;//pointer object
    Axis a;//normal object
    Sbi s;
    p = &a;//refering a address 
    p =&s;
    p->loan();//this pointer
}
