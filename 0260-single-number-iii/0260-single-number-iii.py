class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        l = len(nums)
        if l==2: return nums
        nums.sort()
        ans = []
        if nums[0]!=nums[1]:
            ans.append(nums[0])
        for i in range(1,l-1):
            if nums[i-1]!=nums[i] and nums[i+1]!=nums[i]:
                ans.append(nums[i])
        if len(ans)<2:
            ans.append(nums[-1])
        return ans