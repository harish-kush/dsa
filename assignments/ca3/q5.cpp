#include<iostream>
using namespace std;

int main() {
    int n, firstTerm = 3, commonRatio = 4;

    // Ask user for the number of terms
    cout << "Enter the number of terms: ";
    cin >> n;

    // Display the GP series
    cout << "The GP series is: ";
    for (int i = 0; i < n; i++) {
        cout << firstTerm * pow(commonRatio, i) << " ";
    }
    cout << endl;

    return 0;
}
