class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size()/3;
        vector<int> ans;
        map<int,int>m;
        for(int i :nums){
            m[i]++;
        }
        for(auto val:m){
            if(val.second>n) ans.push_back(val.first);
        }
        return ans;
    }
};