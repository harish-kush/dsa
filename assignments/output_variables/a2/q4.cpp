#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius, height, volume;

    // Input radius and height
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    // Calculate volume
    double pie = M_PI;
    volume = pie * radius * radius * height;

    // Output the result
    cout << "The volume of the cylinder is: " << volume << endl;

    return 0;
}
