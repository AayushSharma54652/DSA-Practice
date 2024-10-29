#include<bits/stdc++.h>
using namespace std;

class Solution {
    int timer = 1;
    
    void dfs(int node, int parent, vector<int> adj[], vector<int> &vis, int tin[], int low[], vector<pair<int, int>> &bridges) {
        vis[node] = 1;
        tin[node] = low[node] = timer;
        timer++;
        
        for (auto it : adj[node]) {
            if (it == parent) continue;
            if (!vis[it]) {
                dfs(it, node, adj, vis, tin, low, bridges);
                low[node] = min(low[node], low[it]);
                if (low[it] > tin[node]) {
                    bridges.push_back({node, it});
                }
            } else {
                low[node] = min(low[node], tin[it]);
            }
        }
    }
    
public:
    // Function to find if the given edge is a bridge in graph.
    int isBridge(int V, vector<int> adj[], int c, int d) {
        vector<int> vis(V, 0);
        vector<pair<int, int>> bridges;
        int tin[V]; 
        int low[V];
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                dfs(i, -1, adj, vis, tin, low, bridges);
            }
        }
        for (auto &bridge : bridges) {
            if ((bridge.first == c && bridge.second == d) || (bridge.first == d && bridge.second == c)) {
                return 1;
            }
        }
        return 0;
    }
};