class Solution:
    def longestPalindrome(self, str:str)->str:
        pal = ""
        for i in range(len(str)):
            l,r = i,i #odd lengths
            found = self.findpal(str,l,r)
            if len(pal) <len(found):
                pal = found
            l,r = i,i+1
            found = self.findpal(str,l,r)
            if len(pal) <len(found):
                pal = found
        return pal
    def findpal(self,s,l,r):
        ls = len(s)
        while l>=0 and r<ls and s[l]==s[r]:
            l-=1
            r+=1
        return s[l+1:r]

