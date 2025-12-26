class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<int> dp(m + 1, INT_MAX);

        dp[1] = grid[0][0];
        for (int j = 2; j <= m; j++) {
            dp[j] = dp[j - 1] + grid[0][j - 1];
        }
        dp[0] = INT_MAX; 
        for (int i = 2; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                dp[j] = min(dp[j], dp[j - 1]) + grid[i - 1][j - 1];
            }
        }

        return dp[m];
    }
};
