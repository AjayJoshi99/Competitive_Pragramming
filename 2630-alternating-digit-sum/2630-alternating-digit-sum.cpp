class Solution {
public:
    int alternateDigitSum(int n) {
        int digits = floor(log10(n)) + 1;
        bool positive = true;
        if(digits%2==0){
            positive = false;
        }
        int sum = 0;
        while(n){
            if(positive){
                sum+=n%10;
            }else{
                sum-=n%10;
            }
            positive = !positive;
            n/=10;
        }
        return sum;
    }
};