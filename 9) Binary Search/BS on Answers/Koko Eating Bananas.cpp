#include<bits/stdc++.h>
using namespace std;
int find_max(vector<int> &arr,int n){
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        maxi = max(maxi,arr[i]);
    }
    return maxi;
}
int calculateTotalHours(vector<int> &arr,int n,int hr){
    int total = 0;
    for(int i = 0;i<n;i++){
        total += ceil((double)(arr[i])/(double)(hr));
    }
    return total;
}
int koko(vector<int> &arr,int n,int hrs){
    int low = 1;
    int high = find_max(arr,n);
    while(low <= high){
        int mid = (low+high)/2;
        int value = calculateTotalHours(arr,n,mid);
        if(value <= hrs){
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
    int hrs;
    cin>>hrs;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<koko(arr,n,hrs);
}