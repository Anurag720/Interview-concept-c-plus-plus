// this code is example of virtual inheritance
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal makes a generic sound" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound1()  {
        cout << "Cat meows" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound2() {
        cout << "Dog barks" << endl;
    }
};

class Another : public Dog {
public:
    void display() {
        cout << "meow" << endl;
    }
};

int main() {
    Another one;
    one.makeSound2(); // Call Dog's makeSound2 method, as Another inherits from Dog
    one.display();    // Call Another's display method

    return 0;
}
