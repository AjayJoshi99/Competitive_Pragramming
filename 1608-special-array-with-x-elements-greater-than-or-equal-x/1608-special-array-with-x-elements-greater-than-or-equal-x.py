class Solution:
    def specialArray(self, nums: List[int]) -> int:
        nums.sort()
        l = len(nums)
        for i in range(l+1):
            temp = 0
            for j in range(l):
                if nums[j]>=i: temp+=1
                if temp > i: 
                    break
            if temp == i : return i
        return -1
            
            
            
            