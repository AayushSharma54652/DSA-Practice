#include <bits/stdc++.h>
using namespace std;

int f(int i, int j, vector<int> &arr)
{
    if (i == j)
        return 0;
    int mini = 1e9;
    for (int k = i; k < j; k++)
    {
        int steps = arr[i - 1] * arr[k] * arr[j] + f(i, k, arr) + f(k + 1, j, arr);
        mini = min(mini, steps);
    }
    return mini;
}
int matrixMultiplication(vector<int> &arr)
{
    int n = arr.size();
    return f(1, n - 1, arr);
}