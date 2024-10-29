#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>&arr, int n) {
    int sum = (n * (n + 1))/2;
    int s2 = 0;
    for(int i = 0;i<n;i++){
        s2 += arr[i];
    }
    int ans = sum - s2;
    return ans;
}
int missingNumber2(vector<int>&arr, int n) {
    int xor1=0;
    int xor2=0;
    for(int i = 0;i<n-1;i++){
        xor2=xor2^arr[i];
        xor1=xor1^i+1;
    }
    xor1=xor1^n;
    return xor1^xor2;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<missingNumber(arr,n);
}