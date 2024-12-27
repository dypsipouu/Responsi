#include <iostream>
#include <cmath> // For M_PI constant

using namespace std;

int main() {
    // Step 2: Input radius
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Step 3: Compute area using the formula
    double area = M_PI * radius * radius;

    // Step 4: Output the area
    cout << "The area of the circle with radius " << radius << " is " << area << endl;

    // Step 5: End
    return 0;
}
