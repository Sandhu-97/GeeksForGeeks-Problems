class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        queue<int> q;
        vector<bool> visited(adj.size(), false);
        
        q.push(0);
        vector<int> ans;
        visited[0] = true;
    
        while (!q.empty()){
            int front = q.front();
            q.pop();
            for (int v: adj[front]) {
                if (!visited[v]) {
                    q.push(v);
                    visited[v] = true;
                }
            }
            
            ans.push_back(front);
            
        }
        
        return ans;
    }
};