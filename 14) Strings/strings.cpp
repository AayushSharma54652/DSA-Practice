#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1;

    // If there is no space in input string
    // cin>>s1;
    // cout<<s1;

    // If there is space in input string 

    getline(cin,s1);
    cout<<s1<<endl;
    cout<<s1.size()<<endl;

    // Append Function in String

    string s2 = "hello";
    string s3 = "Aayush";
    string s4 = s2+s3;//s2.append(s2);
    cout<<s4<<endl;

    //Push back in string

    s3.push_back('i');
    s2 = s2 + "pagal";
    cout<<s3<<endl;
    cout<<s2<<endl;

    //Using escape character to print "good"

    string s5 = "Aayush is a \"good\" boy";
    cout<<s5<<endl;

    string s6 = "\\0";
    cout<<s6<<endl;
}
