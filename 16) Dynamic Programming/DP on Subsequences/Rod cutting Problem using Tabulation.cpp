#include <bits/stdc++.h>
using namespace std;

int cutRod(int price[], int n)
{
    vector<vector<int>> dp(n, vector<int>(n + 1, 0));

    for (int N = 0; N <= n; N++)
    {
        dp[0][N] = N * price[0];
    }

    for (int ind = 1; ind < n; ind++)
    {
        for (int N = 0; N <= n; N++)
        {
            int notTake = 0 + dp[ind - 1][N];
            int take = INT_MIN;
            int rodlength = ind + 1;

            if (rodlength <= N)
            {
                take = price[ind] + dp[ind][N - rodlength];
            }
            dp[ind][N] = max(take, notTake);
        }
    }
    return dp[n - 1][n];
}