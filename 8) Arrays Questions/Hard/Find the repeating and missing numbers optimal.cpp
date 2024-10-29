#include<bits/stdc++.h>
using namespace std;
vector<int>find(vector<int> &arr,int n){
    long long sn = (n*(n+1))/2;
    long long sn2 = (n*(n+1)*(2*n+1))/6;
    long long s = 0;
    long long s2 = 0;
    for(int i=0;i<n;i++){
        s += arr[i];
        s2 += (long long)arr[i]*(long long)arr[i];
    } 
    long long val1 = s - sn;//x - y
    long long val2 = s2 - sn2;
    val2 = val2/val1;//x + y
    long long x = (val1 + val2)/2;
    long long y = x - val1;
    return{(int)x,(int)y};
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(auto it:find(arr,n)){
        cout<<it<<" ";
    }
}