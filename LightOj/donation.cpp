#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
const int sz= 1e3;
vector<ll> grph[sz];
int spanningTree(int V, int E) {
  
    // Create an adjacency list representation of the graph
    vector<vector<int>> adj[V];
    
    // Fill the adjacency list with grph and their weights
    for (int i = 0; i < E; i++) {
        int u = grph[i][0];
        int v = grph[i][1];
        int wt = grph[i][2];
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
    }
    
    // Create a priority queue to store grph with their weights
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    
    // Create a visited array to keep track of visited vertices
    vector<bool> visited(V, false);
    
    // Variable to store the result (sum of edge weights)
    int res = 0;
    
    // Start with vertex 0
    pq.push({0, 0});
    
    // Perform Prim's algorithm to find the Minimum Spanning Tree
    while(!pq.empty()){
        auto p = pq.top();
        pq.pop();
        
        int wt = p.first;  // Weight of the edge
        int u = p.second;  // Vertex connected to the edge
        
        if(visited[u] == true){
            continue;  // Skip if the vertex is already visited
        }
        
        res += wt;  // Add the edge weight to the result
        visited[u] = true;  // Mark the vertex as visited
        
        // Explore the adjacent vertices
        for(auto v : adj[u]){
            // v[0] represents the vertex and v[1] represents the edge weight
            if(visited[v[0]] == false){
                pq.push({v[1], v[0]});  // Add the adjacent edge to the priority queue
            }
        }
    }
    
    return res;  // Return the sum of edge weights of the Minimum Spanning Tree
}
int main() {
    fastio;
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        for(ll i=0;i<n;i++) grph[i].clear();

        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < n; j++) {
                ll x;
                cin >> x;
                if(x){
                    grph[i].push_back(j);
                    grph[j].push_back(i);
                }

            }
        }

        cout<< "here " << spanningTree(n, n) << endl;
    }
    return 0;
}
