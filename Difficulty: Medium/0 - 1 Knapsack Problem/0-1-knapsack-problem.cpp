class Solution {
  public:
  
  
    int solve(int W, vector<int>& val, vector<int>& wt, int i, vector<vector<int>>& dp){
        if (W==0 || i<0) return 0;
        
        
        if (dp[i][W]!=-1) return dp[i][W];
        if (wt[i]<=W){
            return dp[i][W]=max(val[i] + solve(W-wt[i], val, wt, i-1, dp), solve(W, val, wt, i-1, dp));
        }
        else if (wt[i]>W){
            return dp[i][W]=solve(W, val, wt, i-1, dp);
        }
        
        return dp[i][W];
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int n = wt.size();
        
        vector<vector<int>> dp (n, vector<int>(W+1, -1));
        return solve(W, val, wt, n-1, dp);
        
    }
};