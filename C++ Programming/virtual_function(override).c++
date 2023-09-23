// this code display how to use virtual function + override concept and achieve runtime polymorphism

#include<iostream>
using namespace std;

class Anurag{
    public:
    virtual void say(){
        cout<<"my name is this";
    }
};
class Singh : public Anurag{
    public:
    void say() override{
        cout<<"what is your name";
    }

};
int main(){
    // this approach of making object is called stack approach
    Singh one;   
    one.say();

    //heap approach objects by pointers

    Anurag* two= new Singh();

    two->say();
    delete two;


}
