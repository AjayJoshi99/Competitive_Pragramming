class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> v(nums.size()+1, 0);
        for(vector<int> q : queries){
            v[q[0]]+=1;
            v[q[1]+1]-=1;
        }
        for(int i = 1; i<nums.size(); i++){
            v[i]+=v[i-1];
        }
        for(int i = 0; i<nums.size(); i++){
            if(v[i]<nums[i]) return false;
        }
        return true;
    }
};