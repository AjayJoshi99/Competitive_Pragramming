class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        helper(nums, ans, 0, {});
        return ans;
    }
private : 
    void helper(vector<int>& nums, vector<vector<int>> &ans, int idx, vector<int> curr){
        ans.push_back(curr); 
        for(int i = idx; i<nums.size(); i++){
            if(i!=idx && nums[i]==nums[i-1]) continue;
            curr.push_back(nums[i]);
            helper(nums, ans, i+1, curr);
            curr.pop_back();
        }
    }
};