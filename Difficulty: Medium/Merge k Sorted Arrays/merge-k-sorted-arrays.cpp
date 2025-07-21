class Solution {
  public:
    // Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K) {
        // code here
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for (auto i: arr){
            for (auto j: i) pq.push(j);
        }
        
        vector<int> ans;
        while (!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
        }
        return ans;
    }
};