class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int ans = 0, b = 1;
        while(n){
            ans += b*(!(n&1));
            b*=2;
            n>>=1;
        }
        return ans;
    }
};