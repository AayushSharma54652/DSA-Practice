#include<bits/stdc++.h>
using namespace std;
int search_element(vector<int> &arr,int n,int x){
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == x) return mid;
        //left side is sorted
        if(arr[low] <= arr[mid]){
            if(arr[low] <= x && x <= arr[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        else{
            if(arr[mid] <= x && x <= arr[high]){
                low = mid+1;
            }
            else{
                high = mid -1;
            }
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<search_element(arr,n,x);
}