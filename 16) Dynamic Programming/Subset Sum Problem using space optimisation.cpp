#include <bits/stdc++.h>
using namespace std;

bool isSubsetSum(vector<int> &arr, int sum)
{
    int n = arr.size();
    int k = sum;
    vector<bool> prev(k + 1, 0);
    vector<bool> cur(k + 1, 0);
    prev[0] = cur[0] = true;
    if (arr[0] <= k)
        prev[arr[0]] = true;

    for (int ind = 1; ind < n; ind++)
    {
        for (int target = 1; target <= sum; target++)
        {
            bool notTake = prev[target];
            bool take = false;
            if (arr[ind] <= target)
                take = prev[target - arr[ind]];
            cur[target] = take | notTake;
        }
        prev = cur;
    }
    return prev[sum];
}