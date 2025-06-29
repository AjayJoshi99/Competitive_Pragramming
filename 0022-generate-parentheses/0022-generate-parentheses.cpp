class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s = "";
        helper(ans, n, 0, 0, s);
        return ans;
    }
    void helper(vector<string> &ans, int n, int o, int c, string &s){
        if(o==c && o==n){
            ans.push_back(s);
            return ;
        }
        if(o<n){
            s.push_back('(');
            helper(ans, n, o+1,c,s);
            s.pop_back();
        }
        if(o>c){
            s.push_back(')');
            helper(ans, n, o, c+1,s);
            s.pop_back();
        }
    }
};