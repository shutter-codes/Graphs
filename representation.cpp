#include<iostream>
#include <vector>
using namespace std;

int main() {
    int node, edge;
    cin >> node >> edge;

    // Graph representation using adjacency matrix
    // int adj[node+1][node+1] = {0};  // Initialize matrix with 0

    // for(int i = 0; i < edge; i++) {
    //     int u, v;
    //     cin >> u >> v;
    //     adj[u][v] = 1;
    //     adj[v][u] = 1;
    // }

    // // Optional: To print the adjacency matrix
    // for(int i = 1; i <= node; i++) {
    //     for(int j = 1; j <= node; j++) {
    //         cout << adj[i][j] << " ";
    //     }
    //     cout << endl;
    // }

// using vector
    vector<int> adj[node+1];
    for(int i = 0; i < edge; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Optional: To print the adjacency list
    for(int i = 1; i <= node; i++) {
        cout << i << " -> ";
        for(int j = 0; j < adj[i].size(); j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
