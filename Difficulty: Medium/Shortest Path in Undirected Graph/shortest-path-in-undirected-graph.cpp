class Solution {
  public:
    // Function to find the shortest path from source to all other nodes
    vector<int> shortestPath(vector<vector<int>>& adj, int src) {
        // code here
        int n = adj.size();
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        pq.push({0, src});
        
        vector<int> dist(n, INT_MAX);
        
        dist[src]=0;
        
        while (!pq.empty()){
            int d = pq.top().first;
            int n = pq.top().second;
        
            pq.pop();
            
            for (auto v: adj[n]){
                if (d+1 < dist[v]){
                    dist[v] = d+1;
                    pq.push({dist[v], v});
                }
            }
        }
        
        for (int &i: dist){
            if (i==INT_MAX) i=-1;
            
        }
        
        return dist;
    }
};