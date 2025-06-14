class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int end = *max_element(piles.begin(), piles.end()), st = 1;
        while(st<=end){
            int mid = st + (end - st)/2;
            if(helper(piles, mid, h)) end = mid -1;
            else st = mid +1;
        }
        return st;
    }
    bool helper(vector<int>& piles, int n, int h){
        long long temp = 0;
        for(int i : piles){
            temp += ceil((double)i/n);
        }
        return temp<=h;
    }
};