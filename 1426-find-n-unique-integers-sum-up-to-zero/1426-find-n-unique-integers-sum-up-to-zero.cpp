class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans(n);
        int count =  -1*n/2;
        int i = 0;
        while(i<n/2){
            ans[i++] = count++;
        }
        if(n&1){
           i++;
        }
        count++;
        while(i<n){
            ans[i++] = count++;
        }
        return ans;
    }
};