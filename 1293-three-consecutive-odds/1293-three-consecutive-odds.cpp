class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int ContinueFrequencyOdd = 0;
        for(int num : arr){
            if(num&1==1) ContinueFrequencyOdd +=1;
            else ContinueFrequencyOdd = 0;
            if(ContinueFrequencyOdd == 3) return true;
        }
        return false;
    }
};