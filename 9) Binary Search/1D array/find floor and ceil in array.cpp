#include<bits/stdc++.h>
using namespace std;
int floor(vector<int> &arr,int n,int x){
    int low = 0;
    int high = n-1;
    int ans = -1;
    while (low<=high){
        int mid = (low+high)/2;
        if(arr[mid] <=x){
            ans = arr[mid];
            low = mid+1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}
int ceil(vector<int> &arr,int n,int x){
    int low = 0;
    int high = n-1;
    int ans = -1;
    while (low<=high){
        int mid = (low+high)/2;
        if(arr[mid] >= x){
            ans = arr[mid];
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}
pair<int,int>get_both(vector<int>&arr,int n,int x){
    int f = floor(arr,n,x);
    int c = ceil(arr,n,x);
    return {f,c};
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
    pair<int,int>ans = get_both(arr,n,x);
    cout<<"Floor "<<ans.first<<" "<<"Ceil "<<ans.second;
}