class Solution {
  public:
    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(), stalls.end());
        int low = 0, n = stalls.size()-1, high = stalls[n];
        while(low <= high){
            int mid = low + (high - low)/2;
            
            if(helper(stalls, mid, k)){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return high;
    }
  private : 
    bool helper(vector<int> &s, int m, int k){
        int prev = s[0];
        k--;
        
        for(int n : s){
            if(n-prev>=m){
                prev = n;
                k--;
                if(k==0) return true;
            }
        }
        return false;
        
    }
};