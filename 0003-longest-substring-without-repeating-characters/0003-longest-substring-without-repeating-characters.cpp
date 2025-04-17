class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0) return 0;

        vector<int> v(256, 0);  // Use 256 to handle all ASCII characters
        int i = 0, j = 0, count = 0, answer = 0;

        while (j < s.size()) {
            if (v[s[j]] == 0) {
                v[s[j]] = 1;
                count++;
                j++;
            } else {
                // Shrink the window until we remove the duplicate character
                while (v[s[j]] == 1) {
                    v[s[i]] = 0;
                    i++;
                    count--;
                }
                // Now we can safely add the new character
                v[s[j]] = 1;
                count++;
                j++;
            }
            answer = max(answer, count);
        }
        return answer;
    }
};
