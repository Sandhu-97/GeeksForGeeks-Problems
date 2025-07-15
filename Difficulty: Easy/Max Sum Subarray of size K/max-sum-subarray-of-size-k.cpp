class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int i=0;
        int j=0;
        int sum=0;
        int maxi=INT_MIN;
        
        for(j=0;j<arr.size();j++){
            sum+=arr[j];
            
            if (j-i+1>k){
                sum-=arr[i];
                i++;
            }
            if(j-i+1==k){
                maxi=max(sum, maxi);
            }
        }
        return maxi;
    }
};