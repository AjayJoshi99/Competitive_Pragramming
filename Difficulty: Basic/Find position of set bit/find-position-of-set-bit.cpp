class Solution {
  public:
    int findPosition(int n) {
        if( n&(n-1) || n == 0 ) return -1;
        return floor(log2(n)) + 1;
    }
};