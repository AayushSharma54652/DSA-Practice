#include<bits/stdc++.h>
using namespace std;
int count_subarrays(vector<int> &arr,int n,int k){
    map<int,int>mpp;
    mpp[0] = 1;
    int count = 0;
    int presum = 0;
    for(int i=0;i<n;i++){
        presum += arr[i];
        int remain = presum - k;
        count += mpp[remain];
        mpp[presum] += 1;
    }
    return count;
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
    cout<<count_subarrays(arr,n,k);
}