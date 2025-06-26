// User function template for C++
class Solution {
  public:

    int KthLSB(long long int n, int k) {
        k--;
        return 1&(n>>k);
    }
};