class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        d1 = {}
        d2 = {}
        for a,b in zip(s,t):
            if a in d1:
                if d1[a] != b: return False
            else:
                if b in d2: return False
            d1[a] = b
            d2[b] = a
        return True