#include<bits/stdc++.h>
using namespace std;
void union_array(vector<int> &arr,vector<int> &arr2,int n,int m){
    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    for(int i=0;i<m;i++){
        st.insert(arr2[i]);
    }
    vector<int>temp;
    for(auto it:st){
        temp.push_back(it);
    }
    for(auto it2:temp){
        cout<<it2<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int>arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>arr2(m);
    for(int i = 0;i<m;i++){
        cin>>arr2[i];
    }
    union_array(arr,arr2,n,m);
}