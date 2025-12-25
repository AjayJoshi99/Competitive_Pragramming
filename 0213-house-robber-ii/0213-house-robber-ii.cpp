class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        int case1 = helper(nums, 1, n-1);
        int case2 = helper(nums, 0, n-2);
        return max(case1, case2);
    }

private:
    int helper(vector<int>& nums, int start, int end) {
        int prev2 = 0;   
        int prev1 = 0;   

        for(int i = start; i <= end; i++) {
            int curr = max(prev2 + nums[i], prev1);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};
