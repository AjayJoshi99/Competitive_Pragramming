class Solution {
public:
    int cutRod(vector<int> &price) {
        int n = price.size();
        vector<vector<int>> dp(n, vector<int>(n + 1, -1));
        return helper(price, dp, n - 1, n);
    }

private:
    int helper(vector<int> &p, vector<vector<int>> &dp, int idx, int len) {
        if (idx == 0) {
            return len * p[0];  
        }
        if (dp[idx][len] != -1)
            return dp[idx][len];

        int notTake = helper(p, dp, idx - 1, len);
        int take = 0;

        int rodLength = idx + 1;
        if (rodLength <= len) {
            take = p[idx] + helper(p, dp, idx, len - rodLength);
        }

        return dp[idx][len] = max(take, notTake);
    }
};
