#include <iostream>
using namespace std;

int main() {
    char char1, char2;

    // Input two characters
    cout << "Enter the first character: ";
    cin >> char1;
    cout << "Enter the second character: ";
    cin >> char2;

    // Calculate the difference between ASCII values
    int diff = abs(static_cast<int>(char1) - static_cast<int>(char2));

    // Output the result
    cout << "The difference between the ASCII values of '" << char1 
         << "' and '" << char2 << "' is: " << diff << endl;

    return 0;
}
