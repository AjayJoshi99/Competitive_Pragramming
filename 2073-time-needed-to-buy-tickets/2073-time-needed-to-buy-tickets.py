class Solution:
    def timeRequiredToBuy(self, tickets: List[int], k: int) -> int:
        ans = 0
        count = 0
        for i in range(k+1,len(tickets)):
            if tickets[i]>= tickets[k]: count+=1
        for x in tickets:
            if x <= tickets[k] : ans += x
            else : ans+=tickets[k]
        return ans-count
            