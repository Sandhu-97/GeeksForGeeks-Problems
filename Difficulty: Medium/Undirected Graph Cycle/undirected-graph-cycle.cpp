class Solution {
  public:
  
    bool isCycleBFS(int u, vector<vector<int>>& adj, vector<bool>& visited){
        queue<pair<int, int>> q;
        q.push({u, -1});
        visited[u] = true;
        
        while (!q.empty()){
            pair<int, int> front = q.front();
            q.pop();
            
            int node = front.first;
            int parent = front.second;
            
            for (auto v: adj[node]){
                if (v==parent) continue;
                if (visited[v]) return true;
                q.push({v, node});
                visited[v] = true;
            }
        }
        return false;
        
        
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(V);
        
        for (auto edge: edges){
            int u = edge[0];
            int v = edge[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
            
        }
        
        
        vector<bool> visited(V, false);
        
        for (int i=0;i<V;i++){
            if (!visited[i] && isCycleBFS(i, adj, visited)) return true;
        }
        return false;
        
    }
};