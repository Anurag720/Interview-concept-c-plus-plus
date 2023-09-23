// in this code how friend function is used is declare and friend function declare with friend keyword but define outside the class
#include<iostream>
using namespace std;

class Complex {
private:
    int a, b;

public:
    void get(int x, int y) {
        a = x;
        b = y;
    }

    void show() {
        cout << a << " " << b; // Add whitespace between a and b
    }

    friend void fun(Complex);
};

void fun(Complex c) {
    cout << c.a + c.b;
}

int main() {
    Complex c1, c2, c3;
    c1.get(7, 8);
    fun(c1);
    
    return 0; // Return 0 to indicate successful execution
}
