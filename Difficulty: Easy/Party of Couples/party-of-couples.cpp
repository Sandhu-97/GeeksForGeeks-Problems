// User function Template for C++

class Solution {
  public:
    int findSingle(vector<int> &arr) {
        // code here
        int ans = 0;
        for (int i: arr) ans^=i;
        return ans;
    }
};