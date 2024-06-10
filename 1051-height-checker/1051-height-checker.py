class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        expected = heights.copy()
        expected.sort()
        ans = 0
        for i,j in zip(expected,heights):
            if i != j : ans+=1
        return ans