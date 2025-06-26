class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if(left == right) return right;
        if(!(left&&right)) return 0;

        int a = ceil(log2(left + 1));
        int b = floor(log2(right));
        if (a <= b) return 0;

        int ans = left;
        for(long long i = left+1; i<=right; i++){
            ans&=i;
        }
        return ans;
    }
};
