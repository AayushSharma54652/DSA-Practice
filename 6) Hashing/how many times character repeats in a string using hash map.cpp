#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    //Pre Compute or Hash map
    map<char,int>mpp;
    for(int i =0;i<s.size();i++){
        mpp[s[i]]++;
    }
    
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<mpp[c]<<endl;
    }
    return 0;
}