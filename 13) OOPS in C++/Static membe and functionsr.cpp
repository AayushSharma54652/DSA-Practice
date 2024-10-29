#include<bits/stdc++.h>
using namespace std;
class Hero{
    public:
    //Static member
    static int timeToComplete;

    //Static function
    static int random(){
        return timeToComplete;
    }
};

//Intialize static member outside the class

int Hero::timeToComplete = 6;

int main(){
    cout<<Hero::timeToComplete<<endl;
    cout<<Hero::random();
}