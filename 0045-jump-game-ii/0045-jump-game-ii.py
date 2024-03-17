class Solution:
    def jump(self, nums: List[int]) -> int:
        l = r = 0
        nJumps = 0
        while r < len(nums) - 1:
            nJumps += 1
            furthest = max([i + nums[i] for i in range(l,r+1)])
            l,r = r+1, furthest

        return nJumps
        
        
        """num_len = len(nums)
        dp = [10**4+1]*num_len
        num_len-=1
        dp[num_len]=0
        for i in range(num_len-1,-1,-1):
            temp = nums[i]
            if  i+temp >= num_len :
                dp[i]=1
            else :
                j = i+temp
                while j>i :
                    dp[i] = min(dp[i],dp[j]+1)
                    temp-=1
                    j = i+temp
        return dp[0]"""
        