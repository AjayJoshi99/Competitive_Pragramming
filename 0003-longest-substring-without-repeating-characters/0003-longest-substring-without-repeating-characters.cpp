class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0) return 0;
        vector<int> v(256, 0); 
        int i = 0, j = 0, answer = 0;
        while (j < s.size()) {
            if (v[s[j]] == 0) {
                v[s[j]] = 1;
                j++;
            } else {
                while(v[s[j]] == 1) {
                    v[s[i]] = 0;
                    i++;
                }
                v[s[j]] = 1;
                j++;
            }
            answer = max(answer, j-i);
        }
        return answer;
    }
};
