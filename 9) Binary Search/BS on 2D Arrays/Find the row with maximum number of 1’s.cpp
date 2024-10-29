#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int> &arr,int n,int x){
    int low = 0;
    int high = n-1;
    int ans = n;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] >= x){
            high = mid-1;
            ans = mid;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
int max_ones(vector<vector<int>>&matrix,int n,int m){
    int index = -1;
    int cnt_max = 0;
    for(int i=0;i<n;i++){
        int cnt_ones = m-lower_bound(matrix[i],m,1);
        if(cnt_ones > cnt_max){
            cnt_max = cnt_ones;
            index = i;
        }
    }
    return index;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<max_ones(matrix,n,m);
}