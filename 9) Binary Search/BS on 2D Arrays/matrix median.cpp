#include<bits/stdc++.h>
using namespace std;
int upper_bound(vector<int> &arr,int n,int x){
    int low = 0;
    int high = n-1;
    int ans = n;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] > x){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
int countSmallEquals(vector<vector<int>> &matrix,int n,int m,int x){
    int cnt = 0;
    for(int i=0;i<n;i++){
        cnt += upper_bound(matrix[i],x,m);
    }
    return cnt;
}
int median(vector<vector<int>> &matrix,int n,int m){
    int low = INT_MAX;
    int high = INT_MIN;
    for(int i=0;i<n;i++){
        low = min(low,matrix[i][0]);
        high = max(high,matrix[i][m-1]);
    }
    int req = (n*m)/2;
    while(low <= high){
        int mid = (low+high)/2;
        if(countSmallEquals(matrix,n,m,mid) <= req)low = mid+1;
        else high = mid-1;
    }
    return low;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int target;
    cin>>target;
    vector<vector<int>>matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<median(matrix,n,m);
}