#include<bits/stdc++.h>
using namespace std;
int minTimeToRot(vector<vector<int>>& grid, int n, int m)
{
    queue<pair<pair<int,int>,int>>q;
    int vis[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j] == 2){
                vis[i][j] = 2;
                q.push({{i,j},0});
            }
            else{
                vis[i][j] = 0;
            }
        }
    }

    int tm = 0;
    int drow[] = {-1,0,+1,0};
    int dcol[] = {0,1,0,-1};
    while(!q.empty()){
        int r = q.front().first.first;
        int c = q.front().first.second;
        int t = q.front().second;
        q.pop();
        tm = max(tm,t);
        for(int i=0;i<4;i++){
            int nrow = r+drow[i];
            int ncol = r+dcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[ncol][nrow] == 1 && vis[nrow][ncol] !=2){
                vis[nrow][ncol] = 2;
                q.push({{nrow,ncol},tm+1});
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j] == 1 && vis[i][j] != 2){
                return -1;
            }
        }
    }
    return tm;
}