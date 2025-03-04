#include<iostream>
using namespace std;

#include<tuple>
#include<vector>
int main(){
    vector<tuple<int ,string,int >>student; //{101,"arun",86};
    // student= make_tuple(101,"rajput",89);
    int roll,n,marks;
    string name;
    cout<<"how many records you wnats \n";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Enter roll number \n";
        cin>>roll;
        cout<<"Enter name \n";
        cin>>name;
        cout<<"enter marks \n ";
        cin>>marks;
        student.push_back({roll,name,marks});
    }

    cout<<"list of records \n";

    for(int i=0;i<student.size();i++){
        cout<<"rollno = " << get<0>(student[i])<<":";
        cout<<"name = " << get<1>(student[i])<<":";
        cout<<"marks = " << get<2>(student[i])<<"\n";
    }

    
}