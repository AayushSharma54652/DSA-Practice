#include <bits/stdc++.h>
using namespace std;

vector<int> toposort(int V, vector<int> adj[])
{
    int indegree[V] = {0};
    for (int i = 0; i < V; i++)
    {
        for (auto it : adj[i])
        {
            indegree[it]++;
        }
    }
    queue<int> q;
    for (int i = 0; i < V; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }
    vector<int> ans;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for (auto it : adj[node])
        {
            indegree[it]--;
            if (indegree[it] == 0)
            {
                q.push(it);
            }
        }
    }
    return ans;
}

string findOrder(string dict[],int N,int K){
    vector<int>adj[K];
    for(int i=0;i<K;i++){
        string s1 = dict[i];
        string s2 = dict[i+1];
        int len = min(s1.size(),s2.size());
        for(int ptr = 0;ptr<len;ptr++){
            if(s1[ptr]!=s2[ptr]){
                adj[s1[ptr] - 'a'].push_back(s2[ptr] - 'a');
                break;
            }
        }
    }
    vector<int>topo = toposort(K,adj);
    string ans = "";
    for(auto it:topo){
        ans = ans + char(it + 'a');
    }
    return ans;
}