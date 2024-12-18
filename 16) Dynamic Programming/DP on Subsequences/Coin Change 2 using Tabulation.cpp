#include <bits/stdc++.h>
using namespace std;

int change(int amount, vector<int> &coins)
{
    int n = coins.size();
    vector<vector<int>> dp(n, vector<int>(amount + 1, 0));
    for (int T = 0; T <= amount; T++)
    {
        dp[0][T] = (T % coins[0] == 0);
    }

    for (int ind = 1; ind < n; ind++)
    {
        for (int T = 0; T <= amount; T++)
        {
            int notTake = dp[ind - 1][T];
            int take = 0;
            if (coins[ind] <= T)
            {
                take = dp[ind][T - coins[ind]];
            }
            dp[ind][T] = take + notTake;
        }
    }
    return dp[n - 1][amount];
}