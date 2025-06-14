class Solution {
public:
    int maxDistance(vector<int>& p, int m) {
        sort(p.begin(), p.end());
        int st = 0, end = p[p.size()-1], ans = 0;

        while(st<=end){
            int mid = st + (end-st)/2;
            if(helper(p,mid,m)){
                ans = mid;
                st = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        return ans;
    }
    bool helper(vector<int> &p, int mid, int m){
        int prev = p[0];
        m--;
        for(int i : p){
            if(i-prev >= mid){
                prev = i;
                m--;
                if(m==0) return true;
            }
        }
        if(m>=1) return false;
        return true;
    }
};