class Solution {
  public:
  
    void dfs(int u, vector<vector<int>>& adj, vector<int>& ans, vector<bool>& visited){
        if (visited[u]) return;
        
        
        visited[u] = true;
        ans.push_back(u);
        for (auto v: adj[u]){
            if (!visited[v]){
                dfs(v, adj, ans, visited);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<int> ans;
        vector<bool> visited(adj.size(), false);
        dfs(0, adj, ans, visited);
        return ans;
    }
};