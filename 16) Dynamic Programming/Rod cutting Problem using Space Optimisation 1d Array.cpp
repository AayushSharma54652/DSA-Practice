#include <bits/stdc++.h>
using namespace std;

int cutRod(int price[], int n)
{
    vector<int> prev(n + 1, 0);

    for (int N = 0; N <= n; N++)
    {
        prev[N] = N * price[0];
    }

    for (int ind = 1; ind < n; ind++)
    {
        for (int N = 0; N <= n; N++)
        {
            int notTake = 0 + prev[N];
            int take = INT_MIN;
            int rodlength = ind + 1;

            if (rodlength <= N)
            {
                take = price[ind] + prev[N - rodlength];
            }
            prev[N] = max(take, notTake);
        }
    }
    return prev[n];
}