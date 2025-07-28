class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        queue<int> q;
        vector<bool> visited(adj.size());
        vector<int> ans;
        q.push(0);
        visited[0] = true;
        
        while (!q.empty()){
            int front = q.front();
            q.pop();
            ans.push_back(front);
            
            for (auto v: adj[front]){
                if (!visited[v]) {
                    q.push(v);
                    visited[v] = true;
                }
            }
        }
        
        return ans;
    }
};