class Solution {
  public:
    int nthRoot(int n, int m) {
        int low = 0, high = m;
        
        while(low<=high){
            int mid = low + (high-low)/2;
            int check = helper(mid,n, m);
            if(check == 1) return mid;
            if(check == 0){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return -1;
    }
private :
    int helper(int num, int n, int m) {
    long long ans = 1;
    long long base = num;

    while (n > 0) {
        if (n & 1) {
            ans *= base;
            if (ans > m) return 0;
        }
        base *= base;
        n >>= 1; 
        
        if (base > m) base = m + 1; 
        
    }

    if (ans == m) return 1;
    return -1;
}

};