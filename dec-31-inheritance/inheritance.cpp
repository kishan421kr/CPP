//  1           2           3           4               5                 
// single   multiple    hybride     multiple vel    hirrarchical        
//  A        A   B       A   C           A              B--->
//  |        |   |       |   |           |                  |
//  B        --C--       B   D           B              C-->A
//                       ^   |           |                  ^
//                       |   |           C                  |
//                       |   E                              |
//                       |   ^                          B----
//                       F---| 

#include<iostream>
using namespace std;
// single
class Rbi{
    int r;
    public:Rbi(){
        cout<<" Rbi memory created \n";
    }

    public : void show(){
        cout<<"Rbi show...\n";
    }

    ~Rbi(){
        cout<<"Rbi memory relesed \n";
    }
};
class Sbi:public Rbi{
    int s;
    public:Sbi(){
        cout<<"Sbi memory created \n";
    }
    public : void show(){
        cout<<"Sbi show...\n";
    }
    ~Sbi(){
        cout<<"Sbi memory relesed \n";
    }
};

int  main(){
    // if same name function having in inheritance every time it calls child class
    //  
    Sbi obj;
    // obj.show();//it calls the sbi show because , we call it throught the sbi object.
    Rbi obj1;
    obj1.show();
    cout<<"size is "<<sizeof(Sbi)<<"\n";
}


// multilevel

// class Rbi{
//     int r;

//     public : void Display(){
//         cout<<"Rbi show...\n";
//     }

// };
// class Sbi:public Rbi{
//     int s;
    
//     public : void account(){
//         cout<<"Sbi show...\n";
//     }
    
// };
// class Axis:public Sbi{
//     int h;
//     public : void show(){
//         cout<<"Sbi show...\n";
//     }
// };

// int  main(){
//     // if same name function having in inheritance every time it calls child class
//     //  
//     Sbi obj;
//     // obj.show();//it calls the sbi show because , we call it throught the sbi object.
//     Rbi obj1;
    
//     Axis obj2;

//     obj2.Display();
//     cout<<"size is "<<sizeof(Rbi)<<"\n";
// }