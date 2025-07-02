class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(), false));
        int ans = 0;
        for(int i = 0; i<grid.size(); i++){
            for(int j = 0; j<grid[0].size(); j++){
                    if(!visited[i][j] && grid[i][j] == '1'){
                        ans++;
                        visited[i][j] = true;
                        DFS(grid, visited, i, j);
                    }
            }
        }
        return ans;
    }

    void DFS(vector<vector<char>>& grid, vector<vector<bool>> &visited, int i , int j){
        vector<vector<int>>  v = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for(vector<int> p : v){
            int r = p[0]+i, c = p[1]+j;
            if(isValid(grid, r, c) && !visited[r][c] && grid[r][c] == '1'){
                visited[r][c] = true;
                DFS(grid, visited, r,c);
            }
        }
    }

    bool isValid(vector<vector<char>>& grid, int i, int j){
        int row = grid.size();
        int col = grid[0].size();
        if(i>-1 && j> -1 && i<row && j<col) return true;
        return false;
    }
};