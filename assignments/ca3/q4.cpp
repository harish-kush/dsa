#include<iostream>
using namespace std;

int main() {
    int n, firstTerm = 4, commonDifference = 3;

    // Ask user for the number of terms
    cout << "Enter the number of terms: ";
    cin >> n;
    
    // Display the AP series
    cout << "The AP series is: ";
    for (int i = 0; i < n; i++) {
        cout << firstTerm + i * commonDifference << " ";
    }
    cout << endl;

    return 0;
}
