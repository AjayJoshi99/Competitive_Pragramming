class Solution {
  public:
    bool isSubsetSum(vector<int>& arr, int sum) {
        sort(arr.begin(), arr.end());
        return helper(arr, sum, 0,0);
    }
  private : 
    bool helper(vector<int>& a, int s, int curr, int idx){
        if(s==curr) return true;
        if(idx == a.size() || s<curr){
            return false;
        }
        return helper(a,s,curr+a[idx],idx+1) || helper(a,s,curr,idx+1);
    }
};