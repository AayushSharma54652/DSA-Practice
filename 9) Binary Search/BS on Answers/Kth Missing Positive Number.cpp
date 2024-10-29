#include<bits/stdc++.h>
using namespace std;
int kth_missing(vector<int> &arr,int n,int k){
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = (low+high)/2;
        int missing = arr[mid]-(mid+1);
        if(missing < k){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return low+k;
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
    cout<<kth_missing(arr,n,k);
}