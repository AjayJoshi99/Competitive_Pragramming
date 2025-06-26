class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if(left == right) return right;
        if(!(left&&right)) return 0;
        int a = floor(log2(right));
        long double t =  1<<a;
        if(t>left) return 0;
        int ans = left;
        for(long long i = left+1; i<=right; i++){
            ans&=i;
        }
        return ans;
    }
};
