#include<bits/stdc++.h>
using namespace std;
void reverseArray(vector<int> &arr , int n,int m){
    reverse(arr.begin()+m,arr.end());  
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 	
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
    reverseArray(arr,n,m);
}