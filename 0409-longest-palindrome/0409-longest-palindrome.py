class Solution:
    def longestPalindrome(self, s: str) -> int:
        d = {}
        for i in s:
            d.update({i:s.count(i)})
        ans ,temp = 0,0
        for i in d:
            if d[i]&1==0: ans+=d[i]
            else: 
                if temp < d[i]:
                    ans+= max(temp-1,0)
                    temp = d[i]
                else:
                    ans = ans + d[i]-1
        return ans + temp
                    
            