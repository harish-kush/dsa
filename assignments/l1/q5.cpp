#include<iostream>
using namespace std;

int main() {
    int number, sum = 0;
    cout << "Enter a number: ";
    cin >> number;
    
    // Process each digit of the number
    while (number != 0) {
        int digit = number % 10;  // Extract the last digit
        if (digit % 2 == 0) {     // Check if the digit is even
            sum += digit;         // Add to the sum
        }
        number /= 10;             // Remove the last digit
    }
    
    cout << "Sum of even digits: " << sum << endl;
    return 0;
}
