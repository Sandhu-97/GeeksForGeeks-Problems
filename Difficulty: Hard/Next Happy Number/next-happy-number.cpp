class Solution {
    
  public:
    bool solve(int n){
        if (n==1 || n==7) return true;
        if (n<10) return false;
        int sum=0;
        while (n){
            int digit = n%10;
            sum += (digit*digit);
            n/=10;
        }
        return solve(sum);
    }
    
    int nextHappy(int N) {
        // code here
        while (true){
            N++;
            if (solve(N)) return N;
        }
        
        return 0;
    }
};