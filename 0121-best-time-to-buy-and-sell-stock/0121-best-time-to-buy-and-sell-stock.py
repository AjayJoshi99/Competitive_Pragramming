class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        l = len(prices)
        lp,rp = 0,1
        max_profit = 0
        while rp < l:
            if prices[rp] > prices[lp]:
                profit = prices[rp] - prices[lp]
                max_profit = max(max_profit,profit)
            else:
                lp = rp
            rp=rp+1
        
        return max_profit