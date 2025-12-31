class Solution {
public:
    int minDistance(string word1, string word2) {
        int n = word1.size(), m = word2.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
        return solve(word1, word2, n, m, dp);
    }

private:
    int solve(string &s1, string &s2, int i, int j, vector<vector<int>> &dp) {
        if (i == 0) return j;   // insert all j characters
        if (j == 0) return i;   // delete all i characters

        if (dp[i][j] != -1) return dp[i][j];

        if (s1[i - 1] == s2[j - 1]) {
            return dp[i][j] = solve(s1, s2, i - 1, j - 1, dp);
        }

        int insertOp  = 1 + solve(s1, s2, i,     j - 1, dp);
        int deleteOp  = 1 + solve(s1, s2, i - 1, j,     dp);
        int replaceOp = 1 + solve(s1, s2, i - 1, j - 1, dp);

        return dp[i][j] = min({insertOp, deleteOp, replaceOp});
    }
};
