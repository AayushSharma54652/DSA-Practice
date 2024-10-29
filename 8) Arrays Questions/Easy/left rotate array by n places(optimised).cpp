#include<bits/stdc++.h>
using namespace std;
// For array input we can directly apply reverse function

/*void left_rotate(int arr[],int n,int k){
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
    reverse(arr,arr+n);
}
*/ 
// for vector array input

void left_rotate(vector<int> &arr,int k,int n){
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());
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