class Solution {
public:
    int ans = 0;
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

        for (auto& s : strs) {
            int zeros = count(s.begin(), s.end(), '0');
            int ones = s.size() - zeros;
            
            for (int i = m; i >= zeros; i--) {
                for (int j = n; j >= ones; j--) {
                    dp[i][j] = max(dp[i][j], 1 + dp[i - zeros][j - ones]);
                }
            }
        }
        return dp[m][n];
    }

private:
    void helper(vector<string>& strs, vector<vector<int>>& v, int idx, int m, int n, int one, int zero, int l) {
        if (zero > m || one > n) return;
        if (idx >= strs.size()) {
            ans = max(ans, l);
            return;
        }

        helper(strs, v, idx + 1, m, n, one + v[idx][1], zero + v[idx][0], l + 1);
        helper(strs, v, idx + 1, m, n, one, zero, l);
        ans = max(ans, l);
    }

    void fillv(vector<vector<int>>& v, vector<string>& strs) {
        for (int i = 0; i < strs.size(); i++) {
            int zero = 0, one = 0;
            for (char c : strs[i]) {
                if (c == '0') zero++;
                else one++;
            }
            v[i][0] = zero;
            v[i][1] = one;
        }
    }
};
