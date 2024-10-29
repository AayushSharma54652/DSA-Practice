#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog: public Animal{
    public:
    //Overriding the speak function of Dog class inherited from Animal class
    void speak(){
        cout<<"Barking"<<endl;
    }
};

int main(){
    Dog obj1;
    obj1.speak();
}