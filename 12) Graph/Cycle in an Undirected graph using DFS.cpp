#include<bits/stdc++.h>
using namespace std;

bool detectCycle(int node,int parent,int vis[],vector<int>adj[]){
    vis[node] = 1;
    for(auto adjNode:adj[node]){
        if(!vis[adjNode]){
            if(detectCycle(adjNode,node,vis,adj) == true)return true;
            else if(adjNode != parent){
                return true;
            }
        }
    }
    return false;
}

bool UsingDfs(int V,vector<int>adj[]){
    int vis[V] = {0};
    for(int i=0;i<V;i++){
        if(!vis[i]){
            if(detectCycle(i,-1,vis,adj) == true) return true;
        }

    }
    return false;
}