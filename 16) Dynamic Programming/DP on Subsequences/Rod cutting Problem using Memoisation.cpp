#include <bits/stdc++.h>
using namespace std;

int f(int ind, int N, int price[], vector<vector<int>> &dp)
{
    if (ind == 0)
    {
        return N * price[0];
    }
    if (dp[ind][N] != -1)
        return dp[ind][N];

    int notTake = 0 + f(ind - 1, N, price, dp);
    int take = INT_MIN;
    int rodlength = ind + 1;
    if (rodlength <= N)
    {
        take = price[ind] + f(ind, N - rodlength, price, dp);
    }

    return dp[ind][N] = max(take, notTake);
}
int cutRod(int price[], int n)
{
    vector<vector<int>> dp(n, vector<int>(n + 1, -1));
    return f(n - 1, n, price, dp);
}