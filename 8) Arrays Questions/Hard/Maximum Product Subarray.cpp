#include<bits/stdc++.h>
using namespace std;
int max_product(vector<int> &arr,int n){
    int prefix = 1;
    int sufix = 1;
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        if(prefix == 0)prefix = 1;
        if(sufix == 0)sufix = 1;
        prefix = prefix * arr[i];
        sufix =  sufix * arr[n-i-1];
        ans = max(ans,max(prefix,sufix));
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<max_product(arr,n);
}