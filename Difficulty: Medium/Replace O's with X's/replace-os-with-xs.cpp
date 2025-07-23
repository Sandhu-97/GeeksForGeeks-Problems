// User function Template for C++

class Solution {
  public:
    vector<vector<char>> fill(vector<vector<char>>& mat) {
        // code here
        
        int rows = mat.size();
        int cols = mat[0].size();
        vector<vector<bool>> visited (rows, vector<bool>(cols, false));
        queue<pair<int,int>> q;
        
        for (int i=0;i<rows;i++){
            if (mat[i][0]=='O') {
                q.push({i, 0});
                visited[i][0] = true;
            }
            if (mat[i][cols-1]=='O') {
                q.push({i, cols-1});
                visited[i][cols-1]=true;
            }
        }
        
        for (int i=0;i<cols;i++){
            if (mat[0][i]=='O') {
                q.push({0,i});
                visited[0][i] = true;
            }
            if (mat[rows-1][i]=='O') {
                q.push({rows-1, i});
                visited[rows-1][i] = true;
            }
        }
        
        
        int dx[] = {1,-1,0,0};
        int dy[] = {0,0,1,-1};
        while (!q.empty()){
            int size=q.size();
            for (int i=0;i<size;i++){
                auto front = q.front();
                q.pop();
                int r = front.first;
                int c = front.second;
                for(int i=0;i<4;i++){
                    int newrow = r+dx[i];
                    int newcol = c+dy[i];
                    
                    if (newrow>0 && newcol>0 && newrow< rows && newcol<cols && !visited[newrow][newcol] && mat[newrow][newcol]=='O'){
                        q.push({newrow, newcol});
                        visited[newrow][newcol] = true;
                    }
                }
            }
        }
        
        for (int i=0;i<rows;i++){
            for (int j=0;j<cols;j++){
                if (mat[i][j]=='O' && !visited[i][j]) mat[i][j]='X';
            }
        }
        return mat;
    }
};