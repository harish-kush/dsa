#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    // Check the minimum number of notes
    int count;

    // For 500 denomination
    if (amount >= 500) {
        count = amount / 500;
        amount %= 500;
        cout << "notes of 500 = " << count << endl;
    }
    
    // For 100 denomination
    if (amount >= 100) {
        count = amount / 100;
        amount %= 100;
        cout << "notes of 100 = " << count << endl;
    }
    
    // For 50 denomination
    if (amount >= 50) {
        count = amount / 50;
        amount %= 50;
        cout << "notes of 50 = " << count << endl;
    }

    // For 20 denomination
    if (amount >= 20) {
        count = amount / 20;
        amount %= 20;
        cout << "notes of 20 = " << count << endl;
    }

    // For 10 denomination
    if (amount >= 10) {
        count = amount / 10;
        amount %= 10;
        cout << "notes of 10 = " << count << endl;
    }

    // For 5 denomination
    if (amount >= 5) {
        count = amount / 5;
        amount %= 5;
        cout << "notes of 5 = " << count << endl;
    }

    // For 2 denomination
    if (amount >= 2) {
        count = amount / 2;
        amount %= 2;
        cout << "notes of 2 = " << count << endl;
    }

    // For 1 denomination
    if (amount >= 1) {
        count = amount / 1;
        amount %= 1;
        cout << "notes of 1 = " << count << endl;
    }

    return 0;
}
