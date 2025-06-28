class Solution {
public:
    bool isHappy(int n) {
       int slowPointer = n;
        int fastPointer = helper(n);
        while(fastPointer != 1 && fastPointer != slowPointer){
            slowPointer = helper(slowPointer);
            fastPointer = helper(helper(fastPointer));
        }
        return fastPointer==1;
    }
    int helper(int n){
        int temp = 0;
        while(n>0){
            int rem = n%10;
            temp += rem*rem;
            n/=10;
        }
        return temp;
    }
};