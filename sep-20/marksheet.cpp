#include<iostream>
using namespace std;
// wrp to display the how many individual currency we need for make a current amount
int main(){
    float physics , chemistry, maths , totalmarks ,persentage;

    cout << "Enter your physics , chemitry, and maths marks, follow the sequence" << "\n";
    cin >> physics >> chemistry >> maths ;

    totalmarks = physics + chemistry + maths;
    persentage = totalmarks/3;
    
    if(persentage >= 60 && persentage <= 100){
        cout<< persentage <<" Persentage \n";
        cout<< "1st Division";
    }
    else if(persentage >= 50 && persentage <60){
        cout<< persentage <<" Persentage \n";
        cout<< "2st Division";
    }
    else if(persentage >= 35 && persentage <50){
        cout<< persentage <<" Persentage \n";
        cout <<"3rd Division";
    }
    else{
        cout<<"Fail";
    }
}