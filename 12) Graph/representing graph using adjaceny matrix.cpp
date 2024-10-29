#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int adj[n+1][n+1] = {0}; // Initialize all elements to 0

    // Reading edges and updating the adjacency matrix
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    // Printing the adjacency matrix
    for(int i = 1; i <= n; i++) { // Loop from 1 to n
        for(int j = 1; j <= n; j++) { // Loop from 1 to n
            cout << adj[i][j] << " ";
        }
        cout << endl; // Print newline after each row
    }

    return 0;
}
