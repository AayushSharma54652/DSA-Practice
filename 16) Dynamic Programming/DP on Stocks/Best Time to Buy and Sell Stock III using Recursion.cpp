#include <bits/stdc++.h>
using namespace std;

int f(int ind, int buy, int cap, vector<int> &prices, int &n)
{
    if (ind == n || cap == 0)
        return 0;
    if (buy)
    {
        return max(-prices[ind] + f(ind + 1, 0, cap, prices, n), 0 + f(ind + 1, 1, cap, prices, n));
    }
    else
    {
        return max(prices[ind] + f(ind + 1, 1, cap - 1, prices, n), 0 + f(ind + 1, 0, cap, prices, n));
    }
}

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    return f(0, 1, 2, prices, n);
}