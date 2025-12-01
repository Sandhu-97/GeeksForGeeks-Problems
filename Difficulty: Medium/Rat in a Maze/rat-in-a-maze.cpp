class Solution {
  public:
    void solve(int i, int j, string& temp, vector<string>& ans, vector<vector<int>>& maze){
        if (i==maze.size()-1 && j==maze[0].size()-1) {
            ans.push_back(temp);
            return;
        }
        if (i<0 || j<0 || i>=maze.size() || j>=maze[0].size() || maze[i][j]!=1)  return;
        
        maze[i][j]=0;
        temp.push_back('D');
        solve(i+1, j, temp, ans, maze);
        temp.pop_back();

        temp.push_back('L');
        solve(i, j-1, temp, ans, maze);
        temp.pop_back();


        temp.push_back('R');
        solve(i, j+1, temp, ans, maze);
        temp.pop_back();


        temp.push_back('U');
        solve(i-1, j, temp, ans, maze);
        temp.pop_back();
        maze[i][j]=1;
        
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector<string> ans;
        string temp;
        solve(0,0,temp,ans, maze);
        return ans;
    }
};