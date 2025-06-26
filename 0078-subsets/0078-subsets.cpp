class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(0, nums, ans, temp);
        return ans;
    }

    void helper(int i, vector<int>& nums, vector<vector<int>>& ans, vector<int>& temp ){
        if( i == nums.size() ){
            ans.push_back(temp);
            return ;
        }
        temp.push_back(nums[i]);
        helper(i+1, nums, ans, temp);

        temp.pop_back();
        helper(i+1, nums, ans, temp);
    }
};