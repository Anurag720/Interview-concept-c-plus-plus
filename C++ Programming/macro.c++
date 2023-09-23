#include <iostream>
using namespace std;

// Define a simple macro to represent the value of pi
#define PI 3.14159265359

// Define a macro for finding the square of a number
#define SQUARE(x) (x * x)

int main() {
    double radius = 5.0;
    double area = PI * SQUARE(radius);

    cout << "Area of the circle: " << area << endl;

    return 0;
}
