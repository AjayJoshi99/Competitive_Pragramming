class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int ans;
        int s = accumulate(weights.begin(), weights.end(), 0);  //sum of all weight
        int st = *max_element(weights.begin(), weights.end()), end = s;
        while(st<=end){
            int mid = st + (end-st)/2;
            if(helper(weights, mid, days)){
                ans = mid;
                end = mid-1;
            }else{
                st = mid + 1;
            }
        }
        return ans;
    }

    bool helper(vector<int> &weights, int capacity, int d){
        int requiredDays = 1, currentLoad = 0;
        for (int w : weights) {
            if (currentLoad + w > capacity) {
                requiredDays++;
                currentLoad = 0;
            }
            currentLoad += w;
        }
        return requiredDays <= d;
    }
};