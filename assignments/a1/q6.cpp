#include <iostream>
using namespace std;

int main() {
    double marksA, marksB, marksC;

    // Input marks of students A, B, and C
    cout << "Enter the marks of student A: ";
    cin >> marksA;
    cout << "Enter the marks of student B: ";
    cin >> marksB;
    cout << "Enter the marks of student C: ";
    cin >> marksC;

    // Determine the student with the least marks
    if (marksA <= marksB && marksA <= marksC) {
        cout << "Student A has the least marks." << endl;
    } else if (marksB <= marksA && marksB <= marksC) {
        cout << "Student B has the least marks." << endl;
    } else {
        cout << "Student C has the least marks." << endl;
    }

    return 0;
}
