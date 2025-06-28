class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = 0; 
        int x = start ^ goal;

        while(x!=0){
            ans += x & 1;
            x >>=1;
        }
        return ans;
    }
};