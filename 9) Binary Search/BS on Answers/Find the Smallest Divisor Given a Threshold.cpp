#include<bits/stdc++.h>
using namespace std;
int total(vector<int> &arr,int d,int n){
    int total = 0;
    for(int i=0;i<n;i++){
        total += ceil((double)(arr[i])/(double)(d));
    }
    return total;
}
int smallest_divisor(vector<int> &arr,int n,int limit){
    int low = 1;
    int maxi = INT_MIN;
    for(int i = 0;i<n;i++){
        maxi = max(maxi,arr[i]);
    }
    int high = maxi;
    if(n > limit)return -1;
    while(low <= high){
        int mid = (low+high)/2;
        int value = (total(arr,mid,n));
        if(value <= limit){
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
    int limit;
    cin>>limit;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<smallest_divisor(arr,n,limit);
}