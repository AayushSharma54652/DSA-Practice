#include<bits/stdc++.h>
using namespace std;
string two_sum(vector<int> &arr,int n,int target){
    int left = 0;
    int right = n-1;
    sort(arr.begin(),arr.end());
    while(left<right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            return "YES";
        }
        else if(sum<target) left++;
        else right--;
    }
    return "NO";
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
    cout<<two_sum(arr,n,target);
}