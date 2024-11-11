class Solution {
public:
    int missingNumber(vector<int>& n) {
        int total = 0;
        for(int val : n){
            total+=val;
        }
        return n.size()*(n.size()+1)/2 - total;
    }
};