// User function Template for C++

class Solution {
  public:
  
    int find(int n){
        if (n%4==0) return n;
        if (n%4==1) return 1;
        if (n%4==2) return n+1;
        return 0;
    }
    int findXOR(int l, int r) {
        // complete the function here
        return find(r) ^ find(l-1);
    }
};