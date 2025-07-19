class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int maxi=  INT_MIN;
        int currSum = 0;
        
        for (int i: arr){
            currSum+=i;
            maxi=max(maxi, currSum);
            if (currSum<0) currSum=0;
        }
        return maxi;
    }
};