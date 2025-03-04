#include<iostream>
using namespace std;

#include<vector>

int main(){
    vector<pair<int,string>>v;
    int roll,n;
    string name;

    cout<<"Enter how many records \n";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Enter roll number \n";
        cin>>roll;
        cout<<"Enter name \n";
        cin>>name;
        // v.push_back(make_pair(roll,name));
        v.push_back({roll,name});
        
    }
    cout<<"Result are \n";
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<":"<<v[i].second<<"\n";
    }
    
}