#include<iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int>dfs(int node, vector<int> adj[], int source) {
    // dfs traversal
    vector<int> dfs;
    // visited array initialse with 0
    vector<bool> vis(node+1, false);

    // stack ds to store the node
    stack<int> st;
    st.push(source); //pushing the first source node
    vis[source] = true; //marking it as 1
   

    while(!st.empty()) {
        int node = st.top();
        st.pop();
        dfs.push_back(node);
        for(auto it : adj[node]) {
            if(vis[it] ==false) {

                st.push(it);
                vis[it] = true;
            }
        }
    }
    return dfs;
}

int main(){
    return 0;
}