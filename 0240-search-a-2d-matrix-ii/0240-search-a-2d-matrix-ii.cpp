class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int c = matrix[0].size()-1, r = 0;
        while(r < matrix.size() && c >= 0 ){
            if(matrix[r][c] == target) return true;
            if(matrix[r][c]<target){
                r+=1;
            }else{
                c-=1;
            }
        }
        return false;
    }
};