class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& p, int k) {
        sort(p.begin(), p.end());
        int i = 0, j = p.size()-1;
        vector<int> ans(2,0);
        while(i<j){
            ans[0] += p[i];
            j-= k;
            i++;
        }
        if(i==j){
            ans[0] += p[i];
        }
        i = p.size()-1;
        j = 0;
        while(i>j){
            ans[1] += p[i];
            j+= k;
            i--;
        }
        if(i==j){
            ans[1] += p[i];
        }
        return ans;
    }
};