class Solution {
public:
    int findGCD(vector<int>& v) {
        int mx = *max_element(v.begin(), v.end());
        int mn = *min_element(v.begin(), v.end());
        return helper(mx,mn);
    }
    int helper(int a, int b){
        return b ? helper(b, a%b) : a;
    }
};