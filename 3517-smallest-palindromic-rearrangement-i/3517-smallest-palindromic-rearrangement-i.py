class Solution:
    def smallestPalindrome(self, s: str) -> str:
        l = len(s)

        s = list(s)
        s[:l//2] = sorted(s[:l//2])

        k = l//2 if l % 2 == 0 else l//2 + 1
        
        for i in range(l//2-1, -1, -1):
            s[k] = s[i]
            k+=1
        
        return "".join(s)

