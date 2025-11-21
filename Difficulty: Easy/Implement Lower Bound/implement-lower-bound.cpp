class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        int l = 0, r = arr.size(), ans = -1;
        while(l<=r){
            int mid = l + (r-l)/2;
            
            if(arr[mid]>=target){ 
                ans = mid;
                r = mid-1;
            }else{
                l = mid+1;
            }
            
        }
        return (ans==-1)?arr.size():ans;
        
    }
};
