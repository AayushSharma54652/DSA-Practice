#include<bits/stdc++.h>
using namespace std;
int lower(vector<int>&arr,int n,int x){
    int low =0;
    int high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] >= x){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
    
}
int upper(vector<int>&arr,int n,int x){
    int low =0;
    int high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] > x){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
    
}
pair<int,int>getboth(vector<int> &arr,int n,int x){
    int f = lower(arr,n,x);
    int l = upper(arr,n,x) - 1;
    if(f == n || arr[f] != x) return{-1,-1};
    return{f,l};
}
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pair<int,int>ans = getboth(arr,n,x);
    cout<<ans.first<<" "<<ans.second<<endl;
}