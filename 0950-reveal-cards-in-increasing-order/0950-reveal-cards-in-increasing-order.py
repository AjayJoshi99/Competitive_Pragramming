class Solution:
    def deckRevealedIncreasing(self, deck: List[int]) -> List[int]:
        l = len(deck)
        ans = [0]*l
        q = deque(range(l))
        deck.sort()
        for i in range(l):
            ans[q.popleft()] = deck[i]
            if q :q.append(q.popleft())
        return ans
        