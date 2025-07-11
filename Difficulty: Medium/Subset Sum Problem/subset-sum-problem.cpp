class Solution {
  public:
    bool solve(int i, vector<int>& arr, int sum){
        
        if (sum<0) return false;
        if (i>=arr.size()){
            if (sum==0) return true;
            return false;
        }
        return solve(i+1, arr, sum-arr[i]) || solve(i+1, arr, sum);
        
        
        
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        return solve(0, arr, sum);
        
    }
};