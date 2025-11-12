class Solution {
public:
    bool wildCard(string &txt, string &pat) {
        int i = 0, j = 0, starIdx = -1, matchIdx = 0;

        while (i < txt.size()) {
            if (j < pat.size() && (pat[j] == txt[i] || pat[j] == '?')) {
                i++;
                j++;
            }
            else if (j < pat.size() && pat[j] == '*') {
                starIdx = j++;
                matchIdx = i;
            }
            else if (starIdx != -1) {
                j = starIdx + 1;
                i = ++matchIdx;
            }
            else {
                return false;
            }
        }

        while (j < pat.size() && pat[j] == '*') j++;

        return j == pat.size();
    }
};
