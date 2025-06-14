class Solution {
public:
    int mySqrt(int x) {
        int st = 1, end = x, ans = 0;
        while(st<=end){
            int mid = st + (end - st)/2;
            if(mid <= x/mid ){
                st = mid +1;
                ans = mid;
            }else{
                end = mid -1;
            }
        }
        return end;
    }
};