// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

vector<int>bfsTraversal(int &n,vector<vector<int>>&adj){
    int vis[n] = {0};
    vis[0] = 1;
    queue<int>q;
    q.push(0);
    vector<int>bfs;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it:adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
}

int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    for(int i=0;i<n;i++){
        cout<<"The adjacency list of vertex "<<i<<": ";
        for(auto j:adj[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    vector<int>ans = bfsTraversal(n,adj);
    for(auto it:ans){
        cout<<it<<" ";
    }
}