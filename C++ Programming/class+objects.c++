// This file contents the actual code syntax of class and object  in c++

#include<iostream>
#include<string>
using namespace std;

 // structure to create a class with class name 

class Person{ 
     // excess modifier tell what kind of excess class has here private we cannot use its variable outside it                      
    public:
    // both are data members;
    string name;
    int age;                        // both are data members;
    // member function
    void display(){
        cout<<name<<age;           
    }
};

int main(){
    // creating object name one from class
    Person one;               
    Person two;
    //using the class variables in objects
    one.age=45;             
    one.name="anurag";
    one.display();
    
}



