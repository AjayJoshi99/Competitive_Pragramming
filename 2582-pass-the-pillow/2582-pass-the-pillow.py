class Solution:
    def passThePillow(self, n: int, time: int) -> int:
        if time <n : return time+1
        elif time == n: return n-1
        else:
            rem = time%(n-1)
            if (time//(n-1))&1==1: return n-rem
            return rem+1