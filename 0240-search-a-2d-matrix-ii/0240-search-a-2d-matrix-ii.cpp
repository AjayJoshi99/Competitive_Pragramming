class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        long long n = matrix.size()-1;
        while(n>-1){
            if(search(matrix[n], target)){
                return true;
            }
            n--;
        }
        return false;
    }

    bool search(vector<int> &v, int num){
        long long n = 0, m = v.size()-1;
        while(n<=m){
            long long mid = (n+m)/2;
            if(v[mid]==num) return true;
            if(v[mid]<num) n = mid+1;
            else m = mid-1;
        }
        return false;
    }
};