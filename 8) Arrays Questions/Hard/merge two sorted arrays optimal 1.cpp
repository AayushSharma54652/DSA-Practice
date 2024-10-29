#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr1,vector<int> &arr2,int n,int m){
    int left = n-1;
    int right = 0;
    while(left >=0 && right<m){
        if(arr1[left] > arr2[right]){
            swap(arr1[left],arr2[right]);
            left--;
            right++;
        }
        else{
            break;
        }
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
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
