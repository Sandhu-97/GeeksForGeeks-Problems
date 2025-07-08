class Solution {
  public:
    vector<int> leftSmaller(vector<int> arr) {
        // code here
        stack<int> st;
        
        for (int i=0;i<arr.size();i++){
            while (!st.empty() && st.top() >= arr[i]){
                st.pop();
            }
            
            int lesser = st.empty()?-1:st.top();
            st.push(arr[i]);
            arr[i]=lesser;
        }
        return arr;
    }
};