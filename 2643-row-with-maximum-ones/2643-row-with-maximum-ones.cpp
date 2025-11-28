class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int mx = 0, count = 0;
        for(int i = 0; i<mat.size(); i++){
            int temp = helper(mat[i]);
            if(temp>count){
                mx = i;
                count = temp;
            }
        }
        return {mx, count};
    }

private : 
    int helper(vector<int> &v) {
        int cnt = 0;
        for (int x : v)
            cnt += x;
        return cnt;
    }
};