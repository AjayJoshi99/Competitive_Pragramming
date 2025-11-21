class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        int l = 0, r = arr.size()-1, ans = -1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(arr[mid]<=x){ 
                ans = mid;
                l = mid+1;
            }else{
                r = mid-1;
            }
        }
        return ans;
    }
};
