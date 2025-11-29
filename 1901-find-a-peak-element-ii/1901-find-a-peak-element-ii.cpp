class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int row = 0;
            for (int i = 1; i < m; i++) {
                if (mat[i][mid] > mat[row][mid]) {
                    row = i;
                }
            }

            int left  = (mid - 1 >= 0) ? mat[row][mid - 1] : -1;
            int right = (mid + 1 < n) ? mat[row][mid + 1] : -1;
            int curr = mat[row][mid];

            if (curr > left && curr > right) {
                return {row, mid};
            }

            if (left > curr) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return {-1, -1}; 
    }
};
