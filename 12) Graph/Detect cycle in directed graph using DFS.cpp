#include<bits/stdc++.h>
using namespace std;

bool checkDfs(int node,vector<int> adj[],int vis[],int pathVis[]){
    vis[node] = 1;
    pathVis[node] = 1;
    //traverse for adjacent nodes

    for(auto it:adj[node]){
        //when the node is not visited
        if(!vis[it]){
            if (checkDfs(it,adj,vis,pathVis)==true)return true;
        }
        //if the node is previously visited and also visits on same path
        else if(pathVis[it]){
            return true;
        }
    }
    pathVis[node] = 0;
    return false;
}

bool isCyclic(int V,vector<int> adj[]){
    int vis[V] = {0};
    int pathVis[V] = {0};
    for(int i=0;i<V;i++){
        if(!vis[i]){
            if(checkDfs(i,adj,vis,pathVis) ==true)return true;
        }
    }
    return false;
}