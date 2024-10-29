#include<bits/stdc++.h>
using namespace std;

int main1(){
    int n;
    cin>>n;
    int prev = 1;
    int prev2 = 0;
    for(int i=2;i<=n;i++){
        int curi = prev + prev2;
        prev2 = prev;
        prev = curi;
    }
    cout<<prev;
}

// without space optimization
int main2(){
    int n;
    cin>>n;
    vector<int>dp(n+1,0);
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout<< dp[n];
}