class Solution {
  public:
    // int ans = INT_MAX;
    // int minDeletions(string s) {
    //     helper(s,0,s.size()-1,0);
    //     return ans;
    // }
    // void helper(string st, int s, int e, int d){
    //     if(s==e || s>e) {ans = min(ans,d); return;}
    //     if(st[s]!=st[e]){
    //         helper(st, s+1,e,d+1);
    //         helper(st,s,e-1,d+1);
    //     }else{
    //         helper(st,s+1,e-1,d);
    //     }
    // }
    
    int minDeletions(string s) {
        int n = s.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return helper(s, 0, n - 1, dp);
    }
    
    int helper(string &s, int i, int j, vector<vector<int>> &dp) {
        if (i >= j) return 0;
        if (dp[i][j] != -1) return dp[i][j];
        
        if (s[i] == s[j]) {
            dp[i][j] = helper(s, i + 1, j - 1, dp);
        } else {
            dp[i][j] = 1 + min(helper(s, i + 1, j, dp), helper(s, i, j - 1, dp));
        }
        return dp[i][j];
    }

};