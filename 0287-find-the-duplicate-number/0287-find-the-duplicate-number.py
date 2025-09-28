class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        l = [0]*(max(nums)+1)
        for i in nums: 
            if l[i] != 0 : return i
            l[i] = i
        return -1