class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        int temp1 = 1, temp2 = 2;
        n-=2;
        while(n--){
            int temp = temp2 + temp1;
            temp1 = temp2;
            temp2 = temp;
        }
        return temp2;
    }
};