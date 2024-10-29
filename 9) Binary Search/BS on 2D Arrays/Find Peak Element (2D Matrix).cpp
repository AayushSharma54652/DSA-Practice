#include<bits/stdc++.h>
using namespace std;
int find_max(vector<vector<int>> &mat,int n,int m,int col){
    int maxValue = -1;
    int index = -1;
    for(int i=0;i<n;i++){
        if(mat[i][col] > maxValue){
            maxValue = mat[i][col];
            index = i;
        }
    }
    return index;
}
vector<int>peak_element(vector<vector<int>> &mat,int n,int m){
    int low = 0;
    int high = m-1;
    while(low <= high){
        int mid = (low+high)/2;
        int maxRowIndex = find_max(mat,n,m,mid);
        int left = mid - 1 >= 0 ? mat[maxRowIndex][mid-1] : -1;
        int right = mid + 1 < m ? mat[maxRowIndex][mid+1] : -1;
        if(mat[maxRowIndex][mid] > left && mat[maxRowIndex][mid] > right){
            return {maxRowIndex,mid};
        }
        else if(mat[maxRowIndex][mid] < left){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return {-1,-1};
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<vector<int>>mat(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    for(auto it:peak_element(mat,n,m)){
        cout <<it<<" ";
    }
}