class Solution:
    def rob(self, nums: List[int]) -> int:
        n = len(nums)
        if n == 1:
            return nums[0]
        dp = [0] * n
        dp[0] = nums[0]
        dp[1] = max(nums[0], nums[1])
        
        for i in range(2, n):
            dp[i] = max(dp[i-1], nums[i] + dp[i-2])
        
        return dp[-1] 
""" 
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
"""