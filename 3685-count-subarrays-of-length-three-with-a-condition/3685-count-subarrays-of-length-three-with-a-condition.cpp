class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int i = 0, j = 2, count = 0;
        while(j<nums.size()){
            if(nums[i]+nums[j] == (float)nums[i+1]/2) count++;
            i++;
            j++;
        }
        return count;
    }
};