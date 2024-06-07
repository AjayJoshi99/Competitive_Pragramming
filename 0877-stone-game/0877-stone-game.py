class Solution:
    def stoneGame(self, piles: List[int]) -> bool:
        memo = {}
        def take(left, right):
            # Look-up DP Table
            if (left, right) in memo:
                return memo[(left, right)]
            # Base case
            if left == right:
                return piles[left]
            # General cases
            # Option_1
            take_first_pile = piles[left] - take(left+1, right)

            # Option_2
            take_last_pile = piles[right] - take(left, right-1)

            memo[(left, right)] = max( take_first_pile,  take_last_pile)
            return memo[(left, right)]
        
        return take(0, len(piles)-1) > 0