#include<iostream>
using namespace std;

int main() {
    // Loop through numbers from 1 to 100
    for (int i = 1; i <= 100; i++) {
        // Check if the number is odd
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    return 0;
}
