#include <bits/stdc++.h>
using namespace std;

int knapSack(int capacity, vector<int> &val, vector<int> &wt)
{
    int n = val.size();
    vector<int> prev(capacity + 1, 0);

    for (int W = wt[0]; W <= capacity; W++)
        prev[W] = val[0];

    for (int ind = 1; ind < n; ind++)
    {
        for (int W = capacity; W >= 0; W--)
        {
            int notTake = 0 + prev[W];
            int take = INT_MIN;
            if (wt[ind] <= W)
            {
                take = val[ind] + prev[W - wt[ind]];
            }
            prev[W] = max(take, notTake);
        }
    }

    return prev[capacity];
};