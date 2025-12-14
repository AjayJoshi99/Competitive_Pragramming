class Solution {
 public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        helper(candidates, target, ans, {}, 0,0);
        return ans;
    }
 private :
    void helper(vector<int>& c, int t, vector<vector<int>> &ans, vector<int> curr, int sum, int i){
        if(sum==t){ ans.push_back(curr); return ;}
        if(i>=c.size() || sum>t) return ;

        //pick
        curr.push_back(c[i]);
        helper(c, t, ans, curr, sum+c[i], i);

        //not pick
        curr.pop_back();
        helper(c,t,ans,curr,sum,i+1);

    }

};