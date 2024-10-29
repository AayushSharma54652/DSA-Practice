#include<bits/stdc++.h>
using namespace std;
int consecutive_sequence(vector<int> &arr,int n){
    if(n == 0) return 0;
    sort(arr.begin(),arr.end());
    int cnt = 0;
    int longest = 1;
    int lastsmaller = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]-1 == lastsmaller){
            cnt += 1;
            lastsmaller = arr[i];
        }
        else if(arr[i] != lastsmaller){
            cnt = 1;
            lastsmaller = arr[i];
        }
        longest = max(longest,cnt);
    }
    return longest;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<consecutive_sequence(arr,n);
}