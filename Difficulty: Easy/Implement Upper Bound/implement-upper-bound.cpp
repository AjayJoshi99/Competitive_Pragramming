class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        int low =0, high = arr.size(), ans = -1;
        
        while(low<=high){
            int mid = low + (high-low)/2;
            
            if(arr[mid]>target){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid +1;
            }
        }
        return ans==-1?arr.size():ans;
        
    }
};
