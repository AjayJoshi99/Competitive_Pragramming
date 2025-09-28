class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        j = -1
        for i in range(len(nums)):
            if nums[i]!=0 and i != j and j != -1:
                nums[j] = nums[i]
                nums[i] = 0
                j+=1
            if j == -1 and nums[i]==0: j = i 
        