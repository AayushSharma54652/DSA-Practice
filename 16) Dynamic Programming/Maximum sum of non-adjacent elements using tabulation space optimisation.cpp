#include<bits/stdc++.h>
using namespace std;
int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();
    int prev = nums[0];
    int prev2 = 0;
    for(int i=1;i<n;i++){
        int take = nums[i];
        if(i > 1)take += prev2;
        int nottake = 0 + prev;
        int curi = max(take,nottake);
        prev2 = prev;
        prev = curi;
    }
    return prev;
}