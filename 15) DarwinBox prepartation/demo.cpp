#include<bits/stdc++.h>
using namespace std;

int ans;
string s;

void f(int i,int n){
    if(i == n-1 || i == n){
        ans++;
        return;
    }
    if(i == '1'){
        f(i+2,n);
    }
    if(i == '2'){
        f(i+2,n);
    }
    f(i+1,n);
}

int main(){
    cin>>s;
    ans = 0;
    f(0,s.size());
    cout<<ans;
}