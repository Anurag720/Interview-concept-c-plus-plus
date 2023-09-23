#include <iostream>
using namespace std;

int main() {
    // Declare an integer variable
    int num = 42;

    // Declare a pointer to an integer and initialize it to point to 'num'
    int* ptr = &num;

    // Access and modify the value of 'num' through the pointer
    cout << "Value of num: " << *ptr << endl; // Dereference the pointer to access the value

    
    
   // acess actual address
    cout << "Modified value of num: " <<ptr << endl; // Check the modified value of 'num'

    return 0;
}
