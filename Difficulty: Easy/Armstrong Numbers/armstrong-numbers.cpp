// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        int sum = 0, num = n;
        while(n){
            sum += pow(n%10,3);
            n/=10;
        }
        return sum==num;
        
        // if(n==153||n==370||n==371||n==407) return true;
        // return false;
    }
};
