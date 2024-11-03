#include <bits/stdc++.h>
using namespace std;

bool f(int ind, int target, vector<int> &arr)
{
    if (target == 0)
        return true;
    if (ind == 0)
        return (arr[0] == target);

    bool notTake = f(ind - 1, target, arr);
    bool take = false;
    if (arr[ind] <= target)
        take = f(ind - 1, target - arr[ind], arr);

    return take | notTake;
}

bool isSubsetSum(vector<int> &arr, int sum)
{
    int n = arr.size();
    return f(n - 1, sum, arr);
}