class Solution:
    def maximumHappinessSum(self, happiness: List[int], k: int) -> int:
        dec = 0
        ans = 0
        happiness.sort(reverse = True)
        for i in range(k):
            if happiness[i]-dec >=0 : ans+= happiness[i]-dec
            dec+=1
        return ans
        