class Solution {
public:
    string removeOccurrences(string s, string part) {
        string ans = "";
        for (char c : s) {
            ans += c;
            if (ans.size() >= part.size() && ans.substr(ans.size() - part.size()) == part) {
                ans.erase(ans.size() - part.size());
            }
        }
        return ans;
    }
};
