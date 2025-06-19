class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool flag = (n & 1); 
        while(n){
            if((n & 1) != flag) return false;
            flag = !flag;
            n >>= 1;
        }
        return true;
    }
};