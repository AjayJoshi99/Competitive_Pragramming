class Solution {
public:
    int missingNumber(vector<int>& n) {
        int ans = 0;
        for(int i = 0; i<n.size(); i++){
            ans = ans^n[i]^(i+1);
        }
        return ans;
    }
};