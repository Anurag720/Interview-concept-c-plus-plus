// this code is example of function overloading

#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two double numbers
double add(double a, double b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 10;
    double dbl1 = 2.5, dbl2 = 3.5;

    // Call the integer version of the add function
    int result1 = add(num1, num2);
    cout << "Sum of integers: " << result1 << endl;

    // Call the double version of the add function
    double result2 = add(dbl1, dbl2);
    cout << "Sum of doubles: " << result2 << endl;

    return 0;
}
