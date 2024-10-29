#include<bits/stdc++.h>
using namespace std;
void leaders(vector<int> &arr,int n){
    vector<int>ans;
    int maxi = INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i] > maxi){
            ans.push_back(arr[i]);
        }
        maxi = max(maxi,arr[i]);
    }
    //sort(ans.begin(),ans.end()) if want leaders in sorted order
    //reverse(ans.begin(),ans.end()) If want in left to right order
    // print normal if want from right to left order
    
    for(auto it:ans){
        cout<<it<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leaders(arr,n);
}