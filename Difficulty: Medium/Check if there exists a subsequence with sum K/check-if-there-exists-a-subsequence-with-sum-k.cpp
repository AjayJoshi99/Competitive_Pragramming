class Solution {
  public:
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
        return helper(arr, k, 0,0);
    }
    
  private:
    bool helper(vector<int>& nums, int &target, int current, int i){
        if(current == target){ return true; }
        if(i==nums.size() || (current > target)) return false ;
        
        return helper(nums, target, current+nums[i], i+1)|| helper(nums, target, current, i+1);
    }
};