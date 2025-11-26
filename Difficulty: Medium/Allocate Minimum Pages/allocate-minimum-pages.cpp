class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        if(arr.size()<k) return -1;
        int low = 0, high = 0;
        for(int i : arr){
            low = max(low, i);
            high += i;
        }
        while(low<=high){
            int mid = low + (high-low)/2;
            
            if(helper(arr, mid, k)){
                high = mid -1;
            }else{
                low = mid +1;
            }
        }
        return low;
    }
  private : 
    bool helper(vector<int> &arr, int m, int k){
        int students = 1;
        int pages = 0;
    
        for(int x : arr){
            if(pages + x > m){
                students++;
                pages = x;
                if(students > k) return false;
            } else {
                pages += x;
            }
        }
    
        return true;
    }
};