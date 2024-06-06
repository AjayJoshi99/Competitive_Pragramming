class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;
        int dp[1000][1000];
        memset(dp, 0, sizeof(dp));
        for(int i = 0; i < s.length(); i++){
            for(int j = 0, k = i; j < s.length() && k < s.length(); j++, k++){
                if(k-j==0){
                    dp[j][k] = 1;
                    count++;
                }
                else if(k-j == 1){
                    if(s[j] == s[k]){
                        dp[j][k] = 1;
                        count++;
                    }
                }
                else{
                    if(s[j]==s[k] && dp[j+1][k-1]==1){
                        dp[j][k] = 1;
                        count++;
                    }
                }
            }
        }
        return count;
    }
};