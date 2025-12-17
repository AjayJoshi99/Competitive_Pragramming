class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> curr;
        helper(nums, ans, curr, 0);
        return ans;
    }

private:
    void helper(vector<int>& nums, vector<vector<int>>& ans, vector<int>& curr, int idx) {

        if (idx == nums.size()) {
            ans.push_back(curr);
            return;
        }

        curr.push_back(nums[idx]);
        helper(nums, ans, curr, idx + 1);
        curr.pop_back();

        int i = idx + 1;
        while (i < nums.size() && nums[i] == nums[idx]) {
            i++;
        }
        helper(nums, ans, curr, i);
    }
};
