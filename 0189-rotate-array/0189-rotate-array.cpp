class Solution {
public:
        void rotate(vector<int>& nums, int k) {
        k = k % nums.size(); 
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
        
            // vector<int> temp(k);
            // k = k%nums.size();
            // int j =k-1, n = nums.size()-1;
            // for(int i =n; i>n-k; i--){
            //     temp[j--]=nums[i];
            // }
            // for(int i = n-k; i>=0; i--){
            //     nums[i+k] = nums[i];
            // }
            // for(int i =0; i<k;i++){
            //     nums[i] = temp[i];
            // }
    }
};