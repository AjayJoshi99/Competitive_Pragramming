class Solution {
public:
    string baseNeg2(int n) {
        if(n==0) return "0";
        string ans = "";
        while(n){
            if(n%-2 == 0) ans.push_back('0');
            else{
                ans.push_back('1');
                n--;
            }
            n/=-2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};