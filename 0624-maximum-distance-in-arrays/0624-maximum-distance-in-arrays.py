class Solution:
    def maxDistance(self, arrays: List[List[int]]) -> int:
        s = arrays[0][0]
        b = arrays[0][-1]
        md = 0
        for i in range(1, len(arrays)):
            arr = arrays[i]
            md = max(md, abs(arr[-1] - s), abs(b - arr[0]))
            s = min(s, arr[0])
            b = max(b, arr[-1])
        return md