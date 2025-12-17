class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<bool> freq(nums.size());
        vector<int> curr;
        helper(nums, ans, curr, freq);
        return ans;
    }
private : 
    void helper(vector<int>& nums, vector<vector<int>> &ans, vector<int> &curr, vector<bool> &freq){
        if(curr.size()==nums.size()){
            ans.push_back(curr);
            return;
        }
        for(int i = 0; i<nums.size(); i++){
            if(!freq[i]){
                freq[i] = true;
                curr.push_back(nums[i]);
                helper(nums, ans, curr, freq);
                freq[i]=false;
                curr.pop_back();
            }
        }
    }
};