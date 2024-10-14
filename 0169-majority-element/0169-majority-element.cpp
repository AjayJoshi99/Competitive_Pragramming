class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size()/2;
        map<int,int> m;
        for(int i : nums){
            m[i]++;
        }
        for(auto val:m){
            if(val.second>n) return val.first;
        }
        return 0;
    }
};