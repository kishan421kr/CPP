#include <iostream>
using namespace std;
int main()
{
    for(int r =  65; r<=67;r++)
    {
        for(int s = 67;s>65;s--)
        {
            cout << " ";
        }
        for(int c = r;c<=r;c++)
        {
            cout << char(c);
        }
        cout << "\n";
    }
}