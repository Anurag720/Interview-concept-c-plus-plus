// this code is a example of single level inheritance
#include<iostream>
using namespace std;

//here Anurag is a parent class with public excess modifier
class Anurag{
    public:
    void display(){
        cout<<"my name is speed";
    }

};

// here child class is derived from parent and we have to also make public 
class Bike:public Anurag{
    public:
    void display1(){
        cout<<"my bike is xyz";
    }
};

int main(){
    Bike rahul;

    //object created from derived class has attributes of both parent and child
    rahul.display();
    rahul.display1();
}

