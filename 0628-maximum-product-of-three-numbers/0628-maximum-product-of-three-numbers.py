class Solution:
    def maximumProduct(self, nums: List[int]) -> int:
        n = len(nums)

        #Get first 2 element sorted
        for i in range(2):
            k = i
            for j in range(i + 1, n):
                if nums[j] < nums[k]:
                    k = j
            nums[i], nums[k] = nums[k], nums[i]

        # Get Last 3 element sorted
        for i in range(n - 1, max(-1, n - 4), -1):
            k = i
            for j in range(i):
                if nums[j] > nums[k]:
                    k = j
            nums[i], nums[k] = nums[k], nums[i]

        return max(
            nums[-1] * nums[-2] * nums[-3],
            nums[-1] * nums[0] * nums[1]
        )


        # nums.sort()

        # return mnumsx([nums[0]*nums[1]*nums[2], nums[0]*nums[1]*nums[-1], nums[-1]*nums[-2]*nums[-3]])
