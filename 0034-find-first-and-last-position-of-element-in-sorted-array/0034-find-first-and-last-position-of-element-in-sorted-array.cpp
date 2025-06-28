class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        int sp = lower_bound(nums, low, high, target);
        int ep = lower_bound(nums, low, high, target + 1) - 1;
        if(sp < nums.size() && nums[sp] == target){
            return {sp, ep};
        }
        return {-1, -1};
    }
    int lower_bound(vector<int>& nums, int low, int high, int target){
        while(low <= high){
            int mid = (low + high) >> 1;
            if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low;
    }
};