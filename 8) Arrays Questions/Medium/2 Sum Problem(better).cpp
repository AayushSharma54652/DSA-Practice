#include<bits/stdc++.h>
using namespace std;
vector<int>two_sum(vector<int> &arr,int n,int target){
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        int a = arr[i];
        int more = target - a;
        if(mpp.find(more) !=mpp.end()){
            return {mpp[more], i};
        }
        mpp[a] = i;
    }
    return {-1,-1};
}
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(auto it:two_sum(arr,n,target)){
        cout<<it<<" ";
    }
}