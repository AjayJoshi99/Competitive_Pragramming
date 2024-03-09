class Solution:
    def lengthOfLIS(self, nums1: List[int]) -> int:
        nums2 = nums1.copy()
        nums2.sort()
        l = len(nums1)
        dp = [[0] * (l + 1) for _ in range(l + 1)]
        prev = -100
        for i in range(1,l+1):
            for j in range(1,l+1):
                if nums1[i-1] == nums2[j-1] and nums1[i-1]!=prev:
                    dp[i][j] = 1 + dp[i-1][j-1]
                else :
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1])
                prev = nums2[j-1]
        return dp[l][l]
        