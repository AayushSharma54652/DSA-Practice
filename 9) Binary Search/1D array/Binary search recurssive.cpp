#include<bits/stdc++.h>
using namespace std;
int binary_Search(vector<int> &arr,int n,int target,int low,int high){
    if(low>high) return -1;
    int mid = (low+high)/2;
    if(arr[mid] == target) return mid;
    else if(target > arr[mid]) return binary_Search(arr,n,target,mid+1,high);
    return binary_Search(arr,n,target,low,mid-1); 
}

int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<binary_Search(arr,n,target,0,n-1);
}