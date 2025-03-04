#include<iostream>
using namespace std;


// here we have to create function again and again according to the data type
// void sum(int a , int b){
//     cout<<"result = "<<a+b;
// }

// void sum(double a, double b){
//     cout<<"result = "<<a+b;
// }
// int main(){
//     sum(2,3);
//     sum(2.5,3.5);
// }
// template is a generalize form of any program. that may be function or class . 
// there are two types of template 
// 1. function template 
// 2. class template

// template<typename t1>

// t1 sum (t1 a, t1 b){ //it take same type of data beacuse we takes only one template
//     return a+b;
// }
// int main(){
//     cout<<sum('a','b');
// }


template<typename t1,typename t2>

t1 sum (t1 a, t2 b){ //it take same type of data beacuse we takes only one template
    return a+b;
}
int main(){
    cout<<sum('A',5)<<"\t";
    cout<<sum('a',20)<<"\t";
    cout<<sum('a',2)<<"\t";
    cout<<sum('a',10)<<"\n";
    cout<<sum('a',-8)<<"\t";cout<<sum('a',14)<<"\t";cout<<sum('a',20)<<"\t";
    cout<<'\n' << sum ('a',12)<<"\t";
    cout<< sum('a',14)<<"\t";
    cout<<sum('a',4)<<"\t";
    cout<<sum('a',-8);
    // cout<<sum(25.4,9);
}


