#include <iostream>
using namespace std;

int main(){
    int num , bill ,s ;

    cout << "Enter the unit" << "\n";
    cin >> num;

    if(num >= 1 && num <= 100){
    bill= num*3;
    s= bill*20/100;
    cout <<"Your bill " << bill+s << "\n";
    }
    else if(num >= 101 && num <= 200){
        bill= num*5;
        s= bill*20/100;
        cout <<"Your bill " << bill+s << "\n";
    }
    else if(num >= 201 && num <= 500){
        bill= num*7;
        s= bill*20/100;
        cout <<"Your bill " << bill+s << "\n";
    }
    else if(num < 501){
        bill= num*10;
        s= bill*20/100;
        cout <<"Your bill " << bill+s << "\n";
    }
    else{
        // cout <<"Invalid Reading";
        cout << "Service Charge 50 ";
    }
}