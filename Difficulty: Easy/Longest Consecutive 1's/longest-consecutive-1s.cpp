class Solution {
  public:
    int maxConsecutiveOnes(int n) {
        // code here
        vector<int> bits;
        
        while (n>0){
            int rem = n%2;
            bits.push_back(rem);
            n/=2;
        }
        
        int sum=0;
        int maxi=-1;
        for (int i: bits){
            if (i==1) {
                sum+=i;
                maxi=max(sum, maxi);
            }
            if (i==0) sum=0;
        }
        return maxi;
    }
};
