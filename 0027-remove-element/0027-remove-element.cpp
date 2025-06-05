class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int nxt=0;
        for(int i =0; i<nums.size(); i++){
            if(nums[i]!=val){
                nums[nxt]=nums[i];
                nxt+=1;
            }
        }
        return nxt;
    }
};