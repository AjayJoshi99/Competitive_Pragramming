class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if(nums.size()==1) return 1;
        int inc=0, dec=0,curr = 1,ans=0;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i]>nums[i-1]){
                curr++;
            }else{
                ans = max(ans,curr);
                curr = 1;
            }
        }
        ans = max(ans,curr);
        curr = 1;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i]<nums[i-1]){
                curr++;
            }else{
                ans = max(ans,curr);
                curr = 1;
            }
        }
        
        ans = max(ans,curr);
        return ans;
    }
};