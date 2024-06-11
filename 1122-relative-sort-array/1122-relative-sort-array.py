class Solution:
    def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
        map = {}
        temp = []
        ans = []
        for i in arr2:
            map.update({i:0})
        for j in arr1:
            if j in map:
                map[j]+=1
            else:
                temp.append(j)
        for k in arr2:
            ans += [k]*map[k]
        temp.sort()
        ans+=temp
        return ans
            