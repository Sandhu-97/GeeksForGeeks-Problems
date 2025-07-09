class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
        int i = 1<<k;
        return (n&i)==i;
    }
};