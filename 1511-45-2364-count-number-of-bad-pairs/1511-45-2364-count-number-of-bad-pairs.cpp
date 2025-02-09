class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int> m;
        long long  ans=0;
        for(int i =0; i<nums.size(); i++){
            nums[i]-=i;
            
        }
        // [3,0,2,2]

        for(int i = nums.size()-1; i>-1; i--){
            m[nums[i]] += 1;
            if(m[nums[i]]==1) {
                ans+= nums.size()-i-1;
            }else{
                ans += nums.size()-i-1 - m[nums[i]]+1;
            }
        }
        return ans;
    }
};