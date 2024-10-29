#include<bits/stdc++.h>
using namespace std;

class A{

    public:
    void sayHello(){
        cout<<"Hello Aayush"<<endl;
    }

    int sayHello(int n){
        cout<<"Hello Aayush"<<endl;
        return n;
    }    

    void sayHello(string name){
        cout<<"Hello "<<name<<endl;
    }
};

int main(){
    A obj;
    obj.sayHello("Nitish");
    return 0;
}