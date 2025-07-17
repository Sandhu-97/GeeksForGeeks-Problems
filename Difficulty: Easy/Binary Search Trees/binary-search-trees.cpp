// User function Template for C++

class Solution {
  public:
    bool isBSTTraversal(vector<int>& arr) {
        // your code here
        unordered_set<int> st;
        for (int i=0;i<arr.size()-1;i++){
            if (arr[i]>arr[i+1]) return false;
            if (!st.insert(arr[i]).second) return false;
        }
        return true;
    }
};