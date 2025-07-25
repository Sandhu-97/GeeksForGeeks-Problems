class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Code here
        vector<vector<vector<int>>> adj(n+1);
        for (auto edge: edges){
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];
            
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
        int src=1, dst=n;
        
        priority_queue<pair<int, int>, vector<pair<int,int>>, greater<>> pq;
        pq.push({0, src});
        
        vector<int> dist(n+1, INT_MAX);
        dist[src]=0;
        
        vector<int> parent(n+1, -1);
        
        
        while (!pq.empty()){
            int u = pq.top().second;
            int d = pq.top().first;
            pq.pop();
            
            for (auto vec: adj[u]){
                int v = vec[0];
                int w = vec[1];
                
                if (dist[v] > w+d){
                    dist[v] = w+d;
                    pq.push({dist[v], v});
                    parent[v] = u;
                }
            }
        }
        
        vector<int> path;
        
        
        if (dist[dst]==INT_MAX) return {-1};
        while (src!=dst){
            path.push_back(dst);
            dst = parent[dst];
        }
        path.push_back(src);
        
        int total_weight = dist[n];
        path.push_back(total_weight);
        reverse(path.begin(), path.end());
        
        return path;
    }
};