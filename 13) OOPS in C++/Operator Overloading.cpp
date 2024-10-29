#include<bits/stdc++.h>
using namespace std;
class B{
    public:
    int a;
    int b;
    //Overloading + operator 
    void operator+ (B &obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"output of + : "<<value2 - value1<<endl;
    }
    //Overloading () operator
    void operator() (){
        cout<<"Main jo hun bracket hun "<<this->a<<endl;
    }
    //Overloading - operator
    void operator- (B &obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"output of - : "<<value2 + value1<<endl;
    }
};

int main(){
    B obj1,obj2;
    obj1.a = 4;
    obj2.a = 7;
    //Printing overloaded + operator
    obj1 + obj2;
    //Printing overloaded () operator
    obj1();
    //Printing overloaded - operator
    obj1 - obj2;

}