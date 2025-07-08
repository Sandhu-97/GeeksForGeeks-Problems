class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        stack<int> st;
        
        for (int i = arr.size() - 1; i >= 0; i--) {
            // Remove all elements smaller than current
            while (!st.empty() && st.top() <= arr[i]) {
                st.pop();
            }
            
            int greater = st.empty() ? -1 : st.top();
            st.push(arr[i]);
            arr[i] = greater;
        }
        
        return arr;
    }
};
