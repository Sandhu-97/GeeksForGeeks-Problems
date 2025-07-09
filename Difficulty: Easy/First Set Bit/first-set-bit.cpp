class Solution {
  public:
    int getFirstSetBit(int n) {
        // code here
        int pos=0;
        
        while (n>0){
            pos++;
            if ((n&1)==1) break;
            n=n>>1;
        }
        return pos;
    }
};