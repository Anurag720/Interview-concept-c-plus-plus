// abstract class and pure virtual function concept

#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    // Pure virtual function with parameters
    virtual void draw(int x, int y) = 0;
};

// Derived class 1
class Circle : public Shape {
public:
    // Implementing the pure virtual function with parameters
    void draw(int x, int y) override {
        cout << "Drawing a circle at (" << x << ", " << y << ")" << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    // Implementing the pure virtual function with parameters
    void draw(int x, int y) override {
        cout << "Drawing a rectangle at (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Circle circle;
    Rectangle rectangle;

    circle.draw(10, 20);
    rectangle.draw(30, 40);

    return 0;
}
