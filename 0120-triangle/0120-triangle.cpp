class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size();
        vector<int> dp(m + 1, INT_MAX);

        dp[1] = triangle[0][0];

        for (int i = 1; i < m; i++) {
            for (int j = i + 1; j >= 1; j--) {
                dp[j] = min(dp[j], dp[j - 1]) + triangle[i][j - 1];
            }
        }
        return *min_element(dp.begin() + 1, dp.end());
    }
};
