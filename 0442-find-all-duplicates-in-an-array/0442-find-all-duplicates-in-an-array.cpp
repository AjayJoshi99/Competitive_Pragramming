class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_set<int> m;
        vector<int> ans;
        for(int val:nums){
            if(m.contains(val)){
                ans.push_back(val);
            }else{
             m.insert(val);   
            }
        }
        return ans;
    }
};