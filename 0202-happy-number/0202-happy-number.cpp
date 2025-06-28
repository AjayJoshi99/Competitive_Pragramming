class Solution {
public:
    bool isHappy(int n) {
       unordered_set<int> set;
        while(n!=1 && !set.count(n)){
            set.insert(n);
            n = helper(n);
        }
        return n==1;
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