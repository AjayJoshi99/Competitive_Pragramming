class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0, right = 0, mxlen = 0;
        map<char, int> m;

        while(right<s.size()){
            m[s[right]]++;
            int maxValue = INT_MIN;
            for (auto &p : m) {
                maxValue = max(maxValue, p.second);
            }
            int temp = right - left + 1 - maxValue;
            if(temp<=k){
                mxlen = max(mxlen, right-left+1);
            }else{
                m[s[left]]--;
                left++;
            }
            right++;
        }
        return mxlen;
    }
};