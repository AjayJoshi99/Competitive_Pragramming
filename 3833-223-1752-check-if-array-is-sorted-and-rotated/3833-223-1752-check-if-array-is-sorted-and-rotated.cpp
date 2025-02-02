class Solution {
public:
    bool check(vector<int>& nums) {
    int violate = 0;
    for(int i =0; i<nums.size()-1; i++){
        if(nums[i]>nums[i+1]) violate++;
    }
    if(violate==1) return nums[0]>=nums[nums.size()-1];
    else if(violate==0) return 1;
    return 0;
}

};