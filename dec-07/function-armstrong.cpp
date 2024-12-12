#include <iostream>
using namespace std;
int main()
{
    int sum = 0, n, a;
    printf("Enter the number to check whethar its armstrong ");
    cin >> n;
    a = n;
    for (n - 1; n > 0; n = n / 10)
    {
        sum = sum + (n % 10) * (n % 10) * (n % 10);
    };
    if (sum == a)
        cout << a << " number is armstrong";
    else
        cout << a << " number is not armstrong";
    return 0;
}

