class Solution:
    def removeDuplicates(self, s: str) -> str:
        ans = []
        for i in range(len(s)):
            if len(ans) and ans[-1] != s[i]:
                ans += s[i]
            elif not len(ans) :
                ans += s[i]
            else :
                while len(ans) and ans[-1] == s[i]:
                    ans.pop()
        return "".join(ans)
                    
                
                    