#include<bits/stdc++.h>
using namespace std;
void union_array(vector<int> &arr,vector<int> &arr2,int n,int m){
    int i = 0;
    int j = 0;
    vector<int>temp;
    while(i<n && j<m){
        if(arr[i] <= arr2[j]){
            if(temp.size() == 0 || temp.back() != arr[i]){
                temp.push_back(arr[i]);
            }
            i++;
        }
        else{
            if(temp.size() == 0 || temp.back() != arr2[j]){
                temp.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(j<m){
        if(temp.size() == 0 || temp.back() != arr2[j]){
            temp.push_back(arr2[j]);
        }
        j++;
    }
    while(i<n){
       if(temp.size() == 0 || temp.back() != arr[i]){
            temp.push_back(arr[i]);
        }
        i++;
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
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>arr2(m);
    for(int i = 0;i<m;i++){
        cin>>arr2[i];
    }
    union_array(arr,arr2,n,m);
}