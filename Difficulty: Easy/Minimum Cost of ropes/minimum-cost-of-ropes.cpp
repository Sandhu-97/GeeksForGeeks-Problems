class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for (int i: arr) pq.push(i);
        
        int cost=0;
        
        while (!pq.empty()){
            if (pq.size()<=1) return cost;
            int top1 = pq.top(); pq.pop();
            int top2 = pq.top(); pq.pop();
            cost += top1+top2;
            pq.push(top1+top2);
        }
        return cost;
    }
};