#include<bits/stdc++.h>
using namespace std;
bool search(vector<vector<int>> &mat,int target,int n,int m){
    int row = 0;
    int col = m-1;
    while(row < n && col >= 0){
        if(mat[row][col] == target)return true;
        else if(mat[row][col] < target)row ++;
        else col--;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int target;
    cin>>target;
    vector<vector<int>>mat(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    cout<<search(mat,target,n,m);
}