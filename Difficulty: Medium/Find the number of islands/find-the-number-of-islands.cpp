//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<pair<int,int>> dir = {{0,1}, {1,1}, {1,0}, {1,-1}, 
                                {0,-1}, {-1,-1}, {-1,0}, {-1,1}};
    
    bool isSafe(int i, int j, vector<vector<char>> &grid) {
        if(i < grid.size() && i >= 0 && j < grid[0].size() && j >= 0 && grid[i][j] == '1') {
            return true;
        }   
        return false;
    }
    
    void traverse(int i, int j, vector<vector<char>> &grid) {
        grid[i][j] = '-';
        
        for(auto d : dir) {
            int x = i + d.first;
            int y = j + d.second;
            
            if(isSafe(x,y,grid)) {
                traverse(x,y,grid);
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        int n = grid.size(), m = grid[0].size();
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == '1') {
                    traverse(i,j,grid);
                    ans++;
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends