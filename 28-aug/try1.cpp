#include <iostream>
using namespace std;

bool isArr(int arr[], int s) {
    bool isEven = true;
    bool isOdd = true;

    for (int i = 0; i < s; i += 2) {  // Corrected loop increment
        if (arr[i] % 2 != 0) {
            isEven = false;
        }
    }
    for (int i = 1; i < s; i += 2) {  // Corrected loop increment
        if (arr[i] % 2 == 0) {  // Should check if odd-indexed elements are NOT odd
            isOdd = false;
        }
    }

    return isEven && isOdd;  // Simplified return logic
}

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 8};  // Example array
    int len = sizeof(arr) / sizeof(arr[0]);

    if (isArr(arr, len)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
