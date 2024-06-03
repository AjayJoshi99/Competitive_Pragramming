class Solution:
    def appendCharacters(self, s: str, t: str) -> int:
        i = 0
        j = 0
        end1 = len(s)-1
        end2 = len(t)-1
        while i<=end1 and j<=end2:
            if s[i]==t[j]:
                i+=1
                j+=1
            else:  i+=1
        if j == end2+1: return 0
        else: return end2-j+1