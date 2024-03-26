class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        nums=list(set(nums))
        nums.sort()
        temp = 1
        for i in range(len(nums)):
            if nums[i]>0:
                if temp == nums[i]:
                    temp = temp+1
                else: return temp
        return temp
        