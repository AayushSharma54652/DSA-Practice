#include<bits/stdc++.h>
using namespace std;
class Hero{
    //Properties
    private:
    int health;
    public:
    char level;
    char *name;
    //Default constructor
    Hero(){
        cout<<"Constructor called"<<endl;
        name = new char[100];
    }

    //Parametrized constructor

    Hero(int health){
        this->health = health;
    }

    Hero(int health,char level){
        this->health = health;
        this->level = level;
    }

    //Copy Constructor

    Hero(Hero &temp){
        cout<<"Copy Constructor called"<<endl;
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }


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
    void print(){
        cout<<endl;
        cout<<"[ Name: "<<this->name<<", ";
        cout<<"Health: "<<this->health<<", ";
        cout<<"Level: "<<this->level<<" ]";
        cout<<endl;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }

};

int main(){
     //Statistically created object
    // Hero ramesh;
     //Dynamically created object
    // Hero *h = new Hero;

    //Calling default constructor
    Hero ramesh;
    //Calling parametrized constructor


    Hero *aayush = new Hero(15);
    cout<<"Health of aayush-> "<<aayush->getHealth()<<endl;

    Hero *Nitish = new Hero(20,'B');
    cout<<"Health of Nitish is "<<Nitish->getHealth()<<" and level is "<<Nitish->getLevel()<<endl;

    //Copy Constructor

    Hero A(20, 'H');
    A.setName("Hello");
    Hero C(A);
    cout<<"Details of A: ";
    A.print();
    cout<<"Details of C: ";
    C.print();

    // Shallow Copy Concept
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('A');
    hero1.setName("Aayush");
    hero1.print();

    //Use default copy constructor

    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'G';
    hero1.print();
    hero2.print();


}