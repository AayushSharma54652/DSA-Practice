#include<bits/stdc++.h>
using namespace std;
int countPainter(vector<int> &arr,int n,int time){
    int painter = 1;
    long long painter_time = 0;
    for(int i=0;i<n;i++){
        if(painter_time + arr[i] <= time){
            painter_time += arr[i];
        }
        else{
            painter_time = arr[i];
            painter++;
        }
    }
    return painter;
}
int maxMinDistance(vector<int> &arr,int n,int k){
    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);
    if(k>n) return -1;
    while(low <= high){
        int mid = (low+high)/2;
        if(countPainter(arr,n,mid) > k){
            low =  mid+1;
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
    cout<<maxMinDistance(arr,n,k);
}