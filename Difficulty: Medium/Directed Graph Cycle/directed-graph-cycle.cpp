class Solution {
  public:
  
    bool dfs(int u, vector<vector<int>>& adj, vector<bool>& visited, vector<bool>& recStack){
        visited[u]=true;
        recStack[u]=true;
        
        for (auto v: adj[u]){
            if (!visited[v]) {
                if (dfs(v, adj, visited, recStack)) return true;
            }
            else if (recStack[v]) return true;
        }
        recStack[u] = false;
        return false;
    }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<vector<int>> adj(V);
        
        for (auto edge: edges){
            int u = edge[0];
            int v = edge[1];
            
            adj[u].push_back(v);
        }
        
        vector<bool> visited(V, false), recStack(V, false);
        
        for (int i=0;i<V;i++){
            if(!visited[i] && dfs(i, adj, visited, recStack)) return true;   
        }
        
        return false;
    }
};