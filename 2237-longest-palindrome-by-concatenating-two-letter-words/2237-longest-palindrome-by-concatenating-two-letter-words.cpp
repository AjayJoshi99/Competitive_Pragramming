class Solution {
public:
    int longestPalindrome(vector<string>& words) {
         int freq[26][26] = {};
        int ans = 0;
        for (string& word : words) {
            int a = word[0] - 'a';
            int b = word[1] - 'a';
            if (freq[b][a] > 0) {
                ans += 4;
                freq[b][a]--;
            } else {
                freq[a][b]++;
            }
        }
        for (int i = 0; i < 26; ++i) {
            if (freq[i][i] > 0) {
                ans += 2; 
                break;
            }
        }

        return ans;
    }
};