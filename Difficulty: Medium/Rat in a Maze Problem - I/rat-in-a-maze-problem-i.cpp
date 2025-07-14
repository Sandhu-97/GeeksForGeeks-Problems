class Solution {
  public:
    vector<string> res;
    
    
    void solve(int i, int j, string& path, vector<vector<int>>& maze){
        if (i<0 || i>=maze.size() || j<0 || j>=maze.size() || maze[i][j]==0) return;
        if (i==maze.size()-1 && j==maze.size()-1) {
            res.push_back(path);
            return;
        }
        
        maze[i][j] = 0;
        
        path.push_back('D');
        solve(i+1, j, path, maze);
        path.pop_back();
        
        path.push_back('L');
        solve(i, j-1, path, maze);
        path.pop_back();
        
        path.push_back('R');
        solve(i, j+1, path, maze);
        path.pop_back();
        
        path.push_back('U');
        solve(i-1, j, path, maze);
        path.pop_back();
        
        
        maze[i][j]=1;
        
        
        
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        string path="";
        solve(0,0,path,maze);
        return res;
        
    }
};