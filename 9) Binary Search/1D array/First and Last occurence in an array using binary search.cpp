#include<bits/stdc++.h>
using namespace std;
int first(vector<int>&arr,int n,int x){
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == x){
            ans = mid;
            high = mid - 1;
        }
        else if(arr[mid] < x){
            low = mid+1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}
int last(vector<int>&arr,int n,int x){
    int low =0;
    int high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == x){
            ans = mid;
            low = mid+1;
        }
        else if(arr[mid] < x){
            low = mid + 1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
    
}
pair<int,int>getboth(vector<int> &arr,int n,int x){
    int f = first(arr,n,x);
    int l = last(arr,n,x);
    if(f == -1) return{-1,-1};
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