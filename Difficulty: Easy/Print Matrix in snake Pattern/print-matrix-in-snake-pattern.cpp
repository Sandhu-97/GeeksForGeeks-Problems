class Solution {
  public:
    vector<int> snakePattern(vector<vector<int> > matrix) {
        // code here
        vector<int> ans;
        int n = matrix.size();
        
        for (int i=0;i<n;i++){
            if (i%2!=0) reverse(matrix[i].begin(), matrix[i].end());
            
            for (auto elem: matrix[i]) ans.push_back(elem);
        }
        
        return ans;
    }
};