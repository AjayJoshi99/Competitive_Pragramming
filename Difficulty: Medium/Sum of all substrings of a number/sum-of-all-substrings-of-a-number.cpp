class Solution {
  public:
    int sumSubstrings(string &s) {
        map<char, int> m = {
            {'1', 1}, {'2', 2}, {'3', 3}, {'4', 4}, {'5', 5},
            {'6', 6}, {'7', 7}, {'8', 8}, {'9', 9}, {'0', 0}
        };
        int ans = 0;
        for(int i = 0; i<s.size(); i++){
            int temp = 0, tempSum = 0;
            for(int j = i; j<s.size(); j++){
                temp = temp*10+m[s[j]];
                tempSum+=temp;
            }
            ans+=tempSum;
        }
    return ans;
    }
};