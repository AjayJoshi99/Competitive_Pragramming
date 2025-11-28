class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int num) {
        int n = v.size(), m = v[0].size();
        int st = 0, end = m*n-1;
        while(st<=end){
            int mid = (st+end)/2; 
            int row = mid/m;
            int column = mid%m;
            if(v[row][column] == num) return true;
            if(v[row][column]<num){
                st = mid+1;
            }else{
                end = mid -1;
            }
        }
        return false;
    }
};