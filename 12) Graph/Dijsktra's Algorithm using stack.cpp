#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
{
    set<pair<int,int>>st;
    vector<int>dist(V,1e9);
    dist[S] - 0;
    st.insert({0,S});
    while(!st.empty()){
        auto it = *(st.begin());
        int node = it.second;
        int dis = it.first;
        for(auto it: adj[node]){
            int adjnode = it[0];
            int edgewt = it[1];
            if(dis + edgewt < dist[adjnode]){
                if(dist[adjnode] != 1e9){
                    st.erase({dist[adjnode],adjnode});
                }
                dist[adjnode] = dis+edgewt;
                st.insert({dist[adjnode],adjnode});
            }
        }
    }
    return dist;
}