// User function Template for C++

class Solution {
  public:
    bool isPalindrome(int n) {
        int num = 0, temp = n;
        while(temp){
            num = num*10+temp%10;
            temp/=10;
        }
        return num == n;
    }
};