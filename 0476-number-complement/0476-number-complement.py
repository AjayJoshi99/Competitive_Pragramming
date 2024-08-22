class Solution:
    def findComplement(self, num: int) -> int:
        base = 1
        ans = 0
        while num:
            if num&1==0:
                ans = ans + base
            base*=2
            num = num>>1
        return ans