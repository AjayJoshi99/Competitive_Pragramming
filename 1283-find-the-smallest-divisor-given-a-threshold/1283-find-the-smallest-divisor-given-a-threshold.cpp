class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = *max_element(nums.begin(), nums.end()), ans = 0;

        while(low<=high){
            int mid = low + (high-low)/2;

            if(helper(nums, mid, threshold)){
                ans= mid;
                high = mid -1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
private :
    bool helper(vector<int>& nums, int n, int t){
        int ans = 0;
        for(int val : nums){
            ans += ceil((double)val / n);  
            if (ans > t) return false;
        }
        return ans <= t;
    }
};