#include<iostream>
using namespace std;

int main() {
    int n;
    
    // Input the value of n
    cout << "Enter a number: ";
    cin >> n;

    // Loop to print the factorial of each number from 1 to n
    for (int i = 1; i <= n; i++) {
        long long factorial = 1;  // Initialize factorial for each number
        
        // Calculate factorial of i
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        
        // Print the factorial
        cout << "Factorial of " << i << " is: " << factorial << endl;
    }

    return 0;
}
