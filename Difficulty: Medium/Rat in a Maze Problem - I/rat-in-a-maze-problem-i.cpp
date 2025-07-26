class Solution {
  public:
  
    void solve(int i, int j, int n, vector<vector<int>>& maze, string& path, vector<string>& ans){
        if (i==n-1 && j==n-1){
            ans.push_back(path);
            return;
        }
        if (i<0 || j<0 || i>=n || j>=n || maze[i][j]!=1) return;
        
        
        maze[i][j]=0;
        path.push_back('D');
        solve(i+1, j, n, maze, path, ans);
        path.pop_back();
        
        path.push_back('L');
        solve(i, j-1, n, maze, path, ans);
        path.pop_back();
        
        path.push_back('R');
        solve(i, j+1, n, maze, path, ans);
        path.pop_back();
        
        path.push_back('U');
        solve(i-1, j, n, maze, path, ans);
        path.pop_back();
        
        maze[i][j]=1;
        
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        string path = "";
        vector<string> ans;
        
        solve(0,0,maze.size(),maze,path,ans);
        return ans;
        
        
    }
};