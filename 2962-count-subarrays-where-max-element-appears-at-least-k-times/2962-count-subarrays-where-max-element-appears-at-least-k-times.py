class Solution:
    def countSubarrays(self, nums: List[int], k: int) -> int:
        n = len(nums)
        maxi = max(nums)
        i, j, cnt, ans = 0, 0, 0, 0
        while j < n:
            if nums[j] == maxi:
                cnt += 1
            if cnt >= k:
                while cnt >= k:
                    ans += n - j
                    if nums[i] == maxi:
                        cnt -= 1
                    i += 1
            j += 1

        return ans