class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        stack<int> st;
        if (q.size()<k) return q;
        while(k--){
            st.push(q.front());
            q.pop();
        }
        queue<int> q2;
        
        while (!st.empty()){
            q2.push(st.top());
            st.pop();
        }
        while (!q.empty()){
            q2.push(q.front());
            q.pop();
        }
        return q2;
    }
};