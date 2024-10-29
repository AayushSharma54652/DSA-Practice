#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int ans = 0;
    int k = 0;
    for(auto i : s){
        if(i == 'N')k++;
        else{
            k--;
        }
        if(k < 0){
            k++;
            ans++;
        }
    }
    ans += k;
    cout<<ans<<endl;
}


int demo(){
    string s;
    cin>>S;
    int k = 0;
    int ans = 0;
    for(auto i : s){
        if(i == 'N'){
            k++;
        }
        else{
            k--;
        }
        if(k <0){
            k++;
            ans++;
        }
    }
    ans+=k;
    return ans;
    
}