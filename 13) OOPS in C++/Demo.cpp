#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int health;
    public:
    char level;

    char *name;
    Hero(){
        cout<<"Constructor called"<<endl;
        name = new char[100];
    }
    //Parametrized Constructor

    Hero(int health){
        this->health =health;
    }

    Hero(int health,char level){
        this->health = health;
        this->level = level;
    }
    public:

    int gethealth(){
        return health;
    }

    void setHealth(int h){
        this->health = h;
    }

    
};


int main(){
    Hero aayush;
    aayush.setHealth(20);
    cout<<aayush.gethealth();
    return 0;
}