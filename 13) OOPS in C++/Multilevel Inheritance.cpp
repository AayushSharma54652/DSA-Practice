#include<bits/stdc++.h>
using namespace std;
class Animal{

    public:
    int age;
    int weight;

    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog: public Animal{
    public:
    void bolu(){
        cout<<"Main Kutta hun"<<endl;
    }
};

class GermanShepherd: public Dog{

};

int main(){
    GermanShepherd g;
    g.speak();
    g.bolu();
}