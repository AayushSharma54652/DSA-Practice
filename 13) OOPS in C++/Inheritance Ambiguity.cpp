#include<bits/stdc++.h>
using namespace std;
class A{

    public:
    void fn(){
        cout<<"I am A"<<endl;
    }
};
class B{

    public:
    void fn(){
        cout<<"I am B"<<endl;
    }
};

class C: public A,public B{

};

int main(){
    C obj;
    //Inheritance Ambiguity
    //obj.fn();
    
    //Fix using scope resoultion operator
    obj.A::fn();
    obj.B::fn();

    return 0;
}