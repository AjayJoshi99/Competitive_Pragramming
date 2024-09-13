class Solution:
    def xorQueries(self, arr: List[int], queries: List[List[int]]) -> List[int]:
        n = len(arr)
        pre = [0] * n
        pre[0] = arr[0]
        
        for i in range(1, n):
            pre[i] = pre[i - 1] ^ arr[i]
        res = []
        
        for left, right in queries:
            if left == 0:
                res.append(pre[right])
            else:
                res.append(pre[right] ^ pre[left - 1])
        
        return res