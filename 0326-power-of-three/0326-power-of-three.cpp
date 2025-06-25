class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<1) return false;
        double base3 = log(n)/log(3);
        return abs(base3 - round(base3)) < 1e-10;
    }
};