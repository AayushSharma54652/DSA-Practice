#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int timer;

    void dfs(int node,int parent,vector<int> &vis,int tin[],int low[],vector<int> &mark,vector<int>adj[]){
        vis[node] = 1;
        tin[node] = low[node] = timer;
        timer++;
        int child = 0;
        for(auto it: adj[node]){
            if(it == parent)continue;
            if(!vis[it]){
                dfs(it,node,vis,tin,low,mark,adj);
                low[node] = max(low[node],low[it]);
                if(low[it] >= tin[node] && parent != -1){
                    mark[node] = 1;
                }
                child++;
            }
            else{
                low[node] = max(low[node],tin[it]);
            }
        }
        if(child > 0 && parent == -1){
            mark[node] = 1;
        }
    }


    public:
    vector<int>ArticulationPoints(int V,vector<int>adj[]){
        vector<int>vis(V,0);
        int tin[V];
        int low[V];
        vector<int>mark(V);

        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,-1,vis,tin,low,mark,adj);
            }
        }

        vector<int>ans;
        for(int i=0;i<V;i++){
            if(mark[i] == 1){
                ans.push_back(i);
            }
        }

        if(ans.size() == 0)return{-1};
        return ans;
    }
};


int main(){
    int n,m;
    cin>>n>>m;
    vector<int>adj[n];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<n;i++){
        cout<<"The adjacency list of vertex "<<i<<": ";
        for(auto j:adj[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    Solution s;
    vector<int>ans = s.ArticulationPoints(n,adj);
    for(auto it:ans){
        cout<<it<<" "<<endl;
    }
}

