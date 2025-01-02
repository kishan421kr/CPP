#include<iostream>
using namespace std;

// class sbi{
//     public:sbi(){
//         cout<<"Sbi mermory created \n";
//     }
//     ~sbi(){
//         cout<<"Sbi mermory release\n";
//     }
// };
// class Axis{
//     public:Axis(){
//         cout<<"Axis mermory created \n";
//     }
//     ~Axis(){
//         cout<<"Axis mermory release\n";
//     }
// };
// class Union{
//     public:Union(){
//         cout<<"Union mermory created \n";
//     }
//     ~Union(){
//         cout<<"Union mermory release\n";
//     }
// };
// class Indian{
//     public:Indian(){
//         cout<<"Indian mermory created \n";
//     }
//     ~Indian(){
//         cout<<"Indian mermory release\n";
//     }
// };
// class Coustomer:public sbi,public Axis,public Union,public Indian
// {
//     public:Coustomer(){
//         cout<<"Coustomer mermory created \n";
//     }
//     ~Coustomer(){
//         cout<<"Coustomer mermory release\n";
//     }
// };
// int main(){
//     Coustomer ct;
// }

// privatly class access

class sbi{
    public:sbi(){
        cout<<"Sbi mermory created \n";
    }
    ~sbi(){
        cout<<"Sbi mermory release\n";
    }
};
class Axis{
    public:Axis(){
        cout<<"Axis mermory created \n";
    }
    public:void show(){
        cout<<"welcome in axis";
    }
    ~Axis(){
        cout<<"Axis mermory release\n";
    }
};
class Union{
    public:Union(){
        cout<<"Union mermory created \n";
    }
    ~Union(){
        cout<<"Union mermory release\n";
    }
};
class Indian{
    public:Indian(){
        cout<<"Indian mermory created \n";
    }
    ~Indian(){
        cout<<"Indian mermory release\n";
    }
};
class Coustomer:private sbi,private Axis,private Union,private Indian
{
    public:Coustomer(){
        cout<<"Coustomer mermory created \n";
    }
    public:void dispaly(){
        cout<<"Sudhansh ";
        show();
        cout<<"\n";
    }
    ~Coustomer(){
        cout<<"Coustomer mermory release\n";
    }
};
int main(){
    Coustomer ct;
    ct.dispaly();
}