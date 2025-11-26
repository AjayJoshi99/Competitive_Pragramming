class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
        int low = 0, high = 0;
        for(int n : arr){
            low = max(low, n);
            high += n;
        }
        while(low <= high){
            int mid = low + (high - low)/2;
            
            if(helper(arr, mid, k)){
                high = mid -1;
            }else{
                low = mid +1;
            }
        }
        return low;
    }
  private : 
    bool helper(vector<int>& a, int m, int k){
        int painters = 1;
        int paint = 0;
        for(int n : a){
            if(paint + n > m){
                painters++;
                paint = n;
                if(painters > k) return false;
            } else {
                paint += n;
            }
        }
        return true;   
    }

};