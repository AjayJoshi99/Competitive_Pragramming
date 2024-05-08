class Solution:
    def findRelativeRanks(self, score: List[int]) -> List[str]:
        d = {}
        ans = []
        new_arr = score.copy()
        new_arr.sort(reverse = True)
        for i, item in enumerate(new_arr):
            if i == 0 :
                d[item] = 'Gold Medal'
            elif i == 1:
                d[item] = "Silver Medal"
            elif i == 2:
                d[item] = 'Bronze Medal'
            else :
                d[item] = str(i+1)
        for i in score :
            ans.append(d[i])
        return ans