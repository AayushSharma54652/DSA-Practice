#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<vector<int>>ans;
    sort(nums.begin(),nums.end());
    for(int i = 0;i<n;i++){
        if(i > 0 && nums[i-1]==nums[i])continue;
        for(int j = i+1;j<n;j++){
            if(j>i+1 && nums[j-1] == nums[j])continue;
            int k = j+1;
            int l = n-1;
            while(k<l){
                long long sum = nums[i]+nums[j];
                sum+= nums[k];
                sum+= nums[l];
                if(sum>target){
                    l--;
                }
                else if(sum == target){
                    vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while(k<l && nums[k-1] == nums[k])k++;
                    while(k<l && nums[l+1]==nums[l])l--;
                }
                else if(sum<target){
                    k++;
                }
            }
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
}