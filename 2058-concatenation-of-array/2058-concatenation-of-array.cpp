class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        helper(nums, ans);
        helper(nums, ans);
        return ans;
    }
    void helper(vector<int>& nums, vector<int>& ans){
        for(int num : nums){
            ans.push_back(num);
        }
    }
};