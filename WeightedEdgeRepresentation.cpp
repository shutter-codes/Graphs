#include<iostream>
#include <vector>
using namespace std;

int main() {
    int node, edge;
    cin >> node >> edge;

    // Graph representation using adjacency matrix
    // int adj[node+1][node+1] = {0};  // Initialize matrix with 0

    // for(int i = 0; i < edge; i++) {
    //     int u, v ,weight;
    //     cin >> u >> v >> weight;
    //     adj[u][v] = weight;
       
    // }

    // // Optional: To print the adjacency matrix
    // for(int i = 1; i <= node; i++) {
    //     for(int j = 1; j <= node; j++) {
    //         cout << adj[i][j] << " ";
    //     }
    //     cout << endl;
    // }

// using vector
    // vector<pair<int,int>> adj[node+1];
    // for(int i = 0; i < edge; i++) {
    //     int u, v , weight;
    //     cin >> u >> v >> weight; //
    //     adj[u].push_back({v,weight});
    // }

    //  for(int i = 1; i <= node; i++) {
    //     cout << i << " -> ";
    //     for(auto edge : adj[i]) {
    //         cout << "(" << edge.first << ", " << edge.second << ") ";
    //     }
    //     cout << endl;
    // }
    
    return 0;
}
