#include <bits/stdc++.h>
using namespace std;

int f(int ind, int buy, vector<int> &prices, int &n)
{
    if (ind == n)
        return 0;
    int profit = 0;
    if (buy)
    {
        profit = max(-prices[ind] + f(ind + 1, 0, prices, n), 0 + f(ind + 1, 1, prices, n));
    }
    else
    {
        profit = max(prices[ind] + f(ind + 1, 1, prices, n), 0 + f(ind + 1, 0, prices, n));
    }
    return profit;
}

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    return f(0, 1, prices, n);
}