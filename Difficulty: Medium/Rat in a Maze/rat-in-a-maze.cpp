class Solution {
  public:
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        int n = maze.size();
        vector<string> ans;
        vector<vector<int>> vis(n, vector<int>(n, 0));

        if(maze[0][0] == 1)
            helper(0, 0, "", maze, ans, vis);

        return ans;
        
    }
  private : 
    void helper(int i, int j, string s, vector<vector<int>>& maze, vector<string> &ans,  vector<vector<int>>& vis){
        int n = maze.size();

        if(i == n - 1 && j == n - 1){
            ans.push_back(s);
            return;
        }
        vis[i][j] = 1;

        // Down
        if(i + 1 < n && maze[i + 1][j] == 1 && !vis[i + 1][j])
            helper(i + 1, j, s + 'D', maze, ans, vis);

        // Left
        if(j - 1 >= 0 && maze[i][j - 1] == 1 && !vis[i][j - 1])
            helper(i, j - 1, s + 'L', maze, ans, vis);

        // Right
        if(j + 1 < n && maze[i][j + 1] == 1 && !vis[i][j + 1])
            helper(i, j + 1, s + 'R', maze, ans, vis);

        // Up
        if(i - 1 >= 0 && maze[i - 1][j] == 1 && !vis[i - 1][j])
            helper(i - 1, j, s + 'U', maze, ans, vis);

        vis[i][j] = 0;  
        
        
    }
};