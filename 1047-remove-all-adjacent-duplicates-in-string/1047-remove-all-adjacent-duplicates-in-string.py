class Solution:
    def removeDuplicates(self, s: str) -> str:
        ans = []
        l = -1
        for i in range(len(s)):
            if l+1 and s[i]== ans[l]:
                ans.pop()
                l-=1
            else :
                ans.append(s[i])
                l+=1
        return "".join(ans)
                    
                
                    