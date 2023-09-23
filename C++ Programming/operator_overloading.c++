#include<iostream>
using namespace std;

class Anurag{

    //definig a variable in class
    public:
    int num;
    
    //overloading ++ operator
    void operator++(int){
        num++;

    }
    // dislaying value
    void display(){
        cout<<num;
    }
};

int main(){
    //making the object
    Anurag ome;
    // incrementing the object
    ome++;
    ome++;
    ome.display();
}