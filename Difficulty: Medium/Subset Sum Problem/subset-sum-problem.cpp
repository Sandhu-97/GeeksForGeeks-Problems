class Solution {
  public:
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n = arr.size();
        vector<vector<bool>> dp(n+1, vector<bool>(sum+1, false));
        
        for (int i=0;i<n+1;i++) dp[i][0]=true;
        
        for (int i=1;i<n+1;i++){
            for (int j=1;j<sum+1;j++){
                if (arr[i-1]<=j){
                    dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
                }
                
                else if (arr[i-1]>j) dp[i][j] = dp[i-1][j];
            }
        }
        
        return dp[n][sum];
    }
};