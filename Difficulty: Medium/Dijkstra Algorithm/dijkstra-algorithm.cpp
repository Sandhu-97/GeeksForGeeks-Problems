// User Function Template
class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        vector<vector<vector<int>>> adj(V);
        
        for (auto edge: edges){
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];
            
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        vector<int> dist(V, INT_MAX);
        
        dist[src] = 0;
        pq.push({0, src});
        
        while(!pq.empty()){
            auto top = pq.top();
            int d = top.first;
            int u = top.second;
            pq.pop();
            
            for (auto vec: adj[u]){
                int v = vec[0];
                int w = vec[1];
                if (dist[v] > w+d) {
                    dist[v] = w+d;
                    pq.push({dist[v], v});
                }
            }
        }
        
        return dist;
    }
};