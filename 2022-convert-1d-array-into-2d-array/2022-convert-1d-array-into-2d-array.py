class Solution:
    def construct2DArray(self, original: List[int], m: int, n: int) -> List[List[int]]:
        l = len(original)
        if m*n != l : return []
        ans = [[]]
        count = n
        k = 0
        for i in original:
            if count :
                ans[k].append(i)
                count-=1
            else:
                count = n - 1
                ans.append([])
                k+=1
                ans[k].append(i)
        return ans