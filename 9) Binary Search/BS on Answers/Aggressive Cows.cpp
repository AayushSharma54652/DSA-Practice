#include<bits/stdc++.h>
using namespace std;
bool possible(vector<int> &arr,int dist,int n,int cows){
    int cntCows = 1;
    int last = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] - last >= dist){
            last = arr[i];
            cntCows++;
        }
        if(cntCows >= cows)return true;
    }
    return false;
}
int aggressiveCows(vector<int> &arr,int n,int cows){
    sort(arr.begin(),arr.end());
    int low = 1;
    int high = arr[n-1] - arr[0];
    while(low <= high){
        int mid = (low+high)/2;
        if(possible(arr,mid,n,cows)==true){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return high;
}
int main(){
    int n;
    cin>>n;
    int cows;
    cin>>cows;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<aggressiveCows(arr,n,cows);
}