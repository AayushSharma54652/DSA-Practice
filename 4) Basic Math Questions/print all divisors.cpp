#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    //1st case
    for(int i = 1;i<=n;i++){
        if(n%i == 0){
            cout<<i<<" ";
        }
    }
    //2nd case
    vector<int>ls;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            ls.push_back(i);
            if((n/i) != i){
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it:ls){
        cout<<it<<" ";
    }
}