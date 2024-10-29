#include<bits/stdc++.h>
using namespace std;
class Hero{
    public:
    //Simple Constructor
    Hero(){
        cout<<"Constructor is called"<<endl;
    }

    //Simple Destructor
    ~Hero(){
        cout<<"Destructor is called"<<endl;
    }
};

int main(){
    Hero A;
    Hero *B = new Hero;
    delete(B);
}