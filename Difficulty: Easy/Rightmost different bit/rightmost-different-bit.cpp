class Solution {
  public:
    int posOfRightMostDiffBit(int m, int n) {
        //  code here
        int x = m^n;
        
        int i=1;
        while (x>0){
            if (x&1==1) return i;
            i++;
            x>>=1;
        }
        return -1;
        
    }
};