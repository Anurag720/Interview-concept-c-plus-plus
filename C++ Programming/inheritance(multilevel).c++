// this code is example of multilevel inheritance

#include<iostream>
using namespace std;

class Anurag{
    public:
    void display(){
        cout<<"my name is this";
    }

};

class Singh:public Anurag{
    public:
    void display1(){
        cout<<"My middle name is this";
    }
};

class Baghel:public Singh{
    public:
    void display2(){
        cout<<"My last name is this";
    }
};

int main(){
    Baghel rahul;

    rahul.display();
    rahul.display2();
    rahul.display1();
}