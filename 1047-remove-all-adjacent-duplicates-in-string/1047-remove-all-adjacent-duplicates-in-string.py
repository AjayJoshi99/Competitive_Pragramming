class Solution:
    def removeDuplicates(self, s: str) -> str:
        ans = []
        l = 0
        for i in range(len(s)):
            if l and s[i]== ans[-1]:
                ans.pop()
                l-=1
            else :
                ans.append(s[i])
                l+=1
        return "".join(ans)
                    
                
                    