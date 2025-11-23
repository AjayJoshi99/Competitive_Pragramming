class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size()-1, mn = 1000000;

        while(low<=high){
            int mid = low + (high - low)/2;
            mn = min(mn, nums[mid]);
            if(nums[low]<=nums[mid]){
                mn = min(mn, nums[low]);
                low = mid +1;
            }else{
                mn = min(mn, nums[mid+1]);
                high = mid-1;
            }
        }
        return mn;
    }
};