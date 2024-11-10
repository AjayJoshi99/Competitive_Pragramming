class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int nxt=0;
        for(int i =1; i<nums.size(); i++){
            if(nums[i]!=nums[i-1]){
                nums[nxt+1]=nums[i];
                nxt+=1;
            }
        }
        return nxt+1;
    }
};