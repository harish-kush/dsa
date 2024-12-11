#include <iostream>
using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3;

    // Input the coordinates of the three points
    cout << "Enter the coordinates of the first point (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the second point (x2, y2): ";
    cin >> x2 >> y2;
    cout << "Enter the coordinates of the third point (x3, y3): ";
    cin >> x3 >> y3;

    // Check if the points lie on the same straight line
    if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1)) {
        cout << "The points lie on the same straight line." << endl;
    } else {
        cout << "The points do not lie on the same straight line." << endl;
    }

    return 0;
}
