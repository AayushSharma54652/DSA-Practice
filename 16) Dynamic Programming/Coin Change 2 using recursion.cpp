#include <bits/stdc++.h>
using namespace std;

int f(int ind, int T, vector<int> &coins)
{
    if (ind == 0)
    {
        return (T % coins[0] == 0);
    }
    int notTake = f(ind - 1, T, coins);
    int take = 0;

    if (coins[ind] <= T)
        take = f(ind, T - coins[ind], coins);
    return take + notTake;
}

int change(int amount, vector<int> &coins)
{
    int n = coins.size();
    return f(n - 1, amount, coins);
}