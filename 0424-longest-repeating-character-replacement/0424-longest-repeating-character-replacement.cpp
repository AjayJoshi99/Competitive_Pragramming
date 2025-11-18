class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0, right = 0, mxlen = 0;
        vector<int> v(26);
        while(right<s.size()){
            v[s[right]-'A']++;
            int maxValue = *max_element(v.begin(), v.end());
            int temp = right - left + 1 - maxValue;
            if(temp<=k){
                mxlen = max(mxlen, right-left+1);
            }else{
                v[s[left]-'A']--;
                left++;
            }
            right++;
        }
        return mxlen;
    }
};