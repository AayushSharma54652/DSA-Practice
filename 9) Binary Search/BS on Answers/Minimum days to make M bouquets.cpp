#include<bits/stdc++.h>
using namespace std;
bool possible(vector<int> &arr,int n,int day,int m,int k){
    int cnt = 0;
    int noofB = 0;
    for(int i=0;i<n;i++){
        if(arr[i] <= day){
            cnt++;
        }
        else{
            noofB += (cnt/k);
            cnt = 0;
        }
    }
    noofB += (cnt/k);
    return noofB >= m;
}
int minimum_days(vector<int> &arr,int n,int m,int k){
    long long val = m*1ll*k*1ll;
    if(val > n)return -1; 
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        maxi = max(maxi,arr[i]);
        mini = min(mini,arr[i]);
    }
    int low = mini;
    int high = maxi;
    while(low <= high){
        int mid = (low+high)/2;
        if(possible(arr,n,mid,m,k)){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return low;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int k;
    cin>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<minimum_days(arr,n,m,k);
}