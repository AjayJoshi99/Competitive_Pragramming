class Solution {
public:
    int r, c;
    vector<vector<vector<int>>> dp;

    int solve(int row, int c1, int c2, vector<vector<int>>& grid) {
        if (c1 < 0 || c2 < 0 || c1 >= c || c2 >= c)
            return -1e9;

        if (dp[row][c1][c2] != -1)
            return dp[row][c1][c2];

        int cherries = grid[row][c1];
        if (c1 != c2)
            cherries += grid[row][c2];

        if (row == r - 1)
            return dp[row][c1][c2] = cherries;

        int maxNext = 0;
        for (int d1 = -1; d1 <= 1; d1++) {
            for (int d2 = -1; d2 <= 1; d2++) {
                maxNext = max(maxNext,
                    solve(row + 1, c1 + d1, c2 + d2, grid));
            }
        }

        return dp[row][c1][c2] = cherries + maxNext;
    }

    int cherryPickup(vector<vector<int>>& grid) {
        r = grid.size();
        c = grid[0].size();

        dp = vector<vector<vector<int>>>(
            r, vector<vector<int>>(c, vector<int>(c, -1)));

        return solve(0, 0, c - 1, grid);
    }
};
