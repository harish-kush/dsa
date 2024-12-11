#include <iostream>
using namespace std;

int main() {
    double length, breadth;

    // Input length and breadth of the rectangle
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    // Calculate area and perimeter
    double area = length * breadth;
    double perimeter = 2 * (length + breadth);

    // Compare area and perimeter
    if (area > perimeter) {
        cout << "The area of the rectangle is greater than its perimeter." << endl;
    } else if (area < perimeter) {
        cout << "The perimeter of the rectangle is greater than its area." << endl;
    } else {
        cout << "The area and perimeter of the rectangle are equal." << endl;
    }

    return 0;
}
