class Solution {
  public:
  
    void dfs(int u, vector<vector<int>>& adj, vector<bool>& visited, vector<int>& ans){
        if (visited[u]) return;
        ans.push_back(u);
        visited[u] = true;
        for (auto v: adj[u]){
            if (!visited[v]){
                dfs(v, adj, visited, ans);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<int> ans;
        vector<bool> visited(adj.size());
        dfs(0, adj, visited, ans);
        
        return ans;
        
    }
};