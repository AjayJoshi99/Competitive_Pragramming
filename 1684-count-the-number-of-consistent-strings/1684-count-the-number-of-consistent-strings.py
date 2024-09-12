class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        s = set()
        ans=0
        for i in allowed:
            s.add(i)
        for i in words:
            for j in i:
                if j not in s: break
            else:
                ans+=1
        return ans