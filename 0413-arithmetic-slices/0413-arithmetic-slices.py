class Solution:
    def numberOfArithmeticSlices(self, nums: List[int]) -> int:
        l = len(nums)
        if l<3: return 0
        dp = [0]*l
        ans = 0
        for i in range(2,l):
            if nums[i] - nums[i-1]== nums[i-1]-nums[i-2]:
                dp[i] = dp[i-1]+1
                ans+=dp[i]
        return ans