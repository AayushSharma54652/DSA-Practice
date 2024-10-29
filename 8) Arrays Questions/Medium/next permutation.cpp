#include<bits/stdc++.h>
using namespace std;
void next_permutation(vector<int> &arr,int n){
    int index = -1;
    for(int i=n-2;i>=0;i--){
        if(arr[i] < arr[i+1]){
            index = i;
            break;
        }
    }
    if(index == -1){
        reverse(arr.begin(),arr.end());
        for(auto it:arr){
        cout<<it<<" ";
        }
    }
    for(int i=n-1;i>index;i--){
        if(arr[i] > arr[index]){
            swap(arr[i],arr[index]);
            break;
        }
    }
    reverse(arr.begin()+index+1,arr.end());
    for(auto it:arr){
        cout<<it<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    next_permutation(arr,n);

}