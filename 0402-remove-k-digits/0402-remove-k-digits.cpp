class Solution {
public:
    string removeKdigits(string num, int k) {
    vector<char> st;  
    for (char c : num) {
        while (!st.empty() && k > 0 && st.back() > c) {
            st.pop_back();
            k--;
        }
        st.push_back(c);
    }

    while (k > 0) {   
        st.pop_back();
        k--;
    }

    string ans = "";
    for (char c : st) ans.push_back(c);

    int i = 0;
    while (i < ans.size() && ans[i] == '0') i++;

    ans = ans.substr(i);
    return ans == "" ? "0" : ans;
}

};