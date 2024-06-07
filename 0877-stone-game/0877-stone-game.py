class Solution:
    def stoneGame(self, nums: List[int]) -> bool:
        dp = {}
        def dfs(l,r,alic_turn):

            if (l,r,alic_turn) in dp:
                return dp[(l,r,alic_turn)]
                
            if l >= r:
                return 0

            a = 0
            b = 0
            if alic_turn:
                # alic takes from front or from back, 
                # whatever one leads to a better score thats why max()
                a = max(dfs(l,r-1, not alic_turn)+nums[r] , dfs(l+1,r, not alic_turn)+nums[l])
            else:
                # bob takes from front or from back, 
                # whatever one leads to a better score  
                b = max(dfs(l,r-1, not alic_turn) +nums[r], dfs(l+1,r, not alic_turn)+nums[l])
            

            dp[(l,r,alic_turn)]  = a > b
            return a > b


        return  dfs(0,len(nums)-1,True)