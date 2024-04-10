from queue import Queue
class Solution:
    def deckRevealedIncreasing(self, deck: List[int]) -> List[int]:
        q = Queue()
        l = len(deck)
        ans = [0]*l
        deck.sort()
        for i in range(l):
            q.put(i)
        for i in range(l):
            ans[q.get()] = deck[i]
            if not q.empty():
                q.put(q.get())
        return ans
        