// wap to display the prime number in a given array
// input arr[]={7,4,6,11,5}
// output 7,11,5
#include<iostream>
using namespace std;

int main(){
    int arr[] = {4, 5, 2, 6, 7, 8, 9, 10};
    int len = sizeof(arr) / sizeof(arr[0]);
    int count=0;
    for(int i=0 ; i<len ; i++){
        int k =arr[i]/2;
        for(int j =2 ; j <= k; j++)
        {   
            if(arr[i] % j == 0)
            {
                // cout<<arr[i] <<"\t";
                count=1;
                break;
            }
        }
        if(count == 0){
            cout<<arr[i];
        }
    }
}



// Test Case 1: Simple Case
// Input: [2, 3, 5, 7, 11]
// Expected Output: [True, True, True, True, True]
// Explanation: All numbers in this array are prime.

// Test Case 2: Mixed Primes and Non-Primes
// Input: [4, 5, 6, 7, 8, 9, 10]
// Expected Output: [False, True, False, True, False, False, False]
// Explanation: Only 5 and 7 are prime numbers; the others are not.

// Test Case 3: Array with Non-Prime Only
// Input: [1, 4, 6, 8, 9, 10, 12]
// Expected Output: [False, False, False, False, False, False, False]
// Explanation: None of these numbers are prime.

// Test Case 4: Array with Negative Numbers and Zero
// Input: [-3, -2, 0, 1, 2, 3]
// Expected Output: [False, False, False, False, True, True]
// Explanation: Negative numbers and 0 are not prime, while 2 and 3 are prime.

// Test Case 5: Large Prime Numbers
// Input: [101, 103, 107, 109, 113]
// Expected Output: [True, True, True, True, True]
// Explanation: All numbers in this array are large prime numbers.

// Test Case 6: Array with Repeating Numbers
// Input: [2, 3, 4, 4, 5, 5]
// Expected Output: [True, True, False, False, True, True]
// Explanation: Only 2, 3, and 5 are prime; repeated 4 is not prime.

// Test Case 7: Array with Single Element
// Input: [1]
// Expected Output: [False]
// Explanation: 1 is not a prime number.

// Input: [2]
// Expected Output: [True]
// Explanation: 2 is a prime number.

// Test Case 8: Empty Array
// Input: []
// Expected Output: []
// Explanation: An empty array should return an empty result since there are no elements to check.