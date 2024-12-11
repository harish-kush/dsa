#include<iostream>
using namespace std;

int main() {
    int n;
    
    // Input the value of n
    cout << "Enter a number: ";
    cin >> n;
    
    // Initialize the first two Fibonacci numbers
    long long first = 0, second = 1;
    
    // Print the first n Fibonacci numbers
    cout << "Fibonacci series: ";
    for (int i = 1; i <= n; i++) {
        cout << first << " ";
        
        // Update the Fibonacci numbers
        long long next = first + second;
        first = second;
        second = next;
    }
    cout << endl;
    
    return 0;
}
