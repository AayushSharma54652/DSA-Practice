#include<bits/stdc++.h>
using namespace std;

char ans(string s){
    unordered_map<char,int>mpp;
    int ans;
    int mx = 0;
    int mini = INT_MAX;
    cin>>s;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }
    for(auto it: mpp){
        mini = min(mini,it.second);
    }
    for(auto it:mpp){
        if(it.second == mini){
            ans = it.first;
        }
    }
    return ans;
}

int main(){
    string s;
    cin>>s;
    cout<<ans(s);
}