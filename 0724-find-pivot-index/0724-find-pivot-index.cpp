class Solution {
public:
    int pivotIndex(vector<int>& nums) {
//         vector<int> prefix(nums.size()),postfix(nums.size());
//         for(int i = nums.size()-2; i>-1; i--){
//             postfix[i] = postfix[i+1] + nums[i+1];
            
//         }
//         for(int i =1; i<nums.size();i++){
//             prefix[i] = prefix[i-1]+nums[i-1];
            
//         }
//         for(int i =0; i<nums.size();i++){
//            if(postfix[i]==prefix[i]) return i;
//         }
        
        int total=0,left=0;
        for(int val: nums){
            total+=val;
        }
        for(int i =0; i<nums.size(); i++){
            if(left == total-left-nums[i]) return i;
            left+=nums[i];
        }
        return -1;
    }
};