#include <iostream>
using namespace std;

int main() {
    char ch;

    // Input the character
    cout << "Enter a character: ";
    cin >> ch;

    // Check whether the character is an alphabet, digit, or special character
    if (isalpha(ch)) {
        cout << "The character is an alphabet." << endl;
    } else if (isdigit(ch)) {
        cout << "The character is a digit." << endl;
    } else {
        cout << "The character is a special character." << endl;
    }

    return 0;
}
