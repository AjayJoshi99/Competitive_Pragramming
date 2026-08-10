class Solution:
    def maxTask(self, h: list[int], l: list[int]) -> int:
        lth=len(h)
        dp=[0,0,0]
        for cur in range(1,lth+1):
            dp[cur%3]=l[cur-1]+dp[(cur-1)%3]
            dp[cur%3]=max(dp[cur%3],h[cur-1]+dp[(cur-2)%3])
        return dp[lth%3]
