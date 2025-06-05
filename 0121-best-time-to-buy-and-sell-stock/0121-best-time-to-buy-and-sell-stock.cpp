class Solution {
public:
    int maxProfit(vector<int>& p) {
        int small = p[0], maxP = 0;
        for(int i : p){
            small = min(small, i);
            maxP = max(maxP, i-small);
        }  
        return maxP;  
    }
};

