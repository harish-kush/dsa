#include<iostream>
using namespace std;

int main() {
    int number, reverse = 0, sum;
    
    // Input the number
    cout << "Enter a number: ";
    cin >> number;
    
    int original = number;  // Save the original number for later use
    
    // Reverse the number
    while (number != 0) {
        int digit = number % 10;  // Extract the last digit
        reverse = reverse * 10 + digit;  // Build the reverse number
        number /= 10;  // Remove the last digit
    }
    
    // Calculate the sum of the original number and its reverse
    sum = original + reverse;
    
    // Output the result
    cout << "Sum of the number and its reverse: " << sum << endl;
    
    return 0;
}
