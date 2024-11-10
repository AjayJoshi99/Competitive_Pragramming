class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row_start =0;
        int col_start = 0;
        int row_end = matrix.size()-1;
        int col_end = matrix[0].size()-1;
        vector<int> ans;
        
        while(row_start<=row_end && col_start<=col_end){
            int n = col_start;
            while(n<=col_end){
                ans.push_back(matrix[row_start][n++]);
            }
            row_start+=1;
            
            n = row_start;
            while(n<=row_end){
                ans.push_back(matrix[n++][col_end]);
            }
            col_end-=1;
            
            if (row_start <= row_end) {
                n = col_end;
                while(n>=col_start){
                    ans.push_back(matrix[row_end][n--]);
                }
                row_end-=1;
            }
            
            if (col_start <= col_end) {
                n = row_end;
                while(n>=row_start){
                    ans.push_back(matrix[n--][col_start]);
                }
                col_start+=1;
            }
        }
        return ans;
    }
};