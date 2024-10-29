#include<bits/stdc++.h>
using namespace std;
int cons_ones(vector<int> &arr,int n){
    int count = 0;
    int maximum = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] == 1){
            count++;
            maximum = max(maximum,count);
        }
        else{
            count = 0;
        }
    }
    return maximum;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<cons_ones(arr,n);
}