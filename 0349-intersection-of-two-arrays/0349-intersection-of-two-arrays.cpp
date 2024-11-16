class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<bool> b(1001,0);
        vector<int> ans;
        for(int i : nums1){
            b[i]=1;
        }
        for(int j : nums2){
            if(b[j] != 0){
                ans.push_back(j);
                b[j] = 0;
            }
        }
        return ans;
    }
};