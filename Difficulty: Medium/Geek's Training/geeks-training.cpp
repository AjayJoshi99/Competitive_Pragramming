class Solution {
  public:
    int maximumPoints(vector<vector<int>>& arr) {
        vector<int> dp(3);
        dp[0] = arr[0][0];
        dp[1] = arr[0][1];
        dp[2] = arr[0][2];
        
        for(int i = 1; i<arr.size(); i++){
            int a = max(dp[1], dp[2]) + arr[i][0];
            int b = max(dp[0], dp[2]) + arr[i][1];
            int c = max(dp[0], dp[1]) + arr[i][2];
            
            dp[0] = a;
            dp[1] = b;
            dp[2] = c;
        }
        return max(dp[0], max(dp[1], dp[2]));
        
    }
};