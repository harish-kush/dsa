#include <iostream>
using namespace std;

int main() {
    double side1, side2, side3;

    // Input the sides of the triangle
    cout << "Enter the length of the first side: ";
    cin >> side1;
    cout << "Enter the length of the second side: ";
    cin >> side2;
    cout << "Enter the length of the third side: ";
    cin >> side3;

    // Check the type of triangle
    if (side1 == side2 && side2 == side3) {
        cout << "The triangle is Equilateral." << endl;
    } else if (side1 != side2 && side2 != side3 && side1 != side3) {
        cout << "The triangle is Scalene." << endl;
    } else {
        cout << "The triangle is Isosceles." << endl;
    }

    return 0;
}
