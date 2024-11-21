#include <bits/stdc++.h>
using namespace std;

int f(int ind, int N, int price[])
{
    if (ind == 0)
    {
        return N * price[0];
    }

    int notTake = 0 + f(ind - 1, N, price);
    int take = INT_MIN;
    int rodlength = ind + 1;
    if (rodlength <= N)
    {
        take = price[ind] + f(ind, N - rodlength, price);
    }

    return max(take, notTake);
}
int cutRod(int price[], int n)
{
    return f(n - 1, n, price);
}