#include<bits/stdc++.h>
using namespace std;
int majority_elements(vector<int> &arr,int n){
    int cnt = 0;
    int el;
    for(int i=0;i<n;i++){
        if(cnt == 0){
            cnt++;
            el = arr[i];
        }
        else if(arr[i] = el){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1 = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == el){
            cnt1++;
        }
        if(cnt1 > n/2){
            return el;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<majority_elements(arr,n);
}