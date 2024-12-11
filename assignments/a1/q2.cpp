#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;

    // Input radius of the circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate area and circumference
    double area = 3.14 * radius * radius;
    double circumference = 2 * 3.14 * radius;

    // Compare area and circumference
    if (area > circumference) {
        cout << "The area is larger than the circumference." << endl;
    } else if (area < circumference) {
        cout << "The circumference is larger than the area." << endl;
    } else {
        cout << "The area and circumference are equal." << endl;
    }

    return 0;
}
