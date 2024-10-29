#include<bits/stdc++.h>
using namespace std;
int stock(vector<int> &arr,int n){
    int mini = arr[0];
    int profit = 0;
    for(int i = 0;i<n;i++){
        int cost = arr[i] - mini;
        profit = max(cost,profit);
        mini = min(mini,arr[i]);
    }
    return profit;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<stock(arr,n);
}