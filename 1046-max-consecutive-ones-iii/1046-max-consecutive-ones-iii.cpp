class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans = 0, i = 0, j = 0, z = 0;
        while(j<nums.size()){
            if(nums[j]==0 ){
                if(z<k) z++;
                else{
                    while(nums[i]==1) i++;
                    i++;
                }
            }
            ans = max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};