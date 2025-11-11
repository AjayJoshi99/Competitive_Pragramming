class Solution {
  public:
    int minSuperSeq(string &s1, string &s2) {
        vector<vector<int>> dp(s1.size()+1, vector<int>(s2.size()+1));
        for(int i = 0; i<s1.size(); i++){
            for(int j = 0; j<s2.size(); j++){
                if(s1[i]==s2[j]) dp[i+1][j+1] = dp[i][j]+1;
                else{
                    dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
                }
            }
        }
        int temp = dp[s1.size()][s2.size()];
        int ans =temp + abs((int)temp - (int)s1.size()) + abs((int)temp - (int)s2.size());
        return ans;
    }
};