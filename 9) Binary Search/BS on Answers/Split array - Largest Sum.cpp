#include<bits/stdc++.h>
using namespace std;
int countPartitions(vector<int> &arr,int n,int maxSum){
    int partitions = 1;
    long long subarrraySum = 0;
    for(int i=0;i<n;i++){
        if(arr[i] + subarrraySum <= maxSum){
            subarrraySum += arr[i];
        }
        else{
            partitions++;
            subarrraySum = arr[i];
        }
    }
    return partitions;
}
int largestSubarraySumMinimized(vector<int> &arr,int n,int k){
    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);
    if(k>n)return -1;
    while(low <= high){
        int mid = (low+high)/2;
        if(countPartitions(arr,n,mid) > k){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return low;
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<largestSubarraySumMinimized(arr,n,k);
}