#include<bits/stdc++.h>
using namespace std;
double median(vector<int> &arr,vector<int> &arr2,int n,int m){
    vector<int>arr3;
    int i=0;int j=0;
    while(i<n && j<m){
        if(arr[i] < arr2[j]){
            arr3.push_back(arr[i++]);
        }
        else{
            arr3.push_back(arr2[j++]);
        }
    }

    while(i<n){
        arr3.push_back(arr[i++]);
    }
    while(j<m){
        arr3.push_back(arr2[j++]);
    }
    int n1 = n+m;
    if(n1%2 == 1){
        return (double)arr3[n1/2];
    }
    double median = ((double)arr3[n1 / 2] + (double)arr3[(n1 / 2) - 1]) / 2.0;
    return median;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>arr2(m);
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    cout<<median(arr,arr2,n,m);
}