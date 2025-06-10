class Solution {
public:
    double myPow(double x, int num){
        if(num == 0 || x == 1) return 1;
        if( x == -1) {
            if(num&1 == 1) return -1;
            return 1;
        }
        long long n = num;
        if(num<0){
            x = 1/x;
            n = (long long)num*(-1);
        }
        double ans = 1;
        while(n>0){
            if((n&1) == 0){
                ans *= x*x;
                n-=2;
            }else{
                ans*=x;
                n-=1;
            }
        }
        return ans;
    }
    
};