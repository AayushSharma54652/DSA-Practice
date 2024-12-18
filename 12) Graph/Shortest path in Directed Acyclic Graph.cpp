#include<bits/stdc++.h>
using namespace std;
void toposort(int node,vector<pair<int,int>> adj[],int vis[],stack<int> &st){
    vis[node] = 1;
    for(auto it:adj[node]){
        int v = it.first;
        if(!vis[v]){
            toposort(v,adj,vis,st);
        }
    }
    st.push(node);
}

vector<int>shortestPath(int N,int M,vector<vector<int>>& edges){
    vector<pair<int,int>>adj[N];
    for(int i=0;i<M;i++){
        int u = edges[i][0];
        int v = edges[i][1];
        int wt = edges[i][2];
        adj[u].push_back({v,wt});
    }
    //find the topological sort
    int vis[N]= {0};
    stack<int>st;
    for(int i=0;i<N;i++){
        if(!vis[i]){
            toposort();
        }
    }

    // Do the distance calculation

    vector<int>dis(N,INT_MAX);
    dis[0] = 0;
    while(!st.empty()){
        int node = st.top();
        st.pop();
        for(auto it:adj[node]){
            int v = it.first;
            int wt = it.second;
            if(dis[node]+wt < dis[v]){
                dis[v] = dis[node]+wt;
            }
        }
    }
    for(int i=0;i<N;i++){
        if(dis[i] == INT_MAX){
            dis[i] == -1;
        }
    }
    return dis;
}