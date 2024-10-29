#include<bits/stdc++.h>
using namespace std;
int appear_once(vector<int> &arr,int n){
    int ans=0;
    for(int i =0;i<n;i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<appear_once(arr,n);
}