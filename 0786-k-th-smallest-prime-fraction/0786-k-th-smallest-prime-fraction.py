class Solution:
    def kthSmallestPrimeFraction(self, arr: List[int], k: int) -> List[int]:
        d = {}
        for i in range(len(arr)):
            for j in range(i+1,len(arr)):
                d.update({arr[i]/arr[j]:[arr[i],arr[j]]})
        d = dict(sorted(d.items(),key=lambda x:x[0]))
        for i, item in enumerate(d):
            if i == k-1 :
                return d[item]
            