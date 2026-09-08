class Solution:
    def countCommas(self, n: int) -> int:
        ans = 0

        if n < 1000 : return 0
        
        return n - 1000 + 1