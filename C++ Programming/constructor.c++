// in this section we are going to see the constructor concept if we did not even define constructor then also by default constructor is made 
//behind the scene while creating objects their are mainly 3 types copy, parameterise , default

#include<iostream>
using namespace std;

class Anurag{
    public:
   // this is example of default constructor 
    Anurag(){
        age=0;
        name="unknown";

    }
    private:
    int age;
    string name;

    // this is the example of parameterize constructor
    Anurag(int age,int num){
        age=0;
        num=90;
    }

    // syntax of copy constructor
    Anurag(const Anurag &other){
        age = other.age;
        name = other.name;
    }
};