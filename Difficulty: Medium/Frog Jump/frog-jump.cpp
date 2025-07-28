class Solution {
  public:
    int minCost(vector<int>& height) {
        if(height.size()<2) return 0;
        int n = height.size();
        vector<int> dp(n, 0);
        dp[n-2] = abs(height[n-1]-height[n-2]);
        for(int i = n-3; i>-1; i--){
            dp[i] = min(abs(height[i]-height[i+1])+dp[i+1], abs(height[i]-height[i+2])+dp[i+2]);
        }
        return dp[0];
    }
};