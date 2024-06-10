class Solution:
    def largestDivisibleSubset(self, nums: List[int]) -> List[int]:
        nums.sort()
        dp = [[] for n in nums] 
        
        for i in reversed(range(len(nums))):
            k = i
            for j in range(i+1, len(nums)):
                if nums[j] % nums[i] == 0 and len(dp[j]) > len(dp[k]):
                    k = j         
            dp[i].extend(dp[k]+[nums[i]])
        
        return max(dp, key = lambda x: len(x))