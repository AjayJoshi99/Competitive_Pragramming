// User function Template for C++
class Solution {
  public:
    long long int bitsAreInAltOrder(long long int n) {
        bool flag = (n & 1); 
        while(n){
            if((n & 1) != flag) return false;
            flag = !flag;
            n >>= 1;
        }
        return true;
        
    }
};