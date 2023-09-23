// In this file i have represent a way to excess the private member in a class also called as getter setter method
#include<iostream>
using namespace std;

class Anurag{
    private:
    int n;

    public:
    void get(int w){
        n=w;
    }
    void display(){
        cout<<n;
    };
};

int main(){
    Anurag one;
    one.get(4);
    one.display();
}


