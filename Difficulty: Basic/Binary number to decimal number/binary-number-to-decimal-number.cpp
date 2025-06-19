class Solution {
  public:
    int binaryToDecimal(string &b) {
       int ans = 0, base = 1, i = b.size() - 1;
       while(i>-1){
           if(b[i] == '1'){
               ans += base;
           }
           base*=2;
           i--;
       }
       return ans;
    }
};