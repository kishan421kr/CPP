// in a multiple inheritance we inherit the multiple classees at a time.

#include<iostream>
using namespace std;

class sbi{
    public:void sbiacc(){
        cout<<"Sbi account \n";

    }
};
class Axis{
    public:void Axisacc(){
        cout<<"Axis account \n";

    }
};
class Union{
    public:void Unionacc(){
        cout<<"Union account \n";

    }
};
class Indian{
    public:void Indianacc(){
        cout<<"Indian account \n";

    }
};
class Coustomer:public sbi,public Axis,public Union,public Indian
{
    public:void msg(){
        cout<<"Welcome \n";
    }
};
int main(){
    Coustomer ct;
    ct.msg();
    ct.Axisacc();
    ct.sbiacc();
}
// diamond problem: when signarture(name of the function) is same in multiple inhertance this problem is happen.