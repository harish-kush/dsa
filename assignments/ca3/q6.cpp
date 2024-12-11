#include<iostream>
using namespace std;

int main() {
    char ch = 'A';  // Start from 'A'
    
    cout << "ASCII values and their equivalent characters:" << endl;
    
    // Print ASCII values and characters for uppercase alphabets
    while (ch <= 'Z') {
        cout << "ASCII value of " << ch << " is " << int(ch) << endl;
        ch++;  // Move to the next character
    }
    
    ch = 'a';  // Start from 'a' after printing uppercase alphabets
    
    // Print ASCII values and characters for lowercase alphabets
    while (ch <= 'z') {
        cout << "ASCII value of " << ch << " is " << int(ch) << endl;
        ch++;  // Move to the next character
    }
    
    return 0;
}
