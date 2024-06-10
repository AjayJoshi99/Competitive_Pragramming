class Solution:
    def findLongestChain(self, pairs: List[List[int]]) -> int:
        pairs.sort()
        l = len(pairs)
        dp = [0]*l 
        dp[l-1] = 1
        for i in range(l-2,-1,-1):
            for j in range(i+1,l):
                if pairs[i][1]< pairs[j][0]:
                    dp[i] = max(dp[i],dp[j]+1)
                    
        return max(dp)
                    
                    

                    




