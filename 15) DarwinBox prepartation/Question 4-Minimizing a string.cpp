#include<bits/stdc++.h>
using namespace std;

void f(string &s,char a,char b){
    int n = s.length();
    bool fg = false;
    int st = -1;
    for(int i=n;i>=0;i--){
        if(s[i] == b){
            if(fg){
                swap(s[i],s[st]);
                st--;
            }
            else{
                continue;
            }
        }
        else if(s[i] == a){
            if(fg){
                continue;
            }
            else{
                fg = true;
                st = i;
            }
        }
        else{
            fg = false;
        }
    }
}


void f2(string &s,char a,char b){
    int n = s.length();
    bool fg = -1;
    int st = -1;
    for(int i = n;i>=0;i--){
        if(s[i] == b){
            if(fg){
                swap(s[i],s[st]);
                st--;
            }
            else{
                continue;
            }
        }
        else if(s[i] == a){
            if(fg){
                continue;
            }
            else{
                fg = true;
                st = i;
            }
        }
        else{
            fg = false;
        }
    }
}

int main(){
    string s;
    cin>>s;
    int n = s.length();
    f(s,'b','c');
    f(s,'a','b');
    cout<<s;
}
