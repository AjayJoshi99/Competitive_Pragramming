class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int mn = 1e7;
        for(string s : strs){
            mn = min((int)s.size(), mn);
        }
        int i = 0;
        while(i<mn){
            char c = strs[0][i];
            for(string s : strs){
                if(s[i]!=c) return ans;
            }
            ans += c;
            i++;
        }
        return ans;
    }
};