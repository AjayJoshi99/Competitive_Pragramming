class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int val:nums){
            m[val]++;
        }
        for(pair<int,int> row:m){
            if(row.second==2){
                ans.push_back(row.first);
            }
        }
        return ans;
    }
};