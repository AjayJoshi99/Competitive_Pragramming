class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = 0, high = 0;
        for(int n : nums){
            low = max(low, n);
            high += n;
        }
        while(low <= high){
            int mid = low + (high - low)/2;
            
            if(helper(nums, mid, k)){
                high = mid -1;
            }else{
                low = mid +1;
            }
        }
        return low;
    }
private : 
    bool helper(vector<int>& a, int m, int k){
        int subarray = 1;
        int sum = 0;
        for(int n : a){
            if(sum + n > m){
                subarray++;
                sum = n;
                if(subarray > k) return false;
            } else {
                sum += n;
            }
        }
        return true;   
    }
};