class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = helper(nums);
        int st, end;
        if (target >= nums[pivot] && target <= nums[n-1]) {
            st = pivot;
            end = n - 1;
        } else {
            st = 0;
            end = pivot - 1;
        }

        while (st <= end) {
            int mid = st + (end - st)/2;
            if (nums[mid] == target) return mid;
            if (nums[mid] < target) st = mid + 1;
            else end = mid - 1;
        }
        return -1;
    }

    int helper(vector<int>& nums) {
        int st = 0, end = nums.size() - 1;
        while (st < end) {
            int mid = st + (end - st) / 2;
            if (nums[mid] > nums[end]) {
                st = mid + 1;
            } else {
                end = mid;
            }
        }
        return st;
    }
};
