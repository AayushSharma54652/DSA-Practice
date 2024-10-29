#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr1,vector<int>&arr2,int n,int m){
    vector<int>arr3(n+m);
    int left = 0;
    int right = 0;
    int index = 0;
    while(left < n && right < m){
        if(arr1[left] <= arr2[right]){
            arr3[index] = arr1[left];
            index++;
            left++;
        }
        else{
            arr3[index] = arr2[right];
            index++;
            right++;
        }
    }
    while(left < n){
        arr3[index++] = arr1[left++];
    }
    while(right < m){
        arr3[index++] = arr2[right++];
    }

    for(int i=0;i<n+m;i++){
        if(i < n){
            arr1[i] = arr3[i];
        }
        else{
            arr2[i-n] = arr3[i];
        }
    }
    
    for(int i = 0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i = 0;i<m;i++){
        cout<<arr2[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int>arr1(n);
    vector<int>arr2(m);
    for(int i = 0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i = 0;i<m;i++){
        cin>>arr2[i];
    }
    merge(arr1,arr2,n,m);
}
