class Solution:
    def finalPrices(self, prices: List[int]) -> List[int]:
        stack = []
        for i in range(len(prices)):
            flag = 0
            for j in range(i+1, len(prices)):
                if prices[i] >= prices[j]:
                    flag = 1
                    stack.append(prices[i]-prices[j])
                    break
            if flag == 0 :
                stack.append(prices[i])
        return stack
            