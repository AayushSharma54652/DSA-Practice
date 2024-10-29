#include<bits/stdc++.h>
using namespace std;

void left_rotate(vector<int> &arr,int k,int n){
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    left_rotate(arr,k,n);
    for(auto it:arr){
        cout<<it<<" ";
    }
}