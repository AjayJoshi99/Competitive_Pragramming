class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        helper(candidates, target, 0, ans, {});
        return ans;
    }

private :
    void helper(vector<int>& c, int t, int i, vector<vector<int>> &ans, vector<int> curr){
        if(t==0){
            ans.push_back(curr);
            return ;
        }
        for(int j = i; j<c.size(); j++){
            if(j>i && c[j]==c[j-1]) continue;
            if(c[j] > t) break;

            curr.push_back(c[j]);
            helper(c,t-c[j], j+1, ans, curr);
            curr.pop_back();
        }
    }
};