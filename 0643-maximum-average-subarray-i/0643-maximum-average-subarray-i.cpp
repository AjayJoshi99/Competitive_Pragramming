class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = -10000000, curr = 0;
        int i = 0, j = 0;
        
        while(j<k){
            curr += nums[j];
            j++;
        }

        ans = max(ans, curr/k);
        while(j<nums.size()){
            curr= curr + nums[j] - nums[i];
            ans = max(ans, curr/k);
            i++;
            j++;
        }
        return ans;

    }
};