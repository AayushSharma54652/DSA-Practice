#include<bits/stdc++.h>
using namespace std;
class Human{

    public:
    int height;
    int weight;
    private:
    int age;

    void getAge(){
        cout<<this->age;
    }
    int setWeight(int w){
        this->weight = w;
    }

};

class Male: protected Human{

    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
    void getHeight(){
        cout<<this->height<<endl;
    }
};

int main(){
    //Public accessing method case

    // Male object1;
    // cout<<object1.age<<endl;
    // cout<<object1.weight<<endl;
    // cout<<object1.height<<endl;
    // cout<<object1.color<<endl;
    // object1.sleep();
    // object1.setWeight(100);
    // cout<<object1.weight<<endl;


    //Protected accessing method case

    Male object2;
    object2.getHeight();

}