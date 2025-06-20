class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for(int i = left; i<=right; i++ ){
            if(isPrime(countBit(i))) ans++;
        }
        return ans;
    }
    int countBit(int n){
        int count = 0;
        while(n>0){
            if(n&1) count++;
            n>>=1;
        }
        return count;
    }
    bool isPrime(int n){
        if(n<2) return false;
        if(n==2) return true;
        for(int i = 2; i<=sqrt(n); i++){
            if(n%i==0) return false;
        }
        return true;
    }
};