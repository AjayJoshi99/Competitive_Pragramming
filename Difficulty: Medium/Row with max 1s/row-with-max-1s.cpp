// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &mat) {
        int mx = -1, count = 0;
        for(int i = 0; i<mat.size(); i++){
            int temp = helper(mat[i]);
            if(temp>count){
                mx = i;
                count = temp;
            }
        }
        return mx;
    }

private : 
    int helper(vector<int> &v){
        int low = 0, high = v.size()-1;
        while(low<=high){
            int mid = low + (high - low)/2;

            if(v[mid]==1) high = mid -1;
            else low = mid + 1;
        }
        return v.size()-low;
    }
};