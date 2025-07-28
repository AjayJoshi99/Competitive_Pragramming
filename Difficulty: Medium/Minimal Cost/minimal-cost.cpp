class Solution {
  public:
    int minimizeCost(int k, vector<int>& arr) {
        int n = arr.size();
        vector<int> dp(n, 0);
        for(int i = n-2; i>-1; i--){
            int j = i+1, temp = INT_MAX, count = 0;
            while(j<n && count < k){
                temp = min(temp, abs(arr[i]-arr[j])+dp[j]);
                j++;
                count++;
            }
            dp[i] = temp;
        }
        return dp[0];
    }
};