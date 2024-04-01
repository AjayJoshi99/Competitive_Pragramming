class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        i = len(s)-1
        ans = 0
        while not ans or s[i] != " " and i>-1:
            if s[i]!= " ": 
                ans+=1
            i-=1
        return ans
        