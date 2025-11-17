class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans = 0, right = 0;
        map<char,int> m = {{'a', -1}, {'b', -1}, {'c', -1}};

        while(right<s.size()){
            m[s[right]] = right;
            if(m['a'] != -1 && m['b'] != -1 && m['c'] != -1){
                ans +=  min(m['a'], min(m['b'], m['c'])) + 1;
            }
            right++;
        }
        return ans;
    }
};