class Solution:
    def rob(self, nums: List[int]) -> int:
        l = len(nums)
        dp = [-1]*l
        def helper(idx):
            if idx >= l : return 0
            if dp[idx]!=-1 : return dp[idx]
            a = nums[idx] + helper(idx+2)
            b = helper(idx+1)
            dp[idx] = max(a,b)
            return dp[idx]
        return helper(0)