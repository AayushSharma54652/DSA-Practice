#include<bits/stdc++.h>
using namespace std;
void intersection(vector<int> &arr,vector<int> &arr2,int n,int m){
    int vis[m] ={0};
    vector<int>temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i] == arr2[j] && vis[j] == 0){
                temp.push_back(arr[i]);
                vis[j] = 1;
                break;
            }
            if(arr2[j]>arr[i]) break;
        }
    }
    for(auto it:temp){
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