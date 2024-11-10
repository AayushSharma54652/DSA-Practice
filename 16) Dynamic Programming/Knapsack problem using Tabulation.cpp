#include <bits/stdc++.h>
using namespace std;

int knapSack(int capacity, vector<int> &val, vector<int> &wt)
{
    int n = val.size();
    vector<vector<int>> dp(n, vector<int>(capacity + 1, 0));
    for (int W = wt[0]; W <= capacity; W++)
        dp[0][W] = val[0];

    for (int ind = 1; ind < n; ind++)
    {
        for (int W = 0; W <= capacity; W++)
        {
            int notTake = 0 + dp[ind - 1][W];
            int take = INT_MIN;
            if (wt[ind] <= W)
            {
                take = val[ind] + dp[ind - 1][W - wt[ind]];
            }
            dp[ind][W] = max(take, notTake);
        }
    }

    return dp[n - 1][capacity];
}