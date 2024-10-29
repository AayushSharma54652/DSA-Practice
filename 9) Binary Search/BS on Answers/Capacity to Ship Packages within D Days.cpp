#include<bits/stdc++.h>
using namespace std;
int total_days(vector<int> &arr,int n,int cap){
    int load = 0;
    int days = 1;
    for(int i=0;i<n;i++){
        if(load + arr[i] > cap){
            days +=1;
            load = arr[i];
        }
        else{
            load += arr[i];
        }
    }
    return days;
}
int leastWeightCapacity(vector<int> &arr,int n,int days){
    int maxi = INT_MIN;
    int sum = 0;
    for(int i=0;i<n;i++){
        maxi = max(maxi,arr[i]);
        sum += arr[i];
    }
    int low = maxi;
    int high = sum;
    while(low <= high){
        int mid = (low+high)/2;
        int noofDays = total_days(arr,n,mid);
        if(noofDays <= days){
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
    int days;
    cin>>days;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<leastWeightCapacity(arr,n,days);
}