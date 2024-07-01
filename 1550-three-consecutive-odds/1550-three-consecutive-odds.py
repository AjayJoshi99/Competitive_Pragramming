class Solution:
    def threeConsecutiveOdds(self, arr: List[int]) -> bool:
        t = 3
        for i in arr:
            if i%2==1:
                t-=1
            else:
                t=3
            if t ==0: return True
        return False