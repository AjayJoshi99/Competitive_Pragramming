class Solution:
    def removeDuplicates(self, s: str) -> str:
        ans = []
        for i in range(len(s)):
            if ans and s[i]== ans[-1]:
                ans.pop()
            else :
                ans.append(s[i])
        return "".join(ans)
                    
                
                    