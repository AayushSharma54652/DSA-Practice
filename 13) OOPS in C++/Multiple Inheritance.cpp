#include<bits/stdc++.h>
using namespace std;
class Animal{

    public:
    int age;
    int weight;

    void bark(){
        cout<<"Barking"<<endl;
    }
};

class Human{

    public:
    string color;

    void speak(){
        cout<<"Speaking"<<endl;
    }
};

//Multiple Inheritance
class Multiple: public Animal, public Human{

};


int main(){
    Multiple obj1;
    obj1.speak();
    obj1.bark();
    return 0;
}