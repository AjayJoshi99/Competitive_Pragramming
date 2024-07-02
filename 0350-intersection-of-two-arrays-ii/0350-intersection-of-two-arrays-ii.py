class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        s = set(nums1)
        t = set(nums2)
        d = {}
        result = []
        for i in s:
            d.update({i:nums1.count(i)})
        
        for i in s:
            if i in d:
                temp = nums2.count(i)
                if d[i] <= temp:
                    result.extend([i]*d[i])
                else:
                    result.extend([i]*temp)
        return result
                    
                    
                    
                    