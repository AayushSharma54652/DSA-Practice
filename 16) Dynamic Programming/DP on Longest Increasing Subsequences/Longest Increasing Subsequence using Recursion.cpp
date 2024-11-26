#include <bits/stdc++.h>
using namespace std;

int f(int index, int prev_index, vector<int> &nums, int &n)
{
    if (index == n)
        return 0;
    int notTake = 0 + f(index + 1, prev_index, nums, n);
    int take = 0;
    if (prev_index == -1 || nums[index] > nums[prev_index])
    {
        take = 1 + f(index + 1, index, nums, n);
    }
    return max(notTake, take);
}
int lengthOfLIS(vector<int> &nums)
{
    int n = nums.size();
    return f(0, -1, nums, n);
}