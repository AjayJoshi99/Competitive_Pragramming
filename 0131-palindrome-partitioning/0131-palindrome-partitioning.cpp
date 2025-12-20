class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> curr;
        helper(s, ans, curr, 0);
        return ans;
    }
private :
    void helper(string s, vector<vector<string>> &ans,vector<string> &curr, int idx){
        if(idx == s.size()){
            ans.push_back(curr);
            return ;
        }
        for(int i = idx; i<s.size(); i++){
            if(possible(s, idx, i)){
                curr.push_back(s.substr(idx, i - idx + 1));
                helper(s, ans, curr, i+1);
                curr.pop_back();
            }
        }
    }
    bool possible(string s, int st, int end){
        while(st<end){
            if(s[st++]!=s[end--]) return false;
        }
        return true;
    }
};