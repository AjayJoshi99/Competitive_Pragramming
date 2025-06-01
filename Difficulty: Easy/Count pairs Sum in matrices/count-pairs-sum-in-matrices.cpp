class Solution {
  public:
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
        int l = mat1.size()-1;
        int i = 0, j = 0, n = l, m = l, ans = 0;
        while(i<=l && j<=l && n>-1 && m>-1){
            int temp = mat1[i][j]+mat2[n][m];
            if(temp == x){
                ans+=1;
                j+=1;
                m-=1;
            }
            else if(temp<x){
                j+=1;
            }
            else{
                m-=1;
            }
            if(j==l+1){
                i+=1;
                j = 0;
            }
            if(m==-1){
                n-=1;
                m = l;
            }
        }
        return ans;
        
    }
};