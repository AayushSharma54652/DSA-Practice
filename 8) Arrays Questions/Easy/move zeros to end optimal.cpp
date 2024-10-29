#include<bits/stdc++.h>
using namespace std;
void move_zeros(vector<int> &arr,int n){
    int j = -1;
    for(int i = 0;i<n;i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    if (j == -1){
        for(auto it:arr){
            cout<<it<<" ";
        }
    }
    for(int i = j+1;i<n;i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    move_zeros(arr,n);
    for(auto it:arr){
        cout<<it<<" ";
    }
}