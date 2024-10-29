#include<bits/stdc++.h>
using namespace std;

class Hero{

    private:
    int health;

    public:
    char level;
    //getter and setter to access private memebers and view and update them outside the class

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

};

int main(){
    Hero ramesh;
    // ramesh.health = 5;

    // Setting health of ramesh
    ramesh.setHealth(70);
    ramesh.level = 'A';
 
    cout<<"Health is: "<<ramesh.getHealth()<<endl;
    cout<<"Level is: "<<ramesh.level<<endl;

}