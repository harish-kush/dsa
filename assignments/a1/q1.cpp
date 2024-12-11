#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Input two integers
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    // Compare and print the greatest number
    if (num1 > num2) {
        cout << "The greatest number is: " << num1 << endl;
    } else {
        cout << "The greatest number is: " << num2 << endl;
    }

    return 0;
}
