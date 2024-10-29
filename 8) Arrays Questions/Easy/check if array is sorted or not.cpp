#include<bits/stdc++.h>
using namespace std;
bool is_sorted(int n,vector<int> &arr){
    for(int i=1;i<n;i++){
        if(arr[i] >= arr[i-1]){
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int a;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    a = is_sorted(n,arr);
    if(a){
        cout<<"Sorted";
    }
    else{
        cout<<"Not sorted";
    }
}