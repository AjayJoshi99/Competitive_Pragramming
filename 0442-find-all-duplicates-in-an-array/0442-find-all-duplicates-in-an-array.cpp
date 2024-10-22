class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int val:nums){
            m[val]++;
            if(m[val]>=2){
                ans.push_back(val);
            }
        }
        return ans;
    }
};