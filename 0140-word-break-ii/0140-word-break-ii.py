class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> List[str]:
        memo = {}
        def wordsEndingIn(i):
            if i == len(s):
                return [""]
            if i in memo:
                return memo[i]
            ans = []
            for j in range(i+1, len(s)+1):
                if s[i:j] in wordDict:
                    for tail in wordsEndingIn(j):
                        if tail != '':
                            ans.append(s[i:j] + " " + tail) 
                        else:
                            ans.append(s[i:j])
            memo[i] = ans
            return ans
        return wordsEndingIn(0)