class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int nxt=-1;
        for(int i =0; i<nums.size(); i++){
            if(nums[i]!=val){
                nums[nxt+1]=nums[i];
                nxt+=1;
            }
        }
        return nxt+1;
    }
};