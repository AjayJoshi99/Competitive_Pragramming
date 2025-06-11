// User function template for C++
class Solution {
  public:
    /* Function to replace every element with the
    next greatest element */
    vector<int> nextGreatest(vector<int> arr) {
        int mx = -1;
        for(int i = arr.size()-1; i>-1; i--){
            int temp = arr[i];
            arr[i] = mx;
            mx = max(temp, mx);
        }
        return arr;
    }
};