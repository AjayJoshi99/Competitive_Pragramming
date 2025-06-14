// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int st = 1, end = n;
        while(st<=end){
            int mid = st + (end - st)/2;
            if(isBadVersion(mid)){
                if(mid-1>-1 && !isBadVersion(mid-1)) return mid;
                end = mid-1;
            }else{
                if(mid+1<=n && isBadVersion(mid+1)) return mid + 1;
                st = mid+1;
            }
        }
        return false;
    }
};