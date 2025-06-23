class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        bool c1 = !(n&(n-1));
        bool c2 = int(floor(log2(n))+1)%2 == 1;
        return c1 && c2;
    }
};