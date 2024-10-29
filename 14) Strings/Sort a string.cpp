#include<bits/stdc++.h>
using namespace std;

string sort(string s){
    vector<int>arr(26,0);
    for(int i=0;i<s.size();i++){
        arr[s[i] - 'a']++;
    }
    string ans;
    for(int i=0;i<26;i++){
        char c = i +'a';
        while(arr[i]){
            ans += c;
            arr[i]--;
        }
    }
    return ans;
}

int main(){
    string s;
    getline(cin,s);
    cout<<sort(s);
}