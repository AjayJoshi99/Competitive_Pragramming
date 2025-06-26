class Solution {
public:
    string baseNeg2(int n) {
        if(n==0) return "0";
        string ans = "";
        while(n){
            int r = n%-2;
            if(r<0){
                r = 1;
                n--;
            }
            ans = to_string(r) + ans;
            n/=-2;
        }
        return ans;
    }
};