//write a program that take s an input of age 
//and print if you are adult or not
#include<bits/stdc++.h>
using namespace std;
/*
int main(){
    int age;
    cin >> age;
    if (age >= 18) {
        cout << "You are an adult";
    }
    else {
        cout << "You are not an adult";
    }
    return 0;
}
*/

/*
If marks are less than 25, it prints “Grade: F.”
If marks are between 25 and 44 (inclusive), it prints “Grade: E.”
If marks are between 45 and 49 (inclusive), it prints “Grade: D.”
If marks are between 50 and 59 (inclusive), it prints “Grade: C.”
If marks are between 60 and 69 (inclusive), it prints “Grade: B.”
If marks are 70 or higher, it prints “Grade: A.”
If marks are outside the valid range, it prints “Invalid marks entered.”
*/
/*
int main(){
    int marks;
    cin >> marks;
    if(marks < 25){
        cout << "F";
    }
    else if(marks <= 44){
        cout << "E";
    }
    else if( marks <=49){
        cout<< "D";
    }
    else if(marks <=59){
        cout<< "C";
    }
    else if( marks <=69){
        cout<< "B";
    }
    else if(marks >=70){
        cout<< "A";
    }
    return 0;
}
*/
/*
int main(){
    int age;
    cin >> age;
    if(age <18){
        cout << "not eligible for job";
    }
    else if(age<=54){
        cout<<"eligible for job";
    }
    else if(age<=57){
        cout<<"eligible but retirement soon";
    }
    else {
        cout<<"retirement time";
    }
    return 0;
}
*/
//now with nested if
int main(){
    int age;
    cin >> age;
    if(age <18){
        cout << "not eligible for job";
    }
    else if(age<=57){
        cout<<"eligible";
        if(age>=55){
            cout<<",but retirement soon";
        }
    }
    else if(age>57){
        cout<<"retirement time";
    }
    return 0;
}