class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(
            n, vector<vector<int>>(2, vector<int>(3, -1))
        );
        return f(0, 1, 2, prices, n, dp);
    }
    int f(int i, int buy, int cap, vector<int>& p, int n,
        vector<vector<vector<int>>>& dp) {

        if (i == n || cap == 0) return 0;

        if (dp[i][buy][cap] != -1)
            return dp[i][buy][cap];

        int profit = 0;

        if (buy) {
            int take = -p[i] + f(i + 1, 0, cap, p, n, dp);
            int skip = f(i + 1, 1, cap, p, n, dp);
            profit = max(take, skip);
        } else {
            int sell = p[i] + f(i + 1, 1, cap - 1, p, n, dp);
            int skip = f(i + 1, 0, cap, p, n, dp);
            profit = max(sell, skip);
        }
        return dp[i][buy][cap] = profit;
    }
};