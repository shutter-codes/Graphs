#include<iostream>
#include <vector>
#include <queue>
using namespace std;


vector<int>bfs(int node, vector<int> adj[], int source) {

    // bfs traversal
    vector<int> bfs;
    // visited array initialse with 0
    vector<bool> vis(node+1, false);

    // queue ds to store the node
    queue<int> q;
    q.push(source); //pushing the first source node
    vis[source] = true; //marking it as 1
   

    while(!q.empty()) {
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it : adj[node]) {
            if(vis[it] ==false) {

                q.push(it);
                vis[it] = true;
            }
        }
    }
    return bfs;
}

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
