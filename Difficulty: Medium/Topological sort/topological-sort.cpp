class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> adj(V);
        vector<int> indegree(V, 0);
        vector<int> ans;
        queue<int> q;
        
        for (auto edge: edges){
            adj[edge[0]].push_back(edge[1]);
        }
        
        for (int u=0;u<V;u++){
            for (int v: adj[u]){
                indegree[v]++;
            }
        }
        
        for (int i=0;i<V;i++){
            if (indegree[i]==0) q.push(i);
        }
        
        while (!q.empty()){
            int front = q.front();
            q.pop();
            ans.push_back(front);
            
            for (int v: adj[front]){
                indegree[v]--;
                if (indegree[v]==0) q.push(v);
            }
        }
        
        return ans;
        
    }
};