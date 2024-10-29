#include<bits/stdc++.h>
using namespace std;
/*void printName(){
    cout << "Aayush";
}
int main(){
    printName();
    return 0;
}
*/

// Parametrised function
/*
void printname(string name){
    cout<<"hey "<<name<<endl;
}
int main(){
    string name1;
    cin >> name1;
    printname(name1);
    string name2;
    cin >> name2;
    printname(name2);
    return 0;
}
*/

// Take two numbers and print their sum
/*
int Sum(int num1,int num2){
    int num3 = num1 + num2;
    return num3;
}


int main(){
    int num1,num2,res;
    cin>>num1>>num2;
    res = Sum(num1,num2);
    cout<<res;
}
*/

//using void
/*
void Sum(int num1,int num2){
    int num3 = num1 + num2;
    cout<< num3;
}


int main(){
    int num1,num2,res;
    cin>>num1>>num2;
    Sum(num1,num2);
    
}
*/

// max number function
/*
void maxx(int num1,int num2){
    if(num1>num2){
        cout<< num1;
    }
    else{
        cout<< num2;
    }
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
    maxx(num1,num2);
    return 0;
}
*/

//using int function
/*
int maxx(int num1,int num2){
    if(num1>num2){
        return num1;
    }
    return num2;
}

int main(){
    int num1,num2,maximum;
    cin>>num1>>num2;
    maximum = maxx(num1,num2);
    cout<<maximum;
    return 0;
}
*/

/*pass by value - function will take the copy of the input number 
and perform all functions on it and real number will remain same
after all functions got performed*/
/*
void doSomething(int num){
    cout<<num<<endl;
    num += 5;
    cout<<num<<endl;
    num += 5;
    cout<<num<<endl;
}
int main(){
    int num;
    cin>>num;
    doSomething(num);
    cout<<num<<endl;
    return 0;
}
*/


/*pass by reference -  Function will take the address of the input number
or string and all changes happens in the function will change the
real value of the input string or number*/

void doSomething(int &num){
    cout<<num<<endl;
    num += 5;
    cout<<num<<endl;
    num +=5;
    cout<<num<<endl;
}
int main(){
    int num;
    cin>>num;
    doSomething(num);
    cout<<num<<endl;
}
//array is always passed by reference