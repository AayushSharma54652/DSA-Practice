#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int start = 0;
    int end = s.size()-1;
    while(start < end){
        if(s[start] != s[end]){
            cout<<"It is not a Palindrome"<<endl;
            return 0;
        }
        start ++;
        end --;

    }
    cout<<"It is a Palindrome";
}