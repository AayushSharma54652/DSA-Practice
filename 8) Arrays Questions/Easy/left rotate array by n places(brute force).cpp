#include<bits/stdc++.h>
using namespace std;
void left_rotate(vector<int> &arr,int n,int k){
    k = k % n;
    vector<int>temp(k);
    //storing value in temp
    for(int i=0;i<n;i++){
        temp[i] = arr [i];
    }
    //shifting
    for(int i=k;i<n;i++){
        arr[i-k] = arr[i]; 
    }
    //put back temp
    for(int i = n-k;i<n;i++){
        arr[i] = temp[i-(n-k)];
    }

}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    left_rotate(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}