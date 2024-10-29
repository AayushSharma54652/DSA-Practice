#include<bits/stdc++.h>
using namespace std;
void intersection(vector<int> &arr,vector<int> &arr2,int n,int m){
    int i=0;
    int j=0;
    vector<int>ans;
    while(i<n && j<m){
        if(arr[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]<arr[i]){
            j++;
        }
        else{
            ans.push_back(arr[i]);
            i++;
            j++;
        }
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>arr2(m);
    for(int i =0;i<m;i++){
        cin>>arr2[i];
    }
    intersection(arr,arr2,n,m);
}