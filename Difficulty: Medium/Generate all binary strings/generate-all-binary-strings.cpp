class Solution {
  public:
  
    void solve (int i, int n, string temp, vector<string>& ans){
        if (i==n) {
            ans.push_back(temp);
            return;
        }
        
        solve(i+1, n, temp+"0", ans);
        solve(i+1, n, temp+"1", ans);
        
        
    }
    vector<string> binstr(int n) {
        // code here
        vector<string> ans;
        solve(0, n, "", ans);
        return ans;
        
    }
};
