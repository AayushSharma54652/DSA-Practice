#include<bits/stdc++.h>
using namespace std;

int f(int ind,int W, vector<int>&wt, vector<int> &val, vector<vector<int>> &dp){
        if(ind == 0){
            if(wt[0] <= W){
                return val[0];
            }
            return 0;
        }
        if(dp[ind][W] != -1)return dp[ind][W];
        int notTake = 0 + f(ind-1, W, wt,val,dp);
        int take = INT_MIN;
        if(wt[ind] <= W){
            take = val[ind] + f(ind-1, W - wt[ind],wt,val,dp);
        }
        return dp[ind][W] = max(take,notTake);
    }
    int knapSack(int capacity, vector<int> &val, vector<int> &wt) {
        int n = val.size();
        vector<vector<int>>dp(n,vector<int>(capacity + 1,-1));
        return f(n-1,capacity, wt, val,dp);
        
    }