#include<bits/stdc++.h>
using namespace std;

int matrixMultiplication(vector<int> &arr) {
        int n = arr.size();
        int dp[n][n];
        for(int i=1;i<n;i++)dp[i][i] = 0;
        for(int i = n-1;i>=1;i--){
            for(int j=i+1;j<n;j++){
                int mini = 1e9;
                for(int k = i;k<j;k++){
                    int steps = arr[i-1] * arr[k] * arr[j] + dp[i][k] + dp[k+1][j];
                    mini = min(steps,mini);
                }
                dp[i][j] = mini;
            }
        }
        return dp[1][n-1];
    }